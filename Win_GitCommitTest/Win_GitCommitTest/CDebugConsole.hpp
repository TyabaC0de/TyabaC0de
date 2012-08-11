
/*
----------------------------------
 CDebugConsole.h
----------------------------------
author     Katoh Yusuke
date       2012-08-06
----------------------------------
 Singleton
 コンソールクラス
 コンソールウィンドウを作り、
 標準出力を設定する
----------------------------------
 DEBUG RELEASE切り替え用の処理まだ
----------------------------------
*/

#pragma once
#include <cstdio> // FILE

namespace lib {

namespace debug {

// Class
class CDebugConsole {
	FILE*			m_COutStream;
	FILE*			m_CInStream;
	FILE*			m_TxtOutStream;
	// コンストラクタ
	CDebugConsole();
	
	// 初期化
	bool Init();
	//終了処理
	void Exit();
public:
	// デストラクタ
	~CDebugConsole();
	// コンソールウィンドウの作成
	// 処理はインスタンスの取得のみ
	static void CreateConsoleWindow();
	// メッセージ出力
	static void Message_Init( const char* str );
};

} // namespace sys
} // namespace lib

// EOF
