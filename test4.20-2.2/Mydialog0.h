#pragma once


// Mydialog0 对话框

class Mydialog0 : public CDialogEx
{
	DECLARE_DYNAMIC(Mydialog0)

public:
	Mydialog0(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Mydialog0();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	int x;
	afx_msg void OnBnClickedOk();
	int r;
	int y;
	int z;
};
