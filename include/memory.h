#pragma once


#define MAX_MEM 1024 * 256 // 256 KB

typedef struct Mem          //memory structure representation
{
    Byte Data[MAX_MEM];
    Byte (*fetch)(int *, Byte,*Mem);
    void (*initialize)(*Mem);
} Mem;




//====================================================================================================//





Byte memory_Fetch(int *cycles,Byte program_counter,Mem *mem);
void memory_initialize(Mem *mem);