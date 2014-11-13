// readTextDlg.cpp : implementation file
// Dwonload by http://www.codefans.net

#include "stdafx.h"
#include "readText.h"
#include "readTextDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CReadTextDlg dialog

CReadTextDlg::CReadTextDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CReadTextDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CReadTextDlg)
	//m_strText = _T("");
	//m_list = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CReadTextDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CReadTextDlg)
	//DDX_Text(pDX, IDC_EDIT1, m_strText);
	DDX_Control(pDX, IDC_LIST1, m_list);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CReadTextDlg, CDialog)
	//{{AFX_MSG_MAP(CReadTextDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnButtonReadText)
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDCANCEL, &CReadTextDlg::OnBnClickedCancel)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CReadTextDlg message handlers

BOOL CReadTextDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here

	/*m_list.SetExtendedStyle(m_list.GetExtendedStyle() | LVS_EX_GRIDLINES | LVS_EX_FULLROWSELECT );
	m_list.InsertColumn(0, "COL1");
	m_list.InsertColumn(1, "COL2");
	m_list.InsertColumn(2, "COL3");
	m_list.InsertColumn(3, "COL4");
	m_list.InsertColumn(4, "COL5");
	m_list.InsertColumn(5, "COL6");
	m_list.InsertColumn(6, "COL7");
	m_list.InsertColumn(7, "COL8");
	m_list.InsertColumn(8, "COL9");
	m_list.InsertColumn(9, "COL10");
	m_list.InsertColumn(10, "COL11");
	m_list.InsertColumn(11, "COL12");
	m_list.InsertColumn(12, "COL13");
	m_list.InsertColumn(13, "COL14");
	m_list.InsertColumn(14, "COL15");

	m_list.SetColumnWidth(0, 70);
	m_list.SetColumnWidth(1, 70);
	m_list.SetColumnWidth(2, 70);
	m_list.SetColumnWidth(3, 70);
	m_list.SetColumnWidth(4, 70);
	m_list.SetColumnWidth(5, 70);
	m_list.SetColumnWidth(6, 70);
	m_list.SetColumnWidth(7, 70);
	m_list.SetColumnWidth(8, 70);
	m_list.SetColumnWidth(9, 70);
	m_list.SetColumnWidth(10, 70);
	m_list.SetColumnWidth(11, 70);
	m_list.SetColumnWidth(12, 70);
	m_list.SetColumnWidth(13, 70);
	m_list.SetColumnWidth(14, 70);*/


    Flag = 0;
	
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CReadTextDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CReadTextDlg::OnPaint() 
{
	

	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CReadTextDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

/*void CReadTextDlg::OnButtonReadText() 
{
	// TODO: Add your control notification handler code here
		CFileDialog *lpszOpenFile;    //定义一个CfileDialog对象

	CStdioFile file;
	CString filePathName;
	int row;
	CString result;


	//生成一个对话框
	lpszOpenFile = new CFileDialog
		(TRUE,"","",OFN_FILEMUSTEXIST |OFN_HIDEREADONLY , "文件类型(*.txt)|*.txt|所有文件(*.*)|*.*|");
	
	if(lpszOpenFile->DoModal() == IDOK )//假如点击对话框确定按钮
	{
		filePathName = lpszOpenFile->GetPathName();//得到打开文件的路径
		SetWindowText(filePathName);//在窗口标题上显示路径
	}

	if(filePathName == "")  return;   

	if(!file.Open(filePathName,CFile::modeRead))  
	{
		MessageBox("can not open file!");
		return;
	}


	 CString strLine,strTemp;
	row = 0;
	while(file.ReadString(strLine))
	{
		char *str = strLine.GetBufferSetLength(strLine.GetLength());
		char *p;

		if(strLine!="")
		{
			for (p=strtok(str,";");p!=NULL;p=strtok(NULL,";"))
			{
				strTemp = p;
				result+=strTemp;

			}
			row ++;
		}
	}
	
	
	delete lpszOpenFile;//释放分配的对话框


	m_strText = _T(result);
    UpdateData(false); 
	
}*/

void CReadTextDlg::OnButtonReadText() 
{ 

	if(Flag != 0)//如果不是第一次点击“打开”
	{
		m_list.DeleteAllItems(); //则清空所有行
		//while(m_list.GetColumnWidthGetColumn(i
		//m_list.GetColumn(
		int a = 0;
		while(m_list.GetColumnWidth(a) == 70) //设置每列宽度为70
		{
			a++;
		}
		for(int k =0; k < a; k++)
		{
			m_list.DeleteColumn(0); //删除所有列
		}
	}
    Flag = 1;//第二次点击“打开”
	CFileDialog *lpszOpenFile;    //定义一个CfileDialog对象

	CStdioFile file;
	CString filePathName;
	//int row;
	CString result;


	//生成一个对话框
	lpszOpenFile = new CFileDialog
		(TRUE,"","",OFN_FILEMUSTEXIST |OFN_HIDEREADONLY , "文件类型(*.csv)|*.csv|所有文件(*.*)|*.*|");
	
	if(lpszOpenFile->DoModal() == IDOK )//假如点击对话框“打开”按钮
	{
		filePathName = lpszOpenFile->GetPathName();//得到打开文件的路径
		SetWindowText(filePathName);//在窗口标题上显示路径
	}

	if(filePathName == "")  return;   

	if(!file.Open(filePathName,CFile::modeRead))  
	{
		MessageBox("can not open file!");
		return;
	}


/*	 CString strLine,strTemp;
	row = 0;
	while(file.ReadString(strLine))
	{
		char *str = strLine.GetBufferSetLength(strLine.GetLength());
		char *p;

		if(strLine!="")
		{
			for (p=strtok(str,";");p!=NULL;p=strtok(NULL,";"))
			{
				strTemp = p;
				result+=strTemp;

			}
			row ++;
		}
	}
	
	
	delete lpszOpenFile;//释放分配的对话框


	//m_list.GetCurrentMessage();
    UpdateData(false); */

	//CStdioFile file;
	//file.Open(_T("./aaa.csv"),CFile::modeRead);
	CString str;
    m_list.SetExtendedStyle(m_list.GetExtendedStyle()
		| LVS_EX_GRIDLINES | LVS_EX_FULLROWSELECT | LVS_EX_HEADERDRAGDROP | LVS_EX_TWOCLICKACTIVATE);  //设置列表格式
	CString strmp,stemp;
	//for(in)
	file.ReadString(str);//将读取的一行数据放到str中
	strmp = str;
	int temp = 0;
	int j = 0;


	//根据逗号按行读取，读取第一行
	while(temp != -1)      
	{
		temp = str.Find(_T(","));//当找不到逗号时，temp=-1，跳出循环   
		str=str.Right(str.GetLength()-temp-1);
        j++; //求出列数
	}
     
	for (int i = 0; i < j ;i++)  //建列
	{
		stemp.Format(_T("%s%d"),"COL",i);  //将列数显示出来
		m_list.InsertColumn(i,stemp,LVCFMT_CENTER,70,i);
	}

    m_list.InsertItem(0,"");    //第一行 
	int count =0;
	int index = strmp.Find(_T(","));
	while (index != -1)
    {
		m_list.SetItemText(0,count++,strmp.Left(index));
          //substr[count++] = str.Left(index);
        strmp=strmp.Right(strmp.GetLength()-index-1);
        index = strmp.Find(_T(","));
    }
     m_list.SetItemText(0,count,strmp);
	//m_list.InsertColumn(0, "Col1", LVCFMT_CENTER, 50, 0);//插入列
    j = 1;
    while(file.ReadString(str))          //逐行读
    {
      //str = str.Trim(_T(" "));
     // CString substr[10];
	  
      count=0;
	  m_list.InsertItem(j,"");
      index = str.Find(_T(","));  //查找这个字符串第一个“，”出现的位置
      while (index != -1)
      {
		  m_list.SetItemText(j,count++,str.Left(index));
          //substr[count++] = str.Left(index);
          str=str.Right(str.GetLength()-index-1);
          index = str.Find(_T(","));
      }
      m_list.SetItemText(j,count,str);

      j++;
	}
   

   file.Close();
}


void CReadTextDlg::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	OnCancel();
}
