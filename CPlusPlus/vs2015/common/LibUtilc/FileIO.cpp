#include "stdafx.h"
#include "FileIO.h"

namespace plusFCL_BTL
{
	CFileIO::CFileIO() :
	fileHandle_(nullptr)
	{
	}

	CFileIO::~CFileIO()
	{
		fileHandle_ = nullptr;
	}
}