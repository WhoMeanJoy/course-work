
// MFCApplication6.h : MFCApplication6 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication6App:
// �йش����ʵ�֣������ MFCApplication6.cpp
//

class CMFCApplication6App : public CWinApp
{
public:
	CMFCApplication6App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication6App theApp;