
// MFCExp8.1.h : MFCExp8.1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCExp81App:
// �йش����ʵ�֣������ MFCExp8.1.cpp
//

class CMFCExp81App : public CWinApp
{
public:
	CMFCExp81App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCExp81App theApp;