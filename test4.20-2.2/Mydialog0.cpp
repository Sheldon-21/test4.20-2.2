// Mydialog0.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "test4.20-2.2.h"
#include "Mydialog0.h"
#include "afxdialogex.h"


// Mydialog0 �Ի���

IMPLEMENT_DYNAMIC(Mydialog0, CDialogEx)

Mydialog0::Mydialog0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, r(0)
	, y(0)
	, z(0)
{

}

Mydialog0::~Mydialog0()
{
}

void Mydialog0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDV_MinMaxInt(pDX, x, 1, 600);
	DDX_Text(pDX, IDC_EDIT4, r);
	DDV_MinMaxInt(pDX, r, 1, 500);
	DDX_Text(pDX, IDC_EDIT3, y);
	DDV_MinMaxInt(pDX, y, 1, 600);
	DDX_Text(pDX, IDC_EDIT5, z);
	DDV_MinMaxInt(pDX, z, 1, 500);
}


BEGIN_MESSAGE_MAP(Mydialog0, CDialogEx)
	ON_BN_CLICKED(IDOK, &Mydialog0::OnBnClickedOk)
END_MESSAGE_MAP()


// Mydialog0 ��Ϣ�������


void Mydialog0::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	CDialogEx::OnOK();
}
