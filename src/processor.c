#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include <type.h>
#include <processor.h>

void cpu_Reset(CPU *cpu)
{
    cpu->PS.I = true;
    cpu->PC = RESET_VECT;
    cpu->SP = 0x00FF;
    
    cpu->PS.C = 
    cpu->PS.Z = 
    cpu->PS.D = 
    cpu->PS.B = 
    cpu->PS.V = 
    cpu->PS.N = false;
    
    cpu->A = cpu->X = cpu->Y = 0;
    
}

