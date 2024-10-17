#pragma once

#include "CoreMinimal.h"
#include "Components/LODSyncComponent.h"

#include "ChronosComponent.generated.h"

UENUM()
enum class EChronosCharacterComponentType : uint8 {
	Mesh
};

UENUM()
enum class EModularCharacterMeshSlots : uint8 {
	Base,
	Body,
	Head,
	Top,
	Bottom
};

USTRUCT()
struct FChronosCharacterComponentIdentifier {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	EChronosCharacterComponentType ComponentType;

	UPROPERTY(EditAnywhere)
	EModularCharacterMeshSlots MeshSlot;
};
FORCEINLINE uint32 GetTypeHash(const FChronosCharacterComponentIdentifier) { return 0; }

USTRUCT()
struct FChronosComponentSync {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	FChronosCharacterComponentIdentifier ComponentIdentifier;

	UPROPERTY(EditAnywhere)
	ESyncOption SyncOption;
};