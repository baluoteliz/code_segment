#ifndef __FILEIO_H__
#define __FILEIO_H__

/* @Detail File write & read
 * Xml read & write
 * Txt read & write
 * JSon read & write
 * InI read & write
*/

namespace plusFCL_BTL
{
	class EXPORTS_UTILC CFileIO
	{
	public:
		CFileIO();
		~CFileIO();

	private:
		void* fileHandle_;
	};
}

#endif
