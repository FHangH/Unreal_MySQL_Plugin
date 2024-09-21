# UE4 MySQL插件使用



[toc]



>注意：该项目仅用于个人学习和demo使用，不可应用实际项目中，无论是安全性和性能都不符合需求
>
>
>
>Update To 2.0
>
>修复了一些bool返回结果错误的bug
>
>优化了代码的可读性
>
>更新了新的2.0方法 《SelectOnTableToMap》 取代 1.0方法《SelectOnTableData》
>
>SelectOnTableToMap 采用了TMap<FString, FString>存取数据库查询返回结果集的一整行数据，采用TArray<TMap>的结构保存
>
>在虚幻中TArray，TMap无法作为参数和返回值，所以TArray，TMap会用Struct封装起来使用
>
>
>
>Update To 3.0
>
>修复了 2.0 里 《SelectOnTableToMap》只能读取数据库返回的结果集一行数据的bug
>
>修复了虚幻引擎打包提示了类似".lib"的错误
>
>更换了MySQL第三方库为第三方的MariaDB的库
>
>插件支持UE5.1版的项目打包
>
>[目前插件仅支持Win64或Win32打包，以后会支持到Linux]
>!!!更新个屁啊，写个WebSocket服务器在客户端和数据库之间做转发才是正道，这种用第三方库做插件的纯纯乐子!!!



### 1. 插件获取



[GitHub URL = MySQL Plugin](https://github.com/FHangH/Unreal_MySQL_Plugin)





### 2. 插件安装



1. 新建`UE4`项目，类型随意
2. 在`项目根目录`中新建文件夹`Plugins`
3. 将`FH_MySQL`复制到`Plugins`中
4. 重新打开`UE4项目`





### 3. 插件API



#### 3.1 连接数据库



- 返回一个`MySQL Connector`

  ```c++
  /*
   * Connection == MySQL Object
   * @return *UFH_ConnectionObject == MySQL Connector
  */
  UFUNCTION(BlueprintCallable, Category="MySQL|Utils")
  static UFH_ConnectionObject *ConnectToMySQL(FString Host, FString UserName, FString PassWord, FString DBName,
                                              int32 Port, FString &ConnectMessage);
  ```
  





#### 3.2 获得连接状态



- 返回`bool`，正在连接返回`true`

  ```c++
  /*
   * ConnectionObject == MySQL Object
   * @return bool == ConnectionState
  */
  UFUNCTION(BlueprintCallable, Category="MySQL|Utils")
  static bool GetConnectionState(UFH_ConnectionObject *ConnectionObject);
  ```





#### 3.3 关闭数据库连接



- 肯定会关掉，默认返回`true`

  ```c++
  /*
   * ConnectionObject == MySQL Object
   * @return bool == ConnectionState
  */
  UFUNCTION(BlueprintCallable, Category="MySQL|Utils")
  static bool CloseConnection(UFH_ConnectionObject *ConnectionObject);
  ```





#### 3.4 增-删-改处理



- 实现增删改的处理，具体执行程序依据传入`格式化SqlQuery`

- `Insert`，`Delete`，`Update`

  ```c++
  /*
   * ConnectionObject == MySQL Object
   * @return bool == Insert, Update, Delete Data Is Succeed Or Failed
  */
  UFUNCTION(BlueprintCallable, Category="MySQL|Utils")
  static bool ActionOnTableData(UFH_ConnectionObject *ConnectionObject, FString SqlQuery);
  ```

  



##### 3.4.1 Insert Format SqlQuery



- 通用的 `INSERT INTO TableName VALUES(InsertValues);`格式化插入语句

  ```c++
  /*
   * TableName = DataBase TableName
   * InsertValues = MySQL Insert Values to Table
   * @return FString = MySQL Insert Query -> Insert
  */
  UFUNCTION(BlueprintPure, Category="MySQL|Utils")
  static FString InsertFormatSqlQuery(FString TableName, FString InsertValues);
  ```





##### 3.4.2 Update Format SqlQuery



- 更新所有字段的值`UPDATE TableName SET RowName = UpdateValue;`格式化更新语句

  ```c++
  /*
   * TableName = DataBase TableName
   * RowName = Need Update Row
   * @return FString = MySQL Update Query -> Update
  */	
  UFUNCTION(BlueprintPure, Category="MySQL|Utils")
  static FString UpdateAllFormatSqlQuery(FString TableName, FString RowName, FString UpdateValue);
  ```



- 依据条件更新字段值`UPDATE TableName SET UpdateRowName = UpdateValue WHERE WhereName = WhereValue;`格式化更新语句

  ```c++
  /*
   * TableName = DataBase TableName
   * RowName = Need Update Row
   * WhereName = Update Where
   * WhereSymbol = Operator Or Symbol
   * WhereValue = Condition Name
   * UpdateValue = Need Update Date Value
   * @return FString = MySQL Update Query -> Update
  */	
  UFUNCTION(BlueprintPure, Category="MySQL|Utils")
  static FString UpdateByWhereFormatSqlQuery(FString TableName, FString RowName, FString WhereName, 
                                             FString WhereSymbol, FString WhereValue, FString UpdateValue);
  ```





##### 3.4.3 Delete Format SqlQuery



- 删除整个表`DELETE FROM TableName;`格式化删除语句

  ```c++
  /*
   * TableName = DataBase TableName
   * @return FString = MySQL Delete Query -> Delete
  */
  UFUNCTION(BlueprintPure, Category="MySQL|Utils")
  static FString DeleteAllFormatSqlQuery(FString TableName);
  ```



- 依据条件删除整行数据`DELETE FROM TableName WHERE WhereName=‘WhereValue’;`格式化删除语句

  ```c++
  /*
   * TableName = DataBase TableName
   * WhereName = Update Where
   * WhereSymbol = Operator Or Symbol
   * WhereValue = Condition Name
   * @return FString = MySQL Delete Query -> Delete
  */
  UFUNCTION(BlueprintPure, Category="MySQL|Utils")
  static FString DeleteByWhereFormatSqlQuery(FString TableName, FString WhereName, FString WhereSymbol, 
                                             FString WhereValue);
  ```





#### 3.5 查询语句处理



- 实现基本常用的查询语句：
  1. `SELECT * FROM TableName;`
  2. `SELECT Columns1, Columns2, Country FROM TableName;`
  3. `获得指定行的整行数据`



- 处理查询语句的通用，具体执行程序依据传入`格式化SqlQuery`

- 函数公开生成并返回`struct`类型：

  - `ResultRows`整个表的数据
  - `ResultRow`整行的数据
  - `RowValue`整行内字段名的数据




##### 3.5.1 Version1.0



```c++
/*
 * ConnectionObject == MySQL Object
 * @return bool == Select Data Is Succeed Or Failed
*/	
UFUNCTION(BlueprintCallable, Category="MySQL|Utils")
static bool SelectOnTableData(UFH_ConnectionObject *ConnectionObject, FString SqlQuery, FQueryResultRows &ResultRows);
```



##### 3.5.2 Version2.0



```c++
/*
 * 2.0 Select All Results In TArray<TMap> ResArray
 */
UFUNCTION(BlueprintCallable, Category="MySQL|Utils")
static bool SelectOnTableToMap(UFH_ConnectionObject* ConnectionObject, FString SqlQuery, FResArray& ResArray);
```





##### 3.5.3 Select All Format SqlQuery



- 查询整个表的数据`SELECT * FROM TableName;`格式化查询语句

  ```c++
  /*
   * TableName = DataBase TableName
   * @return FString = MySQL Select Query -> Select
  */
  UFUNCTION(BlueprintPure, Category="MySQL|Utils")
  static FString SelectAllFormatSqlQuery(FString TableName);
  ```





##### 3.5.4 Select Columns By Conditions



- 依据条件查询表内数据`SELECT Columns1, Columns2, Country FROM TableName;`格式化查询语句

  ```c++
  /*
   * TableName = DataBase TableName
   * @return FString = MySQL Select Query -> Select
  */	
  UFUNCTION(BlueprintPure, Category="MySQL|Utils")
  static FString SelectByColumnsFormatSqlQuery(FString TableName, FString Columns);
  ```

  



##### 3.5.5 Select Get RowValues By Index



- 指定表面和表内的行号，查询数据

  ```c++
  /*
   * TableName = DataBase TableName
   * @return TArray<FString> = Get All Rows -> In All Columns Values
  */		
  UFUNCTION(BlueprintPure, Category="MySQL|Utils")
  static FQueryResultRow GetRowByIndex(const FQueryResultRows &ResultRows, int32 RowIndex);
  ```

  
