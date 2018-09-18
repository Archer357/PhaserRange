// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Holodeck2/Holodeck2GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHolodeck2GameModeBase() {}
// Cross Module References
	HOLODECK2_API UClass* Z_Construct_UClass_AHolodeck2GameModeBase_NoRegister();
	HOLODECK2_API UClass* Z_Construct_UClass_AHolodeck2GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Holodeck2();
// End Cross Module References
	void AHolodeck2GameModeBase::StaticRegisterNativesAHolodeck2GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AHolodeck2GameModeBase_NoRegister()
	{
		return AHolodeck2GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AHolodeck2GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHolodeck2GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Holodeck2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHolodeck2GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Holodeck2GameModeBase.h" },
		{ "ModuleRelativePath", "Holodeck2GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHolodeck2GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHolodeck2GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHolodeck2GameModeBase_Statics::ClassParams = {
		&AHolodeck2GameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AHolodeck2GameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHolodeck2GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHolodeck2GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHolodeck2GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHolodeck2GameModeBase, 1962735303);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHolodeck2GameModeBase(Z_Construct_UClass_AHolodeck2GameModeBase, &AHolodeck2GameModeBase::StaticClass, TEXT("/Script/Holodeck2"), TEXT("AHolodeck2GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHolodeck2GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
