# UE4 MySQL插件使用



### 1. 插件获取



[MySQL Plugin](https://www.aliyundrive.com/s/UiPTz9mnNUV) 提取码:17um





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

  ```c++
  /*
   * ConnectionObject == MySQL Object
   * @return bool == Select Data Is Succeed Or Failed
  */	
  UFUNCTION(BlueprintCallable, Category="MySQL|Utils")
  static bool SelectOnTableData(UFH_ConnectionObject *ConnectionObject, FString SqlQuery, 
                                FQueryResultRows &ResultRows);
  ```

  



##### 3.5.1 Select All Format SqlQuery



- 查询整个表的数据`SELECT * FROM TableName;`格式化查询语句

  ```c++
  /*
   * TableName = DataBase TableName
   * @return FString = MySQL Select Query -> Select
  */
  UFUNCTION(BlueprintPure, Category="MySQL|Utils")
  static FString SelectAllFormatSqlQuery(FString TableName);
  ```





##### 3.5.2 Select Columns By Conditions



- 依据条件查询表内数据`SELECT Columns1, Columns2, Country FROM TableName;`格式化查询语句

  ```c++
  /*
   * TableName = DataBase TableName
   * @return FString = MySQL Select Query -> Select
  */	
  UFUNCTION(BlueprintPure, Category="MySQL|Utils")
  static FString SelectByColumnsFormatSqlQuery(FString TableName, FString Columns);
  ```

  



##### 3.5.3 Select Get RowValues By Index



- 指定表面和表内的行号，查询数据

  ```c++
  /*
   * TableName = DataBase TableName
   * @return TArray<FString> = Get All Rows -> In All Columns Values
  */		
  UFUNCTION(BlueprintPure, Category="MySQL|Utils")
  static FQueryResultRow GetRowByIndex(const FQueryResultRows &ResultRows, int32 RowIndex);
  ```

  