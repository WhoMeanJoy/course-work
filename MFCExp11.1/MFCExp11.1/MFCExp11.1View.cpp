
// MFCExp11.1View.cpp : CMFCExp111View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCExp11.1.h"
#endif

#include "MFCExp11.1Set.h"
#include "MFCExp11.1Doc.h"
#include "MFCExp11.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExp111View

IMPLEMENT_DYNCREATE(CMFCExp111View, CRecordView)

BEGIN_MESSAGE_MAP(CMFCExp111View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON1, &CMFCExp111View::OnShowPicture)
END_MESSAGE_MAP()

// CMFCExp111View ����/����

CMFCExp111View::CMFCExp111View()
	: CRecordView(IDD_MFCEXP111_FORM)
	, id(_T(""))
	, number(_T(""))
	, name(_T(""))
	, age(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴����ӹ������

}

CMFCExp111View::~CMFCExp111View()
{
}

void CMFCExp111View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column3);
}

BOOL CMFCExp111View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CMFCExp111View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_MFCExp111Set;
	CRecordView::OnInitialUpdate();

}


// CMFCExp111View ���

#ifdef _DEBUG
void CMFCExp111View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMFCExp111View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMFCExp111Doc* CMFCExp111View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCExp111Doc)));
	return (CMFCExp111Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCExp111View ���ݿ�֧��
CRecordset* CMFCExp111View::OnGetRecordset()
{
	return m_pSet;
}



// CMFCExp111View ��Ϣ��������

void CMFCExp111View::foo(CImage& img, int& sx, int& sy, int& w, int& h)
{
	CRect rect;
	GetDlgItem(IDC_PICTURE)->GetClientRect(&rect);
	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
	if (rect_ratio > img_ratio) {
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;

	}
	else
	{
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;

	}
}


void CMFCExp111View::OnShowPicture()
{
	// TODO: �ڴ����ӿؼ�֪ͨ�����������
	CString s;
	CImage img;
	m_pSet->GetFieldValue(short(4), s);
	img.Load(s);
	CDC *pDC = GetDlgItem(IDC_PICTURE)->GetDC();//�����õ�getdc�����ͷ���
	pDC->SetStretchBltMode(HALFTONE);//ͼ��ʧ��
	int sx, sy, w, h;
	foo(img, sx, sy, w, h);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
}