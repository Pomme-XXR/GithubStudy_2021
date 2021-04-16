#pragma once



// CMessage_updata 窗体视图

class CMessage_updata : public CFormView
{
	DECLARE_DYNCREATE(CMessage_updata)

protected:
	CMessage_updata();           // 动态创建所使用的受保护的构造函数
	virtual ~CMessage_updata();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Message_updata };
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
	CString New_name;
	CString New_year;
	CString New_class;
	CString New_mark;
public:
	afx_msg void OnBnClickedButton1();
private:
	CString Change_name;
	CString Change_year;
	CString Change_class;
	CString Change_mark;
public:
	afx_msg void OnBnClickedButton2();
};


