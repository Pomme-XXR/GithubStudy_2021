#pragma once



// CMessage_show 窗体视图

class CMessage_show : public CFormView
{
	DECLARE_DYNCREATE(CMessage_show)

protected:
	CMessage_show();           // 动态创建所使用的受保护的构造函数
	virtual ~CMessage_show();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Message_show };
#endif
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
private:
	CString m_show_user;
	CString m_user_message;
public:
	afx_msg void OnBnClickedButton1();
private:
	CListBox m_ListBox_show;
	CListBox studentList;
public:
	afx_msg void OnBnClickedButton2();
};


