
// test4.20-2.2View.h : Ctest42022View ��Ľӿ�
//

#pragma once


class Ctest42022View : public CView
{
protected: // �������л�����
	Ctest42022View();
	DECLARE_DYNCREATE(Ctest42022View)

// ����
public:
	Ctest42022Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest42022View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onyuan();
};

#ifndef _DEBUG  // test4.20-2.2View.cpp �еĵ��԰汾
inline Ctest42022Doc* Ctest42022View::GetDocument() const
   { return reinterpret_cast<Ctest42022Doc*>(m_pDocument); }
#endif

