// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveLeftRight.h"

// Sets default values
AMoveLeftRight::AMoveLeftRight() : m_LocX(), m_LocZ(), m_IsMoveRight(1), m_IsPlay(false)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// CreateDefaultSubobject : new 키워드와 같이 언리얼에서 동적으로 객체를 생성하는 키워드
	// TEXT : 언리얼에서 사용하는 문자형 중에 하나
	// <USceneComponent>(TEXT("SceneRootRoot")) // USceneComponent 객체를 "SceneRootRoot" 이름으로 동적으로 생성
	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRootRoot"));
	// <UStaticMeshComponent>(TEXT("mymyMesh")) // UStaticMeshComponent 객체를 "mymyMesh" 이름으로 동적으로 생성
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mymyMesh"));


	//===루트컴포넌트로 붙이는 방법중 1개.
	SetRootComponent(Scene); // Scene 을  Root Component 로 올리겠다.
	//RootComponent = Scene; //  Scene 을 Root Component 로 올리겠다.
	
	
	//AttachToComponent : Component  에 붙이는 기능
	// Scene 에 붙인다. 현재 좌표값을  Scene 기준에 Relative(상대 ) 좌표계로 붙인다. 좌표값을 가지고 간다.
	StaticMesh->AttachToComponent(Scene, FAttachmentTransformRules::KeepRelativeTransform);
	
	// 루트에 무엇이 있는지 모르면 루트 컴포넌트를 지정해서 붙이면 된다.
	//RootComponent 에 붙인다. 현재 좌표값을 RootComponent 기준에 Relative(상대 ) 좌표계로 붙인다.
	//StaticMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	
	//UAsset  가져오기
	//ConstructorHelpers::FObjectFinder : 오브젝트 에셋을 찾는다.
	//<UStaticMesh> : 찾을 에셋 타입
	// sm : 찾아서 넣을 객체 이름 
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> sm(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Props/SM_Chair.SM_Chair'"));

	//if (sm.Succeeded()) //에셋 불러오기 성공 여부 체크 
	//{
	//	StaticMesh->SetStaticMesh(sm.Object); //스태틱 메시 컴포넌트에  스태틱 메시 적용
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
	Super::Tick(DeltaTime); //오버라이드한 함수인 경우 부모함수를 실행한다.
	
	if (m_IsPlay == false)
	{
		return;
	}
	//m_IsMoveRight; //움직일 방향
	if (m_IsMoveRight == true)
	{
		m_LocX += 1; //오른쪽
	}
	if (m_IsMoveRight == false)
	{
		m_LocX -= 1; //왼쪽
	}
	// SetRelativeLocation : 상대적인 위치값을 설정한다.
	// FVector : 언리얼에서 사용하는 3차원 좌표 변수
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

