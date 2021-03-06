// NetworkClient.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <EclipseDebugging/include/DebugModule.h>
#include <EclipseEngine/include/TimeModule.h>
#include <EclipseEngine/include/Application.h>
#include <EclipseNetworking/include/NetworkingModule.h>

#include "NetworkServerApplication.h"

using namespace Eclipse;
using namespace Engine;

int main()
{
    Application::Create<NetworkServerApplication>({});
    Application::Initialize<Debug::DebugModule, Networking::NetworkingModule>(Application::Instance);
    Application::Run();
}

