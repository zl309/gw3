// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"   //������ �ӵ��� ������ �ϱ����� �⺻���� �ּ����� ���̺귯���� ������ ���
#include "GameFramework/Actor.h" //AAcotr Ŭ���� �������


 //AMoveLeftRight ���� ó���ϴ� ��� (   *.generated.h    ������ �̷� �̸��̴�)
 // ��� �𸮾� Ŭ������ �����Ƿ���  �Ʒ� �ڵ带 �־���� �ȴ�.
// �ݵ�� ��� #include �������� ��ġ����� �Ѵ�.
#include "MoveLeftRight.generated.h" 

//  UNREALCODE_API : (�� �� ��) �� Ŭ������ UNREALCODE_API ��⿡ ���Եȴ�.
UCLASS()  //�𸮾� Ŭ���� ���� 
class UNREALCODE_API AMoveLeftRight : public AActor  //  public AActor : AAcotr �� ����� ��� �ްڴ�. 
{
	GENERATED_BODY() //�𸮾� �ڵ�  ���� �Լ� : �𸮾� Ŭ���� ���� �⺻ ��Ģ
	
public:	
	// Sets default values for this actor's properties
	AMoveLeftRight();
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
	bool IsMoveRight;

};
