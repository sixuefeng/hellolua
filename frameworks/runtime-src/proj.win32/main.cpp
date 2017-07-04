#include "main.h"
#include "SimulatorWin.h"
#include <shellapi.h>

int WINAPI _tWinMain(HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPTSTR    lpCmdLine,
	int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);
    auto simulator = SimulatorWin::getInstance();
    return simulator->run();
}


//#include "main.h"  
//#include "AppDelegate.h"  
//#include "cocos2d.h"  
//
//USING_NS_CC;
//
//#define USE_WIN32_CONSOLE    
//
//int WINAPI _tWinMain(HINSTANCE hInstance,
//	HINSTANCE hPrevInstance,
//	LPTSTR    lpCmdLine,
//	int       nCmdShow)
//{
//	UNREFERENCED_PARAMETER(hPrevInstance);
//	UNREFERENCED_PARAMETER(lpCmdLine);
//
//#ifdef USE_WIN32_CONSOLE    
//	AllocConsole();
//	freopen("CONIN$", "r", stdin);
//	freopen("CONOUT$", "w", stdout);
//	freopen("CONOUT$", "w", stderr);
//	printf("hello--------------------------hello", NULL);
//#endif    
//
//	// create the application instance  
//	AppDelegate app;
//	return Application::getInstance()->run();
//#ifdef USE_WIN32_CONSOLE    
//	FreeConsole();
//#endif    
//}