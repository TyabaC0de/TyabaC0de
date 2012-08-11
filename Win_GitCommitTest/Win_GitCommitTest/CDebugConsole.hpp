
/*
----------------------------------
 CDebugConsole.h
----------------------------------
author     Katoh Yusuke
date       2012-08-06
----------------------------------
 Singleton
 �R���\�[���N���X
 �R���\�[���E�B���h�E�����A
 �W���o�͂�ݒ肷��
----------------------------------
 DEBUG RELEASE�؂�ւ��p�̏����܂�
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
	// �R���X�g���N�^
	CDebugConsole();
	
	// ������
	bool Init();
	//�I������
	void Exit();
public:
	// �f�X�g���N�^
	~CDebugConsole();
	// �R���\�[���E�B���h�E�̍쐬
	// �����̓C���X�^���X�̎擾�̂�
	static void CreateConsoleWindow();
	// ���b�Z�[�W�o��
	static void Message_Init( const char* str );
};

} // namespace sys
} // namespace lib

// EOF
