
// Exp1.1View.h : CExp11View ��Ľӿ�
//

#pragma once


class CExp11View : public CView
{
protected: // �������л�����
	CExp11View();
	DECLARE_DYNCREATE(CExp11View)

// ����
public:
	CExp11Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CExp11View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Exp1.1View.cpp �еĵ��԰汾
inline CExp11Doc* CExp11View::GetDocument() const
   { return reinterpret_cast<CExp11Doc*>(m_pDocument); }
#endif
