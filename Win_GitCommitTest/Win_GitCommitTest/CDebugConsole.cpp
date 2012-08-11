/*
------------------------------------
CDebugConsole.cpp
------------------------------------
author    Katoh Yusuke
date      2012-08-06
------------------------------------
DebugConsole Class
------------------------------------
*/
#include <Windows.h>
#include <iostream>

#include "CDebugConsole.hpp"

namespace lib
{
namespace debug
{

// コンストラクタ
CDebugConsole::CDebugConsole():
	m_COutStream(nullptr),
	m_CInStream(nullptr),
	m_TxtOutStream(nullptr) {
	Init();
}

// デストラクタ
CDebugConsole::~CDebugConsole(){
	std::cout << "DebugConsole Exit." << std::endl;
	Exit();
}

// 初期化
bool CDebugConsole::Init() {
	
	if( AllocConsole() ) {
		// 成功
	} else {
		return false;
	}

	// 作成したコンソールを標準出力に設定
	freopen_s( &m_COutStream, "CONOUT$", "w", stdout );	//　出力をコンソールに設定
	freopen_s( &m_CInStream, "CONIN$", "r", stdin );		//　出力をコンソールに設定

	std::cout << "DebugConsole Initialize." << std::endl;

	return true;
}

// 終了処理
void CDebugConsole::Exit() {
	fclose( m_COutStream );
	fclose( m_CInStream );
	FreeConsole();
}

// コンソールウィンドウの作成
void CDebugConsole::CreateConsoleWindow(){
	static CDebugConsole instance;
}

// Initメッセージ出力
void CDebugConsole::Message_Init( const char* str ){
	std::cout << "Initilize" << str << "." << std::endl;
}

// TODO: メッセージ出力関数追加
//		( DEBUG, RELEASEでcout<<の使用を切り替える為 )

} // namespace sys
} // namespace lib

// EOF
