//#if !defined(AFX_SXBUTTON_H__073F3D5D_CE16_4F0A_8F27_E0F54FF43643__INCLUDED_)
//#define AFX_SXBUTTON_H__073F3D5D_CE16_4F0A_8F27_E0F54FF43643__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SXButton.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSXButton window
#ifndef _SXBUTTON_H
#define _SXBUTTON_H

#define    SXBUTTON_CENTER    -1

class CSXButton : public CButton
{
// Construction
public:
    CSXButton();

// Attributes
private:
    //    Positioning
    BOOL        m_bUseOffset;                 
    CPoint        m_pointImage;
    CPoint        m_pointText;
    int             m_nImageOffsetFromBorder;
    int             m_nTextOffsetFromImage;

    //    Image
    HICON        m_hIcon;                     
    HBITMAP        m_hBitmap;
    HBITMAP        m_hBitmapDisabled;
    int             m_nImageWidth, m_nImageHeight;

    //    Color Tab
    char        m_bColorTab;                 
    COLORREF    m_crColorTab;

    //    State
    BOOL        m_bDefault;
    UINT        m_nOldAction;
    UINT        m_nOldState;
    

// Operations
public:
    //    Positioning
    int        SetImageOffset( int nPixels ); 
    int        SetTextOffset( int nPixels );
    CPoint    SetImagePos( CPoint p );
    CPoint    SetTextPos( CPoint p );

    //    Image
    BOOL    SetIcon( UINT nID, int nWidth, int nHeight );
    BOOL    SetBitmap( UINT nID, int nWidth, int nHeight );
    BOOL    SetMaskedBitmap( UINT nID, int nWidth, int nHeight, COLORREF crTransparentMask );
    BOOL    HasImage();

    //    Color Tab
    void    SetColorTab(COLORREF crTab);

    //    State
    BOOL    SetDefaultButton( BOOL bState = TRUE );

private:
    BOOL    SetBitmapCommon( UINT nID, int nWidth, int nHeight, COLORREF crTransparentMask, BOOL bUseMask );
    void    CheckPointForCentering( CPoint &p, int nWidth, int nHeight );
    void    Redraw();

// Overrides
    // ClassWizard generated virtual function overrides
    //{{AFX_VIRTUAL(CSXButton)
    public:
    virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
    //}}AFX_VIRTUAL

// Implementation
public:
    virtual ~CSXButton();

    // Generated message map functions
protected:
    //{{AFX_MSG(CSXButton)
    afx_msg LRESULT OnGetText(WPARAM wParam, LPARAM lParam);
    //}}AFX_MSG

    DECLARE_MESSAGE_MAP()
};

 
/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif// !defined(AFX_SXBUTTON_H__073F3D5D_CE16_4F0A_8F27_E0F54FF43643__INCLUDED_)
