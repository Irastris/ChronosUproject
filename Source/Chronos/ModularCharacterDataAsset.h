#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Components/LODSyncComponent.h"
#include "ChronosComponent.h"
#include "ModularCharacter.h"

#include "ModularCharacterDataAsset.generated.h"

UCLASS()
class CHRONOS_API UModularCharacterDataAsset : public UPrimaryDataAsset {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	FModularCharacterTypeDefinition CharacterType;

	UPROPERTY(EditAnywhere)
	int32 NumLODs;

	UPROPERTY(EditAnywhere)
	int32 ForcedLOD;

	UPROPERTY(EditAnywhere)
	TArray<FChronosComponentSync> ComponentsToSync;

	UPROPERTY(EditAnywhere)
	TMap<FChronosCharacterComponentIdentifier, FLODMappingData> CustomLODMapping;
};
