// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "GameFramework/GameModeBase.h"
#include "ABGameMode.generated.h"

/**
 *  GameMode는 플레이어가 입장할때 Pawn을 배정하고 이 Pawn에 Posses하기 위해서 
 *	PlayerController를 배정한다.
 */
UCLASS()
class ARENABATTLE_API AABGameMode : public AGameModeBase
{
	GENERATED_BODY()


	AABGameMode();

public:
	virtual void PostLogin(APlayerController* NewPlayer) override;
};
