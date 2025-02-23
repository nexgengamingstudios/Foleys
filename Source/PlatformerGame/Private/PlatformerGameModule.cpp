// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "PlatformerGame.h"


class FPlatformerGameModule : public FDefaultGameModuleImpl
{
	virtual void StartupModule() override
	{

	}

	virtual void ShutdownModule() override
	{
	
	}
};

IMPLEMENT_PRIMARY_GAME_MODULE(FPlatformerGameModule, PlatformerGame, "Foley");

DEFINE_LOG_CATEGORY(LogPlatformer)
