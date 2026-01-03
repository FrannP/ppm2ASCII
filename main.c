#include "ppm2Ascii.h"

int main()
{

    // ppm2AsciiWrapper("OnePiece.ppm");
    video2Ascii("Dance.webm");
    return 0;
}

//TODO:
// - Add buffer instead of folder frame reading
// - Add ffmpeg format conversion from any format -> ppm