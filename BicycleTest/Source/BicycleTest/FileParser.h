// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FileParser.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FAgentInfo
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FusionCrowd")
		int32 id;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FusionCrowd")
		float x;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FusionCrowd")
		float y;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FusionCrowd")
		float orient_X;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FusionCrowd")
		float orient_Y;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FusionCrowd")
		float delta;
};


USTRUCT(BlueprintType)
struct FFrameInfoFusionCrowd
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FusionCrowd")
		TArray<FAgentInfo> agentsInfoForFrame;
};
UCLASS(BlueprintType)
class BICYCLETEST_API UFileParser : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION()
		TArray<FString> ParseFileLines(FString filename);
	UFUNCTION()
		FFrameInfoFusionCrowd ParseFrameInfo(FString frameString);
	UFUNCTION(BlueprintCallable)
		TArray<FFrameInfoFusionCrowd> GetDataFromCSV(FString filename);
};
