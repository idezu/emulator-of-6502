#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <type.h>
#include <memory.h>
#include <processor.h>


void memory_initialize(Mem *mem)
{
    for (size_t i = 0; i < MAX_MEM; i++)
    {
        mem->Data[i] = 0xEA;
    }
}

Byte memory_Fetch(int *cycles,Byte program_counter,Mem *mem)
{
    *cycles = *cycles - 1;
    return mem->Data[program_counter];
}