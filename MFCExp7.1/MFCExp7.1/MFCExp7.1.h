
// MFCExp7.1.h : MFCExp7.1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExp71App:
// �йش����ʵ�֣������ MFCExp7.1.cpp
//

class CMFCExp71App : public CWinApp
{
public:
	CMFCExp71App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExp71App theApp;