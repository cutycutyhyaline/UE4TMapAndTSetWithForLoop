// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Rep02GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class REP02_API ARep02GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	public:

	UFUNCTION(BlueprintCallable, Category = "Reproduce")
	void TArrayTest(int32 InNumber, TArray<int32>& OutArray);

	UFUNCTION(BlueprintCallable, Category = "Reproduce")
	void TMapTest(int32 InNumber, TMap<int32, int32>& OutMap);

	UFUNCTION(BlueprintCallable, Category = "Reproduce")
	void TSetTest(int32 InNumber, TSet<int32>& OutSet);	

	UFUNCTION(BlueprintCallable, Category = "Reproduce")
	void TMapTestFixed(int32 InNumber, TMap<int32, int32>& OutMap);

	UFUNCTION(BlueprintCallable, Category = "Reproduce")
	void TSetTestFixed(int32 InNumber, TSet<int32>& OutSet);
};
