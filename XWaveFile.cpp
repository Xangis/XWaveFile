// XWaveFile.cpp : Defines the functions for the static library.
//

#include "XWaveFile.h"

XWaveFile::XWaveFile() : WaveFile()
{
	_xbuffer = NULL;
}

XWaveFile::~XWaveFile()
{
	if( _xbuffer != NULL )
	{
		delete _xbuffer;
		_xbuffer = NULL;
	}
}

//static WaveFile* Load(const char* filename, bool allowNull);
//static WaveFile* Load(const wchar_t* filename, bool allowNull);