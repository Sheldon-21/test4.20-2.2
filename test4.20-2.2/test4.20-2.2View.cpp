
// test4.20-2.2View.cpp : Ctest42022View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// Ctest42022View 构造/析构

Ctest42022View::Ctest42022View()
{
	// TODO: 在此处添加构造代码

}

Ctest42022View::~Ctest42022View()
{
}

BOOL Ctest42022View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest42022View 绘制

void Ctest42022View::OnDraw(CDC* /*pDC*/)
{
	Ctest42022Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctest42022View 诊断

#ifdef _DEBUG
void Ctest42022View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest42022View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest42022Doc* Ctest42022View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest42022Doc)));
	return (Ctest42022Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest42022View 消息处理程序


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
	// TODO: 在此添加命令处理程序代码
}
