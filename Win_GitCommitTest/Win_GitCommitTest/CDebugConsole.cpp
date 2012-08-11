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

// �R���X�g���N�^
CDebugConsole::CDebugConsole():
	m_COutStream(nullptr),
	m_CInStream(nullptr),
	m_TxtOutStream(nullptr) {
	Init();
}

// �f�X�g���N�^
CDebugConsole::~CDebugConsole(){
	std::cout << "DebugConsole Exit." << std::endl;
	Exit();
}

// ������
bool CDebugConsole::Init() {
	
	if( AllocConsole() ) {
		// ����
	} else {
		return false;
	}

	// �쐬�����R���\�[����W���o�͂ɐݒ�
	freopen_s( &m_COutStream, "CONOUT$", "w", stdout );	//�@�o�͂��R���\�[���ɐݒ�
	freopen_s( &m_CInStream, "CONIN$", "r", stdin );		//�@�o�͂��R���\�[���ɐݒ�

	std::cout << "DebugConsole Initialize." << std::endl;

	return true;
}

// �I������
void CDebugConsole::Exit() {
	fclose( m_COutStream );
	fclose( m_CInStream );
	FreeConsole();
}

// �R���\�[���E�B���h�E�̍쐬
void CDebugConsole::CreateConsoleWindow(){
	static CDebugConsole instance;
}

// Init���b�Z�[�W�o��
void CDebugConsole::Message_Init( const char* str ){
	std::cout << "Initilize" << str << "." << std::endl;
}

// TODO: ���b�Z�[�W�o�͊֐��ǉ�
//		( DEBUG, RELEASE��cout<<�̎g�p��؂�ւ���� )

} // namespace sys
} // namespace lib

// EOF
