// CMessage_seek.cpp: 实现文件
//

#include "pch.h"
#include "Studentsystem.h"
#include "CMessage_seek.h"
#include"StudentMC_1.h"


// CMessage_seek

IMPLEMENT_DYNCREATE(CMessage_seek, CFormView)

CMessage_seek::CMessage_seek()
	: CFormView(IDD_Message_seek)
	, Seek_name(_T(""))
{

}

CMessage_seek::~CMessage_seek()
{
}

void CMessage_seek::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, Seek_name);
	DDX_Control(pDX, IDC_LIST2, Seek_show);
}

BEGIN_MESSAGE_MAP(CMessage_seek, CFormView)
	ON_BN_CLICKED(IDC_BUTTON1, &CMessage_seek::OnBnClickedButton1)
END_MESSAGE_MAP()


// CMessage_seek 诊断

#ifdef _DEBUG
void CMessage_seek::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CMessage_seek::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CMessage_seek 消息处理程序


void CMessage_seek::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	Student_1 b;
	b.name = CT2A(Seek_name.GetString());
	b=Student_Seek(b, b.name);
	Seek_show.ResetContent();
	Seek_show.AddString(CA2T(b.name.c_str()));
	Seek_show.AddString(CA2T(b.year.c_str()));
	Seek_show.AddString(CA2T(b.classnumber.c_str()));
	Seek_show.AddString(CA2T(b.average.c_str()));
	UpdateData(false);
	
}
