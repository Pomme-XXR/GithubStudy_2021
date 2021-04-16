#pragma once


// CListshow 对话框

class CListshow : public CDialogEx
{
	DECLARE_DYNAMIC(CListshow)

public:
	CListshow(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CListshow();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Message_show };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
