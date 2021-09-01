// Copyright Epic Games, Inc. All Rights Reserved.


#include "Rep02GameModeBase.h"

void ARep02GameModeBase::TArrayTest(int32 InNumber, TArray<int32>& OutArray)
{
	OutArray.Add(InNumber);
}

void ARep02GameModeBase::TMapTest(int32 InNumber, TMap<int32, int32>& OutMap)
{
	OutMap.Add(InNumber, InNumber);
}

void ARep02GameModeBase::TSetTest(int32 InNumber, TSet<int32>& OutSet)
{
	OutSet.Add(InNumber);
}

void ARep02GameModeBase::TMapTestFixed(int32 InNumber, TMap<int32, int32>& OutMap)
{
	TMap<int32, int32> NewMap;
	NewMap.Add(InNumber, InNumber);
	OutMap = NewMap;
}

void ARep02GameModeBase::TSetTestFixed(int32 InNumber, TSet<int32>& OutSet)
{
	TSet<int32> NewSet;
	NewSet.Add(InNumber);
	OutSet = NewSet;
}
