
// UDPPushDlg.h : header file
//

#pragma once
#include "afxwin.h"

// CUDPPushDlg dialog
class CUDPPushDlg : public CDialog
{
// Construction
public:
	CUDPPushDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_UDPPUSH_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnDestroy();
	afx_msg void OnBnClickedBtnPush();
	afx_msg void OnBnClickedBtnStop();
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedBtnCon();

public:
	// �򿪹ر��߳�
	void StartWorkThread();
	void StartExitThread();
	// �̺߳���
	DWORD static WINAPI WorkThread(LPVOID lpParam);
	DWORD static WINAPI ExitThread(LPVOID lpParam);

	// ��ȡ�б�
	void GetUdpPushList();
	DWORD static WINAPI GetUdpThread(LPVOID lpParam);
	// ����̨
	void InitConsoleWindow();
	void DestroyConsoleWindow();

public:
	// �߳̾��
	BOOL m_bWork;
	BOOL m_bThread;
	// ���ɵ���ID
	WCHAR m_szID[128];
	// �ؼ�
	CComboBox m_ComIp;
	CEdit m_edPort;
	CEdit m_sStreamId;
	CStatic m_sLocal;
	CStatic m_sRemote;
	CStatic m_sTip;

	int m_nStreamCan;
	CButton *m_pCheck1;
	CButton *m_pCheck2;

	// ����̨���
	FILE *m_pConsole;
	// ������������ַ
	std::vector<CStringA> m_vtPushList;
	std::vector<CStringA> m_vtPushShowList;
};
