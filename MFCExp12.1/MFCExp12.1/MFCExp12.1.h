
// MFCExp12.1.h : MFCExp12.1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExp121App:
// �йش����ʵ�֣������ MFCExp12.1.cpp
//

class CMFCExp121App : public CWinApp
{
public:
	CMFCExp121App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExp121App theApp;