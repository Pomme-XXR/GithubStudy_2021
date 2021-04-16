// CSelectView.cpp: 实现文件
//

#include "pch.h"
#include "Studentsystem.h"
#include "CSelectView.h"
#include"MainFrm.h"

// CSelectView

IMPLEMENT_DYNCREATE(CSelectView, CTreeView)

CSelectView::CSelectView()
{

}

CSelectView::~CSelectView()
{
}

BEGIN_MESSAGE_MAP(CSelectView, CTreeView)
	ON_NOTIFY_REFLECT(TVN_SELCHANGED, &CSelectView::OnTvnSelchanged)
END_MESSAGE_MAP()


// CSelectView 诊断

#ifdef _DEBUG
void CSelectView::AssertValid() const
{
	CTreeView::AssertValid();
}

#ifndef _WIN32_WCE
void CSelectView::Dump(CDumpContext& dc) const
{
	CTreeView::Dump(dc);
}
#endif
#endif //_DEBUG


// CSelectView 消息处理程序


void CSelectView::OnInitialUpdate()
{
	CTreeView::OnInitialUpdate();
	m_treeCtrl = &GetTreeCtrl();
	HICON icon = AfxGetApp()->LoadIconW(IDR_MAINFRAME);
	m_imageList.Create(30, 30, ILC_COLOR32, 1, 1);
	m_imageList.Add(icon);
	m_treeCtrl->SetImageList(&m_imageList, TVSIL_NORMAL);
	m_treeCtrl->InsertItem(TEXT("学生信息"), 0, 0, NULL);
	m_treeCtrl->InsertItem(TEXT("学生信息更新"), 0, 0, NULL);
	m_treeCtrl->InsertItem(TEXT("学生信息查询"), 0, 0, NULL);
	m_treeCtrl->InsertItem(TEXT("学生信息删除"), 0, 0, NULL);
	// TODO: 在此添加专用代码和/或调用基类
}


void CSelectView::OnTvnSelchanged(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMTREEVIEW pNMTreeView = reinterpret_cast<LPNMTREEVIEW>(pNMHDR);
	// TODO: 在此添加控件通知处理程序代码
	*pResult = 0;

	HTREEITEM item = m_treeCtrl->GetSelectedItem();
	CString str = m_treeCtrl->GetItemText(item);
	if (str == TEXT("学生信息"))
	{
		::PostMessage(AfxGetMainWnd()->GetSafeHwnd(), NM_A, (WPARAM)NM_A, (LPARAM)0);
	}
	else if(str == TEXT("学生信息更新"))
	{
		::PostMessage(AfxGetMainWnd()->GetSafeHwnd(), NM_B, (WPARAM)NM_B, (LPARAM)0);
	}
	else if (str == TEXT("学生信息查询"))
	{
		::PostMessage(AfxGetMainWnd()->GetSafeHwnd(), NM_C, (WPARAM)NM_C, (LPARAM)0);
	}
	else if (str == TEXT("学生信息删除"))
	{
		::PostMessage(AfxGetMainWnd()->GetSafeHwnd(), NM_D, (WPARAM)NM_D, (LPARAM)0);
	}
}
