#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OSCServer.h"
#include "OSCActorServer.generated.h"

DECLARE_MULTICAST_DELEGATE_OneParam(AOSCActorServerStartedInternal, UOSCServer*)

UCLASS()
class OSCACTOR_API AOSCActorServer : public AActor
{
	GENERATED_BODY()
	
public:	

	AOSCActorServer();

	AOSCActorServerStartedInternal OnOSCServerStartedInternal;

protected:

	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	

	UPROPERTY(Category = "OSCActor", EditAnywhere, BlueprintReadWrite)
	int Port = 7000;

private:

	UPROPERTY()
	class UOSCServer* OSCServer;
};
