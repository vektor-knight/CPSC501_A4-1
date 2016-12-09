#ifndef WAV
#define WAV

using namespace std;

class WAV
{
	public:
		// Canonical WAVE file format
		// Reference: https://i.stack.imgur.com/ITplE.gif

		// Segment 1:  "RIFF" chunk descriptor 
		char *chunkID;
		int chunkSize;
		char *format;
		// Segment 2: "fmt" sub-chunk
		char *subChunk1ID;
		int sucChunk1Size;
		int16_t audioFormat;
		int16_t numChannels;
		int sampleRate;
		int byteRate;
		int16_t blockAlign;
		int16_t bitsPerSample;
		// Segment 3: "data" sub-chunk
		char *subChunk2ID;
		int subChunk2Size;
		int dataSize;

		// Helper function prototypes: read/write
		// Reference: https://github.com/rsbarhey/CPSC501-A4/blob/master/V2.0/WaveFile.h
		float* readWAV(char *filename, float *signal, int *Thesize);
		void writeWAV(char* fileName, int numSamples, float *size);
};
