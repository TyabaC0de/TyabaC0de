/*
------------------------------------
main.cpp
------------------------------------
author    Katoh Yusuke
date      2012-08-11
------------------------------------
 Commitチェック用プロジェクト
------------------------------------
*/

#include <windows.h>
#include <iostream>

#include "CDebugConsole.hpp"

int WINAPI WinMain(	HINSTANCE hInstance,
					HINSTANCE hPrevInstance,
					LPSTR lpCmdLine,
					int nShowCmd ) 
{
	lib::debug::CDebugConsole::CreateConsoleWindow();
	std::cout << "ハロー　ハロー" << std::endl;
	Sleep(3939);

	return 0;
}

// EOF
