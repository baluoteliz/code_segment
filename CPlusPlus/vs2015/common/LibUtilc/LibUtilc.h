// LibUtilc.h : LibUtilc DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CLibUtilcApp
// �йش���ʵ�ֵ���Ϣ������� LibUtilc.cpp
//

class CLibUtilcApp : public CWinApp
{
public:
	CLibUtilcApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
