#if !defined(AFX_EDITEX_H__9B5C9C39_B497_4EBB_91BC_8D23F5BFEDBE__INCLUDED_)
#define AFX_EDITEX_H__9B5C9C39_B497_4EBB_91BC_8D23F5BFEDBE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// EditEx.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CEditEx window

class CEditEx : public CEdit
{
// Construction
public:
	CEditEx();

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEditEx)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CEditEx();
	void SetTextColor(COLORREF rgb);
	void SetBackColor(COLORREF rgb);
	// Generated message map functions
protected:
	//text and text background colors
	COLORREF m_crText;
	COLORREF m_crBackGnd;
	//background brush
	CBrush m_brBackGnd;
	//{{AFX_MSG(CEditEx)
	afx_msg HBRUSH CtlColor(CDC* pDC, UINT nCtlColor);
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EDITEX_H__9B5C9C39_B497_4EBB_91BC_8D23F5BFEDBE__INCLUDED_)
