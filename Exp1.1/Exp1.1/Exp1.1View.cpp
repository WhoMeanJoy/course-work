
// Exp1.1View.cpp : CExp11View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Exp1.1.h"
#endif

#include "Exp1.1Doc.h"
#include "Exp1.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CExp11View

IMPLEMENT_DYNCREATE(CExp11View, CView)

BEGIN_MESSAGE_MAP(CExp11View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CExp11View ����/����

CExp11View::CExp11View()
{
	// TODO: �ڴ˴����ӹ������

}

CExp11View::~CExp11View()
{
}

BOOL CExp11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CExp11View ����

void CExp11View::OnDraw(CDC* /*pDC*/)
{
	CExp11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ�����������ӻ��ƴ���
}


// CExp11View ���

#ifdef _DEBUG
void CExp11View::AssertValid() const
{
	CView::AssertValid();
}

void CExp11View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CExp11Doc* CExp11View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CExp11Doc)));
	return (CExp11Doc*)m_pDocument;
}
#endif //_DEBUG


// CExp11View ��Ϣ��������


void CExp11View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ�������Ϣ������������/�����Ĭ��ֵ
	CExp11Doc*pDoc = GetDocument();
	CClientDC dc(this);
	dc.TextOutW(200, 300, pDoc->name);
	CView::OnLButtonDown(nFlags, point);
}