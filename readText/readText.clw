; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CReadTextDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "readText.h"

ClassCount=3
Class1=CReadTextApp
Class2=CReadTextDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_READTEXT_DIALOG

[CLS:CReadTextApp]
Type=0
HeaderFile=readText.h
ImplementationFile=readText.cpp
Filter=N

[CLS:CReadTextDlg]
Type=0
HeaderFile=readTextDlg.h
ImplementationFile=readTextDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=IDC_EDIT1

[CLS:CAboutDlg]
Type=0
HeaderFile=readTextDlg.h
ImplementationFile=readTextDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_READTEXT_DIALOG]
Type=1
Class=CReadTextDlg
ControlCount=3
Control1=IDCANCEL,button,1342242816
Control2=IDC_BUTTON1,button,1342242816
Control3=IDC_EDIT1,edit,1352728580

