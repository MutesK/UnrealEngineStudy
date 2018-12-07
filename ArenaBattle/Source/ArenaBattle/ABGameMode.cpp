// Fill out your copyright notice in the Description page of Project Settings.

#include "ABGameMode.h"
#include "ABCharacter.h"
#include "ABPlayerController.h"

AABGameMode::AABGameMode()
{
	DefaultPawnClass = AABCharacter::StaticClass();
	PlayerControllerClass = AABPlayerController::StaticClass();
}

/*
	������ �÷��̾ �ʱ�ȭ�Ǵ� ����
	�𸮾� ���������� �α����̶�� ��. �÷��̾�� �÷��̾� ��Ʈ�ѷ� ����

	�α��� �Ϸ� �ݹ��Լ�
*/
void AABGameMode::PostLogin(APlayerController* NewPlayer)
{
	ABLOG(Warning, TEXT("PostLogin Begin"));
	Super::PostLogin(NewPlayer);
	ABLOG(Warning, TEXT("PostLogin End"));
}

