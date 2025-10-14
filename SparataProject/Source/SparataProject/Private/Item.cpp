#include "Item.h"

DEFINE_LOG_CATEGORY(LogSparta);

AItem::AItem()
{
    // Tick을 활성화해, 매 프레임 Tick 함수가 호출되도록 설정
    PrimaryActorTick.bCanEverTick = true;

    // Component 설정
    SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    SetRootComponent(SceneRoot);

    StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    StaticMeshComp->SetupAttachment(SceneRoot);

    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/Resources/Props/SM_Chair.SM_Chair"));
    if (MeshAsset.Succeeded())
    {
        StaticMeshComp->SetStaticMesh(MeshAsset.Object);
    }

    static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("/Game/Resources/Materials/M_Metal_Gold.M_Metal_Gold"));
    if (MaterialAsset.Succeeded())
    {
        StaticMeshComp->SetMaterial(0, MaterialAsset.Object);
    }

    UE_LOG(LogSparta, Warning, TEXT("%s Constructor"), *GetName());
}

void AItem::PostInitializeComponents()
{
    Super::PostInitializeComponents();

    UE_LOG(LogSparta, Warning, TEXT("%s PostInitializeComponents"), *GetName());
}

void AItem::BeginPlay()
{
    Super::BeginPlay();

    UE_LOG(LogSparta, Warning, TEXT("%s BeginPlay"), *GetName());
}

void AItem::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Tick 함수는 매 프레임마다 호출되므로
    // 여기서 로그를 찍으면 방대한 양의 메시지가 쌓일 수 있음.
    // 필요시 디버깅용 코드만 간단히 작성하거나, 별도 조건을 걸어 사용.
}

void AItem::Destroyed()
{
    UE_LOG(LogSparta, Warning, TEXT("%s Destroyed"), *GetName());

    Super::Destroyed();
}

void AItem::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    UE_LOG(LogSparta, Warning, TEXT("%s EndPlay"), *GetName());

    Super::EndPlay(EndPlayReason);
}