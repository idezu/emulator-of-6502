#pragma once
    
#define MAX_MEM 1024 * 256 // 256 KB

typedef struct Mem          //memory structure representation
{
    Byte Data[MAX_MEM];
    Byte (*fetch)(int *);
    void (*initialize)(void);
} Mem;

Mem *mem;


//====================================================================================================//





Byte memory_Fetch(int *cycles);
void memory_initialize();