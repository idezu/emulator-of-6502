#pragma once

#include <stdbool.h>





struct PS{                  //processor status
    bool C;                 //carry flag
    bool Z;                 //zero flag
    bool I;                 //interrupt disable
    bool D;                 //decimal mode
    bool B;                 //break command
    bool V;                 //overflow flag
    bool N;                 //negative flag
} ;

typedef struct CPU          //cpu structure representation
{
    Word PC;                //program counter
    Byte SP;                //stack pointer

    Byte A, X, Y;           //registers
    
    struct PS PS;
    void (*reset)(CPU*);
    void (*exec_ins)(Byte, int);
    
}CPU;


//========================================================================================================//
//helpfull macro's

//reset vector
#define RESET_VECT 0xFFFC
#define SPEED 216000000 //216 MHz

void cpu_Reset(CPU *cpu);