
// test4.20-2.2View.cpp : Ctest42022View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test4.20-2.2.h"
#endif

#include "test4.20-2.2Doc.h"
#include "test4.20-2.2View.h"
#include"Mydialog0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest42022View

IMPLEMENT_DYNCREATE(Ctest42022View, CView)

BEGIN_MESSAGE_MAP(Ctest42022View, CView)
	ON_COMMAND(ID_yuan, &Ctest42022View::Onyuan)
END_MESSAGE_MAP()

// Ctest42022View ����/����

Ctest42022View::Ctest42022View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest42022View::~Ctest42022View()
{
}

BOOL Ctest42022View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest42022View ����

void Ctest42022View::OnDraw(CDC* /*pDC*/)
{
	Ctest42022Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest42022View ���

#ifdef _DEBUG
void Ctest42022View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest42022View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest42022Doc* Ctest42022View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest42022Doc)));
	return (Ctest42022Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest42022View ��Ϣ�������


void Ctest42022View::Onyuan()
{
	Mydialog0 dl;
	int t = dl.DoModal();
	if (t == IDOK) {
		int r, x, y,z;
		r = dl.r;
		x = dl.x;
		y = dl.y;
		z = dl.z;
		CRect cr(x - z, y - r, x + z, y + r);
		GetDC()->Ellipse(cr);
	}
	// TODO: �ڴ���������������
}
