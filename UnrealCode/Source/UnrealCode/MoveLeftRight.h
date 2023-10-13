// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"   //컴파일 속도를 빠르게 하기위해 기본적인 최소한의 라이브러리만 포함한 헤더
#include "GameFramework/Actor.h" //AAcotr 클래스 헤더파일


 //AMoveLeftRight 생성 처리하는 헤더 (   *.generated.h    보통은 이런 이름이다)
 // 모든 언리얼 클래스가 생성되려면  아래 코드를 넣어줘야 된다.
// 반드시 모든 #include 마지막에 배치해줘야 한다.
#include "MoveLeftRight.generated.h" 

//  UNREALCODE_API : (두 줄 밑) 이 클래스는 UNREALCODE_API 모듈에 포함된다.
	
UCLASS()  //언리얼 클래스 선언 
class UNREALCODE_API AMoveLeftRight : public AActor  //  public AActor : AAcotr 의 기능을 상속 받겠다. 
{
	GENERATED_BODY() //언리얼 코드  생성 함수 : 언리얼 클래스 생성 기본 규칙
	
public:	
	// Sets default values for this actor's properties
	AMoveLeftRight();
	//AMoveLeftRight(MLect M_num=MLect::Right);
	~AMoveLeftRight()
	{
	}
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	USceneComponent* Scene;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* StaticMesh;

	float LocX;
	float LocZ;
	bool IsMoveRight;
	bool IsPlay;

};
