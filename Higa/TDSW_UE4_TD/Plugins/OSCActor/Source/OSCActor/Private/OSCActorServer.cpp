#include "OSCActorServer.h"

AOSCActorServer::AOSCActorServer()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AOSCActorServer::BeginPlay()
{
	Super::BeginPlay();
	
	OSCServer = NewObject<UOSCServer>(GetTransientPackage(), FName("OSCActorServer"));
	OSCServer->SetAddress(FString("0.0.0.0"), Port);
	OSCServer->Listen();

	OnOSCServerStartedInternal.Broadcast(OSCServer);
}

void AOSCActorServer::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	// OSCServer->Stop();
}
