#pragma once


// Mydialog0 �Ի���

class Mydialog0 : public CDialogEx
{
	DECLARE_DYNAMIC(Mydialog0)

public:
	Mydialog0(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Mydialog0();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	int x;
	afx_msg void OnBnClickedOk();
	int r;
	int y;
	int z;
};
