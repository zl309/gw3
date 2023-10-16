// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveLeftRight.h"

// Sets default values
AMoveLeftRight::AMoveLeftRight() : m_LocX(), m_LocZ(), m_IsMoveRight(1), m_IsPlay(false)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// CreateDefaultSubobject : new Ű����� ���� �𸮾󿡼� �������� ��ü�� �����ϴ� Ű����
	// TEXT : �𸮾󿡼� ����ϴ� ������ �߿� �ϳ�
	// <USceneComponent>(TEXT("SceneRootRoot")) // USceneComponent ��ü�� "SceneRootRoot" �̸����� �������� ����
	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRootRoot"));
	// <UStaticMeshComponent>(TEXT("mymyMesh")) // UStaticMeshComponent ��ü�� "mymyMesh" �̸����� �������� ����
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mymyMesh"));


	//===��Ʈ������Ʈ�� ���̴� ����� 1��.
	SetRootComponent(Scene); // Scene ��  Root Component �� �ø��ڴ�.
	//RootComponent = Scene; //  Scene �� Root Component �� �ø��ڴ�.
	
	
	//AttachToComponent : Component  �� ���̴� ���
	// Scene �� ���δ�. ���� ��ǥ����  Scene ���ؿ� Relative(��� ) ��ǥ��� ���δ�. ��ǥ���� ������ ����.
	StaticMesh->AttachToComponent(Scene, FAttachmentTransformRules::KeepRelativeTransform);
	
	// ��Ʈ�� ������ �ִ��� �𸣸� ��Ʈ ������Ʈ�� �����ؼ� ���̸� �ȴ�.
	//RootComponent �� ���δ�. ���� ��ǥ���� RootComponent ���ؿ� Relative(��� ) ��ǥ��� ���δ�.
	//StaticMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	
	//UAsset  ��������
	//ConstructorHelpers::FObjectFinder : ������Ʈ ������ ã�´�.
	//<UStaticMesh> : ã�� ���� Ÿ��
	// sm : ã�Ƽ� ���� ��ü �̸� 
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> sm(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Props/SM_Chair.SM_Chair'"));

	//if (sm.Succeeded()) //���� �ҷ����� ���� ���� üũ 
	//{
	//	StaticMesh->SetStaticMesh(sm.Object); //����ƽ �޽� ������Ʈ��  ����ƽ �޽� ����
	//}

}

// Called when the game starts or when spawned
void AMoveLeftRight::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMoveLeftRight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); //�������̵��� �Լ��� ��� �θ��Լ��� �����Ѵ�.
	
	if (m_IsPlay == false)
	{
		return;
	}
	//m_IsMoveRight; //������ ����
	if (m_IsMoveRight == true)
	{
		m_LocX += 1; //������
	}
	if (m_IsMoveRight == false)
	{
		m_LocX -= 1; //����
	}
	// SetRelativeLocation : ������� ��ġ���� �����Ѵ�.
	// FVector : �𸮾󿡼� ����ϴ� 3���� ��ǥ ����
	StaticMesh->SetRelativeLocation(FVector(m_LocX, m_LocZ,0));
	if (m_LocX>=100)
	{
		m_IsMoveRight = false;
	}
	if (m_LocX<=0)
	{
		m_IsMoveRight = true;
	}
	StaticMesh->SetRelativeLocation(FVector(m_LocX, 0, m_LocZ));
	

	
	/*switch (M_num)
	{
	case AMoveLeftRight::Right:
		LocX += 1;
		if(LocX>=100)
		{
		break;
		}
	case AMoveLeftRight::Up:
		LocZ += 1;
		if (LocZ >= 100)
		{
			break;
		}
	case AMoveLeftRight::Left:
		LocX -= 1;
		if (LocX <= 0)
		{
			break;
		}
	case AMoveLeftRight::Down:
		LocZ -= 1;
		if (LocZ <= 0)
		{
			break;
		}
	default:
		break;
	}*/
}

void AMoveLeftRight::Code_DoPlay_Implementation(bool IsPlay)
{
	m_IsPlay = IsPlay;
}

