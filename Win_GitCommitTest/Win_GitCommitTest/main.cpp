/*
------------------------------------
main.cpp
------------------------------------
author    Katoh Yusuke
date      2012-08-11
------------------------------------
 Commit�`�F�b�N�p�v���W�F�N�g
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
	std::cout << "�n���[�@�n���[" << std::endl;
	Sleep(3939);

	return 0;
}

// EOF
