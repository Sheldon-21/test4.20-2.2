
// test4.20-2.2.h : test4.20-2.2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Ctest42022App:
// �йش����ʵ�֣������ test4.20-2.2.cpp
//

class Ctest42022App : public CWinApp
{
public:
	Ctest42022App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Ctest42022App theApp;
