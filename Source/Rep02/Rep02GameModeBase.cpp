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
