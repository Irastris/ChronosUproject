#pragma once

#include "CoreMinimal.h"
#include "AnimToTextureDataAsset.h"
#include "SimpleLocomotionAnimationSet.h"

#include "ModularCharacter.generated.h"

UENUM()
enum class EModularCharacterMaterialParameterType : uint8 {
	Color,
	Vector,
	Float
};

USTRUCT()
struct FModularCharacterBodyDefinition {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<USkeletalMesh> Base;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAnimToTextureDataAsset> BodyData;
};

USTRUCT()
struct FModularCharacterOutfitDefinition {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAnimToTextureDataAsset> TopData;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAnimToTextureDataAsset> BottomData;
};

USTRUCT()
struct FModularCharacterBodyOutfitDefinition {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	FModularCharacterBodyDefinition Body;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAnimToTextureDataAsset> HeadsData;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<USkeletalMesh> Skeletons;

	UPROPERTY(EditAnywhere)
	TArray<FModularCharacterOutfitDefinition> Outfits;
};

USTRUCT()
struct FModularCharacterMaterialColorOverride {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	FName ParameterName;

	UPROPERTY(EditAnywhere)
	EModularCharacterMaterialParameterType ParameterType;

	UPROPERTY(EditAnywhere)
	FColor Color;

	UPROPERTY(EditAnywhere)
	FVector Vector;

	UPROPERTY(EditAnywhere)
	float Float;
};

USTRUCT()
struct FModularCharacterMaterialOverride {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	TArray<FModularCharacterMaterialColorOverride> ParameterOverrides;
};

USTRUCT()
struct FModularCharacterOutfitMaterialDefinition {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	TMap<FName, FModularCharacterMaterialOverride> MaterialOverrides;
};

USTRUCT()
struct FModularCharacterTextureOutfitDefinition {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	TMap<FString, TSoftObjectPtr<UMaterialInstance>> OutfitMaterialMap;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAnimToTextureDataAsset> HeadDataOverride;

	UPROPERTY(EditAnywhere)
	FString CustomTexturePathOverride;
};

USTRUCT()
struct FModularHeroOutfitDefinition {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<USkeletalMesh> Base;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAnimToTextureDataAsset> HeadData;

	UPROPERTY(EditAnywhere)
	FModularCharacterOutfitDefinition OutfitData;

	UPROPERTY(EditAnywhere)
	FModularCharacterOutfitMaterialDefinition OutfitMaterials;

	UPROPERTY(EditAnywhere)
	TMap<FString, FModularCharacterTextureOutfitDefinition> OutfitTextureMap;

	UPROPERTY(EditAnywhere)
	FString CustomTexturePathOverride;

	UPROPERTY(EditAnywhere)
	TArray<FString> AssociatedEpisodes;

	UPROPERTY(EditAnywhere)
	FString OutfitLocKey;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<USimpleLocomotionAnimationSet> OutfitHeroLocomotionSet;

	UPROPERTY(EditAnywhere)
	int32 ClothingType;

	UPROPERTY(EditAnywhere)
	TArray<FName> Tags;
};

USTRUCT()
struct FModularHeroBodyOutfitDefinition {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	FModularCharacterBodyDefinition Body;

	UPROPERTY(EditAnywhere)
	TMap<FString, FModularHeroOutfitDefinition> OutfitsMap;
};

USTRUCT()
struct FModularCharacterGenderDefinition {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	FModularCharacterBodyOutfitDefinition Medium;

	UPROPERTY(EditAnywhere)
	FModularCharacterBodyOutfitDefinition Large;

	UPROPERTY(EditAnywhere)
	FModularCharacterBodyOutfitDefinition Small;

	UPROPERTY(EditAnywhere)
	TArray<FModularCharacterOutfitMaterialDefinition> OutfitMaterials;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAnimToTextureDataAsset> FarLodMeshData;
};

USTRUCT()
struct FModularCharacterHeroDefinition {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	FModularHeroBodyOutfitDefinition HeroCharacterBody;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAnimToTextureDataAsset> FarLodMeshData;
};

USTRUCT()
struct FModularCharacterCrowdDefinition {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	FModularCharacterGenderDefinition SkeletonA;

	UPROPERTY(EditAnywhere)
	FModularCharacterGenderDefinition SkeletonB;
};

USTRUCT()
struct FModularCharacterTypeDefinition {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	FModularCharacterHeroDefinition HeroCharacter;

	UPROPERTY(EditAnywhere)
	FModularCharacterCrowdDefinition CrowdCharacter;
};