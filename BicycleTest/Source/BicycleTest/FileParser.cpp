// Fill out your copyright notice in the Description page of Project Settings.


#include "FileParser.h"

TArray<FString> UFileParser::ParseFileLines(FString filename)
{
	TArray<FString> result;
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();
	if (file.FileExists(*filename)) {
		FFileHelper::LoadFileToStringArray(result, *filename);
	}
	return result;
}

FFrameInfoFusionCrowd UFileParser::ParseFrameInfo(FString frameString)
{
	TArray<FString> outArray;
	frameString.ParseIntoArray(outArray, TEXT(","), true);
	
	FFrameInfoFusionCrowd frameInfo;
	for (int i = 0; i < outArray.Num(); i = i + 7)
	{
		FAgentInfo agentinfo;
		agentinfo.id = FCString::Atof(*outArray[i + 0]);
		agentinfo.x = FCString::Atof(*outArray[i + 1]);
		agentinfo.y = FCString::Atof(*outArray[i + 2]);
		agentinfo.orient_X = FCString::Atof(*outArray[i + 3]);
		agentinfo.orient_Y = FCString::Atof(*outArray[i + 4]);
		agentinfo.delta = FCString::Atof(*outArray[i + 6]);
		frameInfo.agentsInfoForFrame.Add(agentinfo);		
	}
	     
	
	
	return frameInfo;
}

TArray<FFrameInfoFusionCrowd> UFileParser::GetDataFromCSV(FString filename)
{
	TArray<FString> frameStrings=ParseFileLines(filename);
	frameStrings.RemoveAt(0);
	TArray<FFrameInfoFusionCrowd> DataArray;
	for (int i = 0; i < frameStrings.Num();i++)
	{
		DataArray.Add(ParseFrameInfo(frameStrings[i]));
	}
	return DataArray;
}
