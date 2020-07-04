
// test4.20-2.2View.h : Ctest42022View 类的接口
//

#pragma once


class Ctest42022View : public CView
{
protected: // 仅从序列化创建
	Ctest42022View();
	DECLARE_DYNCREATE(Ctest42022View)

// 特性
public:
	Ctest42022Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctest42022View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onyuan();
};

#ifndef _DEBUG  // test4.20-2.2View.cpp 中的调试版本
inline Ctest42022Doc* Ctest42022View::GetDocument() const
   { return reinterpret_cast<Ctest42022Doc*>(m_pDocument); }
#endif

