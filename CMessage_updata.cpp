// CMessage_updata.cpp: 实现文件
//

#include "pch.h"
#include "Studentsystem.h"
#include "CMessage_updata.h"
#include"StudentMC.h"

// CMessage_updata

IMPLEMENT_DYNCREATE(CMessage_updata, CFormView)

CMessage_updata::CMessage_updata()
	: CFormView(IDD_Message_updata)
	, New_name(_T(""))
	, New_year(_T(""))
	, New_class(_T(""))
	, New_mark(_T(""))
	, Change_name(_T(""))
	, Change_year(_T(""))
	, Change_class(_T(""))
	, Change_mark(_T(""))
{

}

CMessage_updata::~CMessage_updata()
{
}

void CMessage_updata::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, New_name);
	DDX_Text(pDX, IDC_EDIT1, New_year);
	DDX_Text(pDX, IDC_EDIT3, New_class);
	DDX_Text(pDX, IDC_EDIT4, New_mark);
	DDX_Text(pDX, IDC_EDIT6, Change_name);
	DDX_Text(pDX, IDC_EDIT5, Change_year);
	DDX_Text(pDX, IDC_EDIT7, Change_class);
	DDX_Text(pDX, IDC_EDIT8, Change_mark);
}

BEGIN_MESSAGE_MAP(CMessage_updata, CFormView)
	ON_BN_CLICKED(IDC_BUTTON1, &CMessage_updata::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMessage_updata::OnBnClickedButton2)
END_MESSAGE_MAP()


// CMessage_updata 诊断

#ifdef _DEBUG
void CMessage_updata::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CMessage_updata::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CMessage_updata 消息处理程序


void CMessage_updata::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	Student a;
	a.name = CT2A(New_name.GetString());
	a.year= CT2A(New_year.GetString());
	a.classnumber = CT2A(New_class.GetString());
	a.average = CT2A(New_mark.GetString());
	Student_In(a);
	UpdateData(false);
	MessageBox(TEXT("添加成功"));
}


void CMessage_updata::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	Student a;
	a.name = CT2A(Change_name.GetString());
	a.year = CT2A(Change_year.GetString());
	a.classnumber = CT2A(Change_class.GetString());
	a.average = CT2A(Change_mark.GetString());
	Student_Change(a);
	UpdateData(false);
	MessageBox(TEXT("修改成功"));
}
