#pragma once



// CCgSelectControl ������ͼ

class CCgSelectControl : public CFormView
{
	DECLARE_DYNCREATE(CCgSelectControl)

protected:
	CCgSelectControl();           // ��̬������ʹ�õ��ܱ����Ĺ��캯��
	virtual ~CCgSelectControl();

public:
	enum { IDD = IDD_SELECTCONTROL };
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClickedFillpoint();
	afx_msg void OnClickedScanline();
	afx_msg void OnClickedSeedfill();
	afx_msg void OnBnClickedTripoly();
	afx_msg void OnBnClickedComparison();
};

