// CMessage_show.cpp: 实现文件
//

#include "pch.h"
#include "Studentsystem.h"
#include "CMessage_show.h"
#include"LOGIN.h"
#include "locale.h"


// CMessage_show

IMPLEMENT_DYNCREATE(CMessage_show, CFormView)

CMessage_show::CMessage_show()
	: CFormView(IDD_Message_show)
	, m_show_user(_T(""))
	, m_user_message(_T(""))
{

}

CMessage_show::~CMessage_show()
{
}

void CMessage_show::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_show_user);
	DDX_LBString(pDX, IDC_LIST1, m_user_message);
	DDX_Control(pDX, IDC_LIST1, m_ListBox_show);
	DDX_Control(pDX, IDC_LIST4, studentList);
}

BEGIN_MESSAGE_MAP(CMessage_show, CFormView)
	ON_BN_CLICKED(IDC_BUTTON1, &CMessage_show::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMessage_show::OnBnClickedButton2)
END_MESSAGE_MAP()


// CMessage_show 诊断

#ifdef _DEBUG
void CMessage_show::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CMessage_show::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CMessage_show 消息处理程序


void CMessage_show::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	m_ListBox_show.ResetContent();
	UpdateData(true);
	m_show_user = "徐曦然";
	m_ListBox_show.AddString(_T("西华大学"));
	m_ListBox_show.AddString(_T("2019级"));
	m_ListBox_show.AddString(_T("计科三班"));
	UpdateData(false);

}


void CMessage_show::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	studentList.ResetContent();
	CStdioFile sfile;
	setlocale(LC_CTYPE, "chs");
	sfile.Open(_T("StudentMessage.txt"), CStdioFile::modeReadWrite);
	CString Buf;

	while (sfile.ReadString(Buf))
	{
		studentList.AddString(Buf);
	}
	sfile.Close();

}
