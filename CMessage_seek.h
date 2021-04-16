#pragma once



// CMessage_seek 窗体视图

class CMessage_seek : public CFormView
{
	DECLARE_DYNCREATE(CMessage_seek)

protected:
	CMessage_seek();           // 动态创建所使用的受保护的构造函数
	virtual ~CMessage_seek();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Message_seek };
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
	CString Seek_name;
	CListBox Seek_show;
public:
	afx_msg void OnBnClickedButton1();
};


