// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DrejnToolbox/Public/FactoryConnection/TBFactoryConnectionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTBFactoryConnectionComponent() {}
// Cross Module References
	DREJNTOOLBOX_API UClass* Z_Construct_UClass_UTBFactoryConnectionComponent_NoRegister();
	DREJNTOOLBOX_API UClass* Z_Construct_UClass_UTBFactoryConnectionComponent();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFactoryConnectionComponent();
	UPackage* Z_Construct_UPackage__Script_DrejnToolbox();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTBFactoryConnectionComponent::execHasConnection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasConnection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTBFactoryConnectionComponent::execClearConnection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearConnection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTBFactoryConnectionComponent::execGetConnection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFGFactoryConnectionComponent**)Z_Param__Result=P_THIS->GetConnection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTBFactoryConnectionComponent::execSetConnection)
	{
		P_GET_OBJECT(UFGFactoryConnectionComponent,Z_Param_toComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConnection(Z_Param_toComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTBFactoryConnectionComponent::execGetInventoryAccessIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInventoryAccessIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTBFactoryConnectionComponent::execSetInventoryAccessIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInventoryAccessIndex(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTBFactoryConnectionComponent::execSetInventory)
	{
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_inventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInventory(Z_Param_inventory);
		P_NATIVE_END;
	}
	void UTBFactoryConnectionComponent::StaticRegisterNativesUTBFactoryConnectionComponent()
	{
		UClass* Class = UTBFactoryConnectionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearConnection", &UTBFactoryConnectionComponent::execClearConnection },
			{ "GetConnection", &UTBFactoryConnectionComponent::execGetConnection },
			{ "GetInventoryAccessIndex", &UTBFactoryConnectionComponent::execGetInventoryAccessIndex },
			{ "HasConnection", &UTBFactoryConnectionComponent::execHasConnection },
			{ "SetConnection", &UTBFactoryConnectionComponent::execSetConnection },
			{ "SetInventory", &UTBFactoryConnectionComponent::execSetInventory },
			{ "SetInventoryAccessIndex", &UTBFactoryConnectionComponent::execSetInventoryAccessIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTBFactoryConnectionComponent_ClearConnection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTBFactoryConnectionComponent_ClearConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Drejn Toolbox|FactoryConnection" },
		{ "ModuleRelativePath", "Public/FactoryConnection/TBFactoryConnectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTBFactoryConnectionComponent_ClearConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTBFactoryConnectionComponent, nullptr, "ClearConnection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTBFactoryConnectionComponent_ClearConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTBFactoryConnectionComponent_ClearConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTBFactoryConnectionComponent_ClearConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTBFactoryConnectionComponent_ClearConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTBFactoryConnectionComponent_GetConnection_Statics
	{
		struct TBFactoryConnectionComponent_eventGetConnection_Parms
		{
			UFGFactoryConnectionComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTBFactoryConnectionComponent_GetConnection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTBFactoryConnectionComponent_GetConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TBFactoryConnectionComponent_eventGetConnection_Parms, ReturnValue), Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTBFactoryConnectionComponent_GetConnection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTBFactoryConnectionComponent_GetConnection_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTBFactoryConnectionComponent_GetConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTBFactoryConnectionComponent_GetConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTBFactoryConnectionComponent_GetConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Drejn Toolbox|FactoryConnection" },
		{ "ModuleRelativePath", "Public/FactoryConnection/TBFactoryConnectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTBFactoryConnectionComponent_GetConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTBFactoryConnectionComponent, nullptr, "GetConnection", nullptr, nullptr, sizeof(TBFactoryConnectionComponent_eventGetConnection_Parms), Z_Construct_UFunction_UTBFactoryConnectionComponent_GetConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTBFactoryConnectionComponent_GetConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTBFactoryConnectionComponent_GetConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTBFactoryConnectionComponent_GetConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTBFactoryConnectionComponent_GetConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTBFactoryConnectionComponent_GetConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTBFactoryConnectionComponent_GetInventoryAccessIndex_Statics
	{
		struct TBFactoryConnectionComponent_eventGetInventoryAccessIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTBFactoryConnectionComponent_GetInventoryAccessIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TBFactoryConnectionComponent_eventGetInventoryAccessIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTBFactoryConnectionComponent_GetInventoryAccessIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTBFactoryConnectionComponent_GetInventoryAccessIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTBFactoryConnectionComponent_GetInventoryAccessIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Drejn Toolbox|FactoryConnection" },
		{ "ModuleRelativePath", "Public/FactoryConnection/TBFactoryConnectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTBFactoryConnectionComponent_GetInventoryAccessIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTBFactoryConnectionComponent, nullptr, "GetInventoryAccessIndex", nullptr, nullptr, sizeof(TBFactoryConnectionComponent_eventGetInventoryAccessIndex_Parms), Z_Construct_UFunction_UTBFactoryConnectionComponent_GetInventoryAccessIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTBFactoryConnectionComponent_GetInventoryAccessIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTBFactoryConnectionComponent_GetInventoryAccessIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTBFactoryConnectionComponent_GetInventoryAccessIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTBFactoryConnectionComponent_GetInventoryAccessIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTBFactoryConnectionComponent_GetInventoryAccessIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTBFactoryConnectionComponent_HasConnection_Statics
	{
		struct TBFactoryConnectionComponent_eventHasConnection_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTBFactoryConnectionComponent_HasConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TBFactoryConnectionComponent_eventHasConnection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTBFactoryConnectionComponent_HasConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TBFactoryConnectionComponent_eventHasConnection_Parms), &Z_Construct_UFunction_UTBFactoryConnectionComponent_HasConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTBFactoryConnectionComponent_HasConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTBFactoryConnectionComponent_HasConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTBFactoryConnectionComponent_HasConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Drejn Toolbox|FactoryConnection" },
		{ "ModuleRelativePath", "Public/FactoryConnection/TBFactoryConnectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTBFactoryConnectionComponent_HasConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTBFactoryConnectionComponent, nullptr, "HasConnection", nullptr, nullptr, sizeof(TBFactoryConnectionComponent_eventHasConnection_Parms), Z_Construct_UFunction_UTBFactoryConnectionComponent_HasConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTBFactoryConnectionComponent_HasConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTBFactoryConnectionComponent_HasConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTBFactoryConnectionComponent_HasConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTBFactoryConnectionComponent_HasConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTBFactoryConnectionComponent_HasConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTBFactoryConnectionComponent_SetConnection_Statics
	{
		struct TBFactoryConnectionComponent_eventSetConnection_Parms
		{
			UFGFactoryConnectionComponent* toComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_toComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_toComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTBFactoryConnectionComponent_SetConnection_Statics::NewProp_toComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTBFactoryConnectionComponent_SetConnection_Statics::NewProp_toComponent = { "toComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TBFactoryConnectionComponent_eventSetConnection_Parms, toComponent), Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTBFactoryConnectionComponent_SetConnection_Statics::NewProp_toComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTBFactoryConnectionComponent_SetConnection_Statics::NewProp_toComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTBFactoryConnectionComponent_SetConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTBFactoryConnectionComponent_SetConnection_Statics::NewProp_toComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTBFactoryConnectionComponent_SetConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Drejn Toolbox|FactoryConnection" },
		{ "ModuleRelativePath", "Public/FactoryConnection/TBFactoryConnectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTBFactoryConnectionComponent_SetConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTBFactoryConnectionComponent, nullptr, "SetConnection", nullptr, nullptr, sizeof(TBFactoryConnectionComponent_eventSetConnection_Parms), Z_Construct_UFunction_UTBFactoryConnectionComponent_SetConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTBFactoryConnectionComponent_SetConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTBFactoryConnectionComponent_SetConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTBFactoryConnectionComponent_SetConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTBFactoryConnectionComponent_SetConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTBFactoryConnectionComponent_SetConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventory_Statics
	{
		struct TBFactoryConnectionComponent_eventSetInventory_Parms
		{
			UFGInventoryComponent* inventory;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventory_Statics::NewProp_inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventory_Statics::NewProp_inventory = { "inventory", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TBFactoryConnectionComponent_eventSetInventory_Parms, inventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventory_Statics::NewProp_inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventory_Statics::NewProp_inventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventory_Statics::NewProp_inventory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Drejn Toolbox|FactoryConnection" },
		{ "ModuleRelativePath", "Public/FactoryConnection/TBFactoryConnectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTBFactoryConnectionComponent, nullptr, "SetInventory", nullptr, nullptr, sizeof(TBFactoryConnectionComponent_eventSetInventory_Parms), Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventoryAccessIndex_Statics
	{
		struct TBFactoryConnectionComponent_eventSetInventoryAccessIndex_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventoryAccessIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TBFactoryConnectionComponent_eventSetInventoryAccessIndex_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventoryAccessIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventoryAccessIndex_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventoryAccessIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Drejn Toolbox|FactoryConnection" },
		{ "ModuleRelativePath", "Public/FactoryConnection/TBFactoryConnectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventoryAccessIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTBFactoryConnectionComponent, nullptr, "SetInventoryAccessIndex", nullptr, nullptr, sizeof(TBFactoryConnectionComponent_eventSetInventoryAccessIndex_Parms), Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventoryAccessIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventoryAccessIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventoryAccessIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventoryAccessIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventoryAccessIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventoryAccessIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTBFactoryConnectionComponent_NoRegister()
	{
		return UTBFactoryConnectionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTBFactoryConnectionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryAccessIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InventoryAccessIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasConnectedComponent_MetaData[];
#endif
		static void NewProp_HasConnectedComponent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasConnectedComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConnectedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGFactoryConnectionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DrejnToolbox,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTBFactoryConnectionComponent_ClearConnection, "ClearConnection" }, // 3502306883
		{ &Z_Construct_UFunction_UTBFactoryConnectionComponent_GetConnection, "GetConnection" }, // 2449577823
		{ &Z_Construct_UFunction_UTBFactoryConnectionComponent_GetInventoryAccessIndex, "GetInventoryAccessIndex" }, // 2569959123
		{ &Z_Construct_UFunction_UTBFactoryConnectionComponent_HasConnection, "HasConnection" }, // 503573697
		{ &Z_Construct_UFunction_UTBFactoryConnectionComponent_SetConnection, "SetConnection" }, // 1066909175
		{ &Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventory, "SetInventory" }, // 1622637065
		{ &Z_Construct_UFunction_UTBFactoryConnectionComponent_SetInventoryAccessIndex, "SetInventoryAccessIndex" }, // 4140957383
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "FactoryConnection/TBFactoryConnectionComponent.h" },
		{ "ModuleRelativePath", "Public/FactoryConnection/TBFactoryConnectionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::NewProp_InventoryAccessIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/FactoryConnection/TBFactoryConnectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::NewProp_InventoryAccessIndex = { "InventoryAccessIndex", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTBFactoryConnectionComponent, InventoryAccessIndex), METADATA_PARAMS(Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::NewProp_InventoryAccessIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::NewProp_InventoryAccessIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::NewProp_HasConnectedComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/FactoryConnection/TBFactoryConnectionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::NewProp_HasConnectedComponent_SetBit(void* Obj)
	{
		((UTBFactoryConnectionComponent*)Obj)->HasConnectedComponent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::NewProp_HasConnectedComponent = { "HasConnectedComponent", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTBFactoryConnectionComponent), &Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::NewProp_HasConnectedComponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::NewProp_HasConnectedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::NewProp_HasConnectedComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::NewProp_ConnectedComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FactoryConnection/TBFactoryConnectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::NewProp_ConnectedComponent = { "ConnectedComponent", nullptr, (EPropertyFlags)0x0010000001080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTBFactoryConnectionComponent, ConnectedComponent), Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::NewProp_ConnectedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::NewProp_ConnectedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::NewProp_InventoryAccessIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::NewProp_HasConnectedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::NewProp_ConnectedComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTBFactoryConnectionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::ClassParams = {
		&UTBFactoryConnectionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTBFactoryConnectionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTBFactoryConnectionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTBFactoryConnectionComponent, 4288015058);
	template<> DREJNTOOLBOX_API UClass* StaticClass<UTBFactoryConnectionComponent>()
	{
		return UTBFactoryConnectionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTBFactoryConnectionComponent(Z_Construct_UClass_UTBFactoryConnectionComponent, &UTBFactoryConnectionComponent::StaticClass, TEXT("/Script/DrejnToolbox"), TEXT("UTBFactoryConnectionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTBFactoryConnectionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
