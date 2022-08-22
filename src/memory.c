#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <type.h>
#include <memory.h>
#include <processor.h>


void memory_initialize()
{
    for (size_t i = 0; i < MAX_MEM; i++)
    {
        mem->Data[i] = 0xEA;
    }
    return 0;
}

Byte memory_Fetch(int *cycles)
{
    *cycles = *cycles - 1;
    return mem->Data[cpu->PC];
}