#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include <type.h>
#include <processor.h>
#include <memory.h>

int Reset()
{
    cpu->reset;
    mem->initialize;
}

int Loop()
{
    while (1)    
    {
        cpu->PC++;
        for (size_t i = 0; i < SPEED; i+=2)
        {
            Byte instruction = mem->fetch(1);
            cpu->exec_ins(instruction,1);
            
            //delay(); // to sync with the video // TODO || no video for now
        }
        
        
    }
    return 0;
}
//execute an instruction and 
void Execute_Instruction(Byte instruction, int execc)
{
    Byte value = mem->fetch(1);


    switch (instruction)
    {
        
        default:
            printf("\n==================================================================\n|error|\tInstruction not handled %d and it's value %d\t|error|\n==================================================================\n",instruction,mem->fetch);
            
            break;
    }

    cpu->PC++;
}

int main(int argc, char ** argv)
{
    cpu->reset = cpu_Reset;
    cpu->exec_ins = Execute_Instruction;
    mem->initialize = memory_initialize;
    mem->fetch = memory_Fetch;

    Reset();   
    // start - lda instruction
    mem->Data[RESET_VECT] = INS_LDA_IM;
    mem->Data[RESET_VECT+1] = 0x42;
    // end - lda instruction
    Loop();
    return 0;
}