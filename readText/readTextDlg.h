// readTextDlg.h : header file
//

#if !defined(AFX_READTEXTDLG_H__6ED81900_1627_4762_8998_023F1CFB0978__INCLUDED_)
#define AFX_READTEXTDLG_H__6ED81900_1627_4762_8998_023F1CFB0978__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CReadTextDlg dialog

class CReadTextDlg : public CDialog
{
// Construction
public:
	CReadTextDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CReadTextDlg)
	enum { IDD = IDD_READTEXT_DIALOG };
	//CString	m_strText;
	CListCtrl	m_list;
	int  Flag;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CReadTextDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CReadTextDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButtonReadText();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedCancel();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_READTEXTDLG_H__6ED81900_1627_4762_8998_023F1CFB0978__INCLUDED_)
