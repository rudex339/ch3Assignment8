// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogSparta, Warning, All);

UCLASS()//리플렉션 시스템에 등록하는 매크로
class SPARATAPROJECT_API AItem : public AActor// A = actor , U = object, F = 구조체, T = 탬플릿, E = 열거형. SPARATAPROJECT_API 외부에서 클래스를사용하루 있게 함
{
	GENERATED_BODY()//UCLASS()와 짝을 이루어, 언리얼 헤더툴 (UHT)이 자동 생성한 코드를 삽입해 주는 매크로
	
public:	
	// Sets default values for this actor's properties
	AItem();

protected:
	// 라이프 사이클 함수들
	virtual void PostInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void Destroyed() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	// 루트 컴포넌트를 나타내는 Scene Component 포인터
	USceneComponent* SceneRoot;
	// Static Mesh Component 포인터
	UStaticMeshComponent* StaticMeshComp;

public:	
	

};
