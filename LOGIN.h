#pragma once


// LOGIN 对话框

class LOGIN : public CDialogEx
{
	DECLARE_DYNAMIC(LOGIN)

public:
	LOGIN(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~LOGIN();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Login };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
private:
	CString m_user;
	CString m_key;
public:
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	afx_msg void OnClose();
};
