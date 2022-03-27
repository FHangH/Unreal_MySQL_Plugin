// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FH_MySQL/Public/FH_ConnectionObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFH_ConnectionObject() {}
// Cross Module References
	FH_MYSQL_API UClass* Z_Construct_UClass_UFH_ConnectionObject_NoRegister();
	FH_MYSQL_API UClass* Z_Construct_UClass_UFH_ConnectionObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FH_MySQL();
// End Cross Module References
	void UFH_ConnectionObject::StaticRegisterNativesUFH_ConnectionObject()
	{
	}
	UClass* Z_Construct_UClass_UFH_ConnectionObject_NoRegister()
	{
		return UFH_ConnectionObject::StaticClass();
	}
	struct Z_Construct_UClass_UFH_ConnectionObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFH_ConnectionObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FH_MySQL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFH_ConnectionObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FH_ConnectionObject.h" },
		{ "ModuleRelativePath", "Public/FH_ConnectionObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFH_ConnectionObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFH_ConnectionObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFH_ConnectionObject_Statics::ClassParams = {
		&UFH_ConnectionObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFH_ConnectionObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFH_ConnectionObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFH_ConnectionObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFH_ConnectionObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFH_ConnectionObject, 1840626478);
	template<> FH_MYSQL_API UClass* StaticClass<UFH_ConnectionObject>()
	{
		return UFH_ConnectionObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFH_ConnectionObject(Z_Construct_UClass_UFH_ConnectionObject, &UFH_ConnectionObject::StaticClass, TEXT("/Script/FH_MySQL"), TEXT("UFH_ConnectionObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFH_ConnectionObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
