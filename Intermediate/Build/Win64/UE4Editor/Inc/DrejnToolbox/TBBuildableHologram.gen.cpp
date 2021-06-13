// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DrejnToolbox/Public/Holograms/TBBuildableHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTBBuildableHologram() {}
// Cross Module References
	DREJNTOOLBOX_API UClass* Z_Construct_UClass_ATBBuildableHologram_NoRegister();
	DREJNTOOLBOX_API UClass* Z_Construct_UClass_ATBBuildableHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableHologram();
	UPackage* Z_Construct_UPackage__Script_DrejnToolbox();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATBBuildableHologram::execSetBuildableClass)
	{
		P_GET_OBJECT(UClass,Z_Param_buildableClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBuildableClass(Z_Param_buildableClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATBBuildableHologram::execIsValidHitResult)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidHitResult(Z_Param_Out_hit);
		P_NATIVE_END;
	}
	void ATBBuildableHologram::StaticRegisterNativesATBBuildableHologram()
	{
		UClass* Class = ATBBuildableHologram::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsValidHitResult", &ATBBuildableHologram::execIsValidHitResult },
			{ "SetBuildableClass", &ATBBuildableHologram::execSetBuildableClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATBBuildableHologram_IsValidHitResult_Statics
	{
		struct TBBuildableHologram_eventIsValidHitResult_Parms
		{
			FHitResult hit;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATBBuildableHologram_IsValidHitResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TBBuildableHologram_eventIsValidHitResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATBBuildableHologram_IsValidHitResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TBBuildableHologram_eventIsValidHitResult_Parms), &Z_Construct_UFunction_ATBBuildableHologram_IsValidHitResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATBBuildableHologram_IsValidHitResult_Statics::NewProp_hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATBBuildableHologram_IsValidHitResult_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TBBuildableHologram_eventIsValidHitResult_Parms, hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATBBuildableHologram_IsValidHitResult_Statics::NewProp_hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATBBuildableHologram_IsValidHitResult_Statics::NewProp_hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATBBuildableHologram_IsValidHitResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATBBuildableHologram_IsValidHitResult_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATBBuildableHologram_IsValidHitResult_Statics::NewProp_hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATBBuildableHologram_IsValidHitResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Drejn Toolbox|Buildable Hologram" },
		{ "ModuleRelativePath", "Public/Holograms/TBBuildableHologram.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATBBuildableHologram_IsValidHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATBBuildableHologram, nullptr, "IsValidHitResult", nullptr, nullptr, sizeof(TBBuildableHologram_eventIsValidHitResult_Parms), Z_Construct_UFunction_ATBBuildableHologram_IsValidHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATBBuildableHologram_IsValidHitResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATBBuildableHologram_IsValidHitResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATBBuildableHologram_IsValidHitResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATBBuildableHologram_IsValidHitResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATBBuildableHologram_IsValidHitResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATBBuildableHologram_SetBuildableClass_Statics
	{
		struct TBBuildableHologram_eventSetBuildableClass_Parms
		{
			TSubclassOf<AFGBuildable>  buildableClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_buildableClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ATBBuildableHologram_SetBuildableClass_Statics::NewProp_buildableClass = { "buildableClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TBBuildableHologram_eventSetBuildableClass_Parms, buildableClass), Z_Construct_UClass_AFGBuildable_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATBBuildableHologram_SetBuildableClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATBBuildableHologram_SetBuildableClass_Statics::NewProp_buildableClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATBBuildableHologram_SetBuildableClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Drejn Toolbox|Buildable Hologram" },
		{ "ModuleRelativePath", "Public/Holograms/TBBuildableHologram.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATBBuildableHologram_SetBuildableClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATBBuildableHologram, nullptr, "SetBuildableClass", nullptr, nullptr, sizeof(TBBuildableHologram_eventSetBuildableClass_Parms), Z_Construct_UFunction_ATBBuildableHologram_SetBuildableClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATBBuildableHologram_SetBuildableClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATBBuildableHologram_SetBuildableClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATBBuildableHologram_SetBuildableClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATBBuildableHologram_SetBuildableClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATBBuildableHologram_SetBuildableClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATBBuildableHologram_NoRegister()
	{
		return ATBBuildableHologram::StaticClass();
	}
	struct Z_Construct_UClass_ATBBuildableHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidHitClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValidHitClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ValidHitClasses_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATBBuildableHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_DrejnToolbox,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATBBuildableHologram_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATBBuildableHologram_IsValidHitResult, "IsValidHitResult" }, // 1700251644
		{ &Z_Construct_UFunction_ATBBuildableHologram_SetBuildableClass, "SetBuildableClass" }, // 3334611070
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATBBuildableHologram_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Holograms/TBBuildableHologram.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Holograms/TBBuildableHologram.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATBBuildableHologram_Statics::NewProp_inClass_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Public/Holograms/TBBuildableHologram.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATBBuildableHologram_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATBBuildableHologram, inClass), Z_Construct_UClass_AFGBuildable_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATBBuildableHologram_Statics::NewProp_inClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATBBuildableHologram_Statics::NewProp_inClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATBBuildableHologram_Statics::NewProp_ValidHitClasses_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Public/Holograms/TBBuildableHologram.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATBBuildableHologram_Statics::NewProp_ValidHitClasses = { "ValidHitClasses", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATBBuildableHologram, ValidHitClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATBBuildableHologram_Statics::NewProp_ValidHitClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATBBuildableHologram_Statics::NewProp_ValidHitClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATBBuildableHologram_Statics::NewProp_ValidHitClasses_Inner = { "ValidHitClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFGBuildable_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATBBuildableHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATBBuildableHologram_Statics::NewProp_inClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATBBuildableHologram_Statics::NewProp_ValidHitClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATBBuildableHologram_Statics::NewProp_ValidHitClasses_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATBBuildableHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATBBuildableHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATBBuildableHologram_Statics::ClassParams = {
		&ATBBuildableHologram::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATBBuildableHologram_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATBBuildableHologram_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATBBuildableHologram_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATBBuildableHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATBBuildableHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATBBuildableHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATBBuildableHologram, 425969830);
	template<> DREJNTOOLBOX_API UClass* StaticClass<ATBBuildableHologram>()
	{
		return ATBBuildableHologram::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATBBuildableHologram(Z_Construct_UClass_ATBBuildableHologram, &ATBBuildableHologram::StaticClass, TEXT("/Script/DrejnToolbox"), TEXT("ATBBuildableHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATBBuildableHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
