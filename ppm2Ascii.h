#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <dirent.h>

struct pixel
{
    unsigned char R, G, B;
};

struct image
{
    size_t height, width;
    struct pixel *pixelData;
};

// IO FUNCTIONS
void readImage(const char *fileName, struct image *imageBuffer);

void writeImage(const char *fileName, struct image *Image);

// IMAGE MANIP
void convertGrayscale(struct image *Image);

void imageScaleDown(struct image *Image);

void outputToTerminal(struct image *Image);

void ppm2AsciiWrapper(char *fileName);

void video2Ascii(char *fileName);

int getFrameCount();