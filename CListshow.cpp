// CListshow.cpp: 实现文件
//

#include "pch.h"
#include "Studentsystem.h"
#include "CListshow.h"
#include "afxdialogex.h"


// CListshow 对话框

IMPLEMENT_DYNAMIC(CListshow, CDialogEx)

CListshow::CListshow(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_Message_show, pParent)
{

}

CListshow::~CListshow()
{
}

void CListshow::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CListshow, CDialogEx)
END_MESSAGE_MAP()


// CListshow 消息处理程序
