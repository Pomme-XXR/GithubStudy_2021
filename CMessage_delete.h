#pragma once



// CMessage_delete 窗体视图

class CMessage_delete : public CFormView
{
	DECLARE_DYNCREATE(CMessage_delete)

protected:
	CMessage_delete();           // 动态创建所使用的受保护的构造函数
	virtual ~CMessage_delete();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Message_delete };
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
	CString Delete_name;
public:
	afx_msg void OnBnClickedButton1();
};


