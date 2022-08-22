#pragma once

typedef unsigned char Byte;
typedef unsigned short Word;



#define ROM_SIZE 1024 * 1024 * 8 // 8 MB


typedef struct ROM
{
    Byte Data[ROM_SIZE];
} ROM;



struct color
{
    int r;
    int g;
    int b;
};

#define WIDTH 320
#define HEIGHT 240
#define SRAM_SIZE WIDTH*HEIGHT*18 // from the data sheet sram = 320 x 240 x 18

struct SRAM
{
    int Data[SRAM_SIZE];   
};


typedef struct SCREEN
{
    int width;
    int height;
    struct color pixels[WIDTH][HEIGHT];
    struct SRAM SRAM; // from documentation the lcd controller control his own sram
} SCREEN;