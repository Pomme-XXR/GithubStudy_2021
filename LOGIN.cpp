// LOGIN.cpp: 实现文件
//

#include "pch.h"
#include "Studentsystem.h"
#include "LOGIN.h"
#include "afxdialogex.h"


// LOGIN 对话框

IMPLEMENT_DYNAMIC(LOGIN, CDialogEx)

LOGIN::LOGIN(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_Login, pParent)
	, m_user(_T(""))
	, m_key(_T(""))
{

}

LOGIN::~LOGIN()
{
}

void LOGIN::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, m_user);
	DDX_Text(pDX, IDC_EDIT1, m_key);
}


BEGIN_MESSAGE_MAP(LOGIN, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &LOGIN::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &LOGIN::OnBnClickedButton2)
	ON_WM_CLOSE()
END_MESSAGE_MAP()


// LOGIN 消息处理程序


void LOGIN::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	if (m_user.IsEmpty() || m_key.IsEmpty())
	{
		MessageBox(TEXT("用户名或密码不能为空"));
		return;
	}
	if (m_user != "徐曦然" || m_key != "0204")
	{
		MessageBox(TEXT("用户名或密码错误"));
	}
	else CDialog::OnCancel();
	
}


void LOGIN::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	exit(0); 
}


BOOL LOGIN::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	m_user = "徐曦然";
	m_key = "0204";
	UpdateData(false);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void LOGIN::OnOK()
{
	// TODO: 在此添加专用代码和/或调用基类

	//CDialogEx::OnOK();
}


void LOGIN::OnClose()
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	exit(0);
	//CDialogEx::OnClose();
}
