#pragma once

#include <instruction.h>
#include <type.h>


void delay(int number_of_seconds);
void cpu_Reset(void);


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
    void (*reset)(void);
    void (*exec_ins)(Byte, int);
    
}CPU;

CPU *cpu;

//========================================================================================================//
//helpfull macro's

//reset vector
#define RESET_VECT 0xFFFC
#define SPEED 216000000 //216 MHz

int cpu_Loop(int cycles, CPU *cpuP, Mem *memoryP);
