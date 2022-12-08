#pragma once

// This is a version of WaveFile from the AudioFile library, but with XAudio2 support added.
// WINDOWS ONLY.

#include "wavefile.h"
#include <xaudio2.h>

class XWaveFile : public WaveFile
{
public:
	XWaveFile();
	~XWaveFile();
	WAVEFORMATEX* GetWaveFormatEx();
	XAUDIO2_BUFFER* GetXAudio2Buffer();
	bool ReplaceBuffer();
	static XWaveFile* Load(const char* filename, bool allowNull);
	static XWaveFile* Load(const wchar_t* filename, bool allowNull);
private:
	XAUDIO2_BUFFER* _xbuffer;
	// Called when replacing an existing sample.
};