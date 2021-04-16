// CMessage_delete.cpp: 实现文件
//

#include "pch.h"
#include "Studentsystem.h"
#include "CMessage_delete.h"
#include"StudentMC_2.h"


// CMessage_delete

IMPLEMENT_DYNCREATE(CMessage_delete, CFormView)

CMessage_delete::CMessage_delete()
	: CFormView(IDD_Message_delete)
	, Delete_name(_T(""))
{

}

CMessage_delete::~CMessage_delete()
{
}

void CMessage_delete::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, Delete_name);
}

BEGIN_MESSAGE_MAP(CMessage_delete, CFormView)
	ON_BN_CLICKED(IDC_BUTTON1, &CMessage_delete::OnBnClickedButton1)
END_MESSAGE_MAP()


// CMessage_delete 诊断

#ifdef _DEBUG
void CMessage_delete::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CMessage_delete::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CMessage_delete 消息处理程序


void CMessage_delete::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	Student_2 a;
	a.name = CT2A(Delete_name.GetString());
	Student_Delete(a);
	UpdateData(false);
	MessageBox(TEXT("删除成功"));
}
