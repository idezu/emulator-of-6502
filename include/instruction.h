/*==============================================================================================================================================================*/
/*==============================================================================================================================================================*/
/*============================================================DEFINE THE OPTCODE FOR THE INSTRUCTION SET========================================================*/
/*==============================================================================================================================================================*/
/*==============================================================================================================================================================*/

// optcode for the instruction add memory with carry:
#define INS_ADC_IM 0x69                         // - in immediate mode
#define INS_ADC_ZP 0x65                         // - in zero page mode
#define INS_ADC_ZP_X 0x75                       // - in zero page, X mode
#define INS_ADC_ABS 0x6D                        // - in absolute mode
#define INS_ADC_ABS_X 0x7D                      // - in absolute, X mode
#define INS_ADC_IN_X 0x61                       // - in indirect, X mode
#define INS_ADC_IN_Y 0x71                       // - in indirect, Y mode

// optcode for the instruction AND memory with accumulator:
#define INS_AND_IM 0x29                         // - in immediate mode
#define INS_AND_ZP 0x25                         // - in zero page mode
#define INS_AND_ZP_X 0x35                       // - in zero page, X mode
#define INS_AND_ABS 0x2D                        // - in absolute mode
#define INS_AND_ABS_X 0x3D                      // - in absolute, X mode
#define INS_AND_ABS_Y 0x39                      // - in absolute, Y mode
#define INS_AND_IN_X 0x21                       // - in indirect, X mode
#define INS_AND_IN_Y 0x31                       // - in indirect, Y mode

// optcode for the instruction shift left one bit (memory or accumulator):
#define INS_ASL_AC 0x0A                         // - in accumulator mode
#define INS_ASL_ZP 0x06                         // - in zero page mode
#define INS_ASL_ZP_X 0x16                       // - in zero page, X mode
#define INS_ASL_ABS 0x0E                        // - in absolute mode
#define INS_ASL_ABS_X 0x1E                      // - in absolute, X mode


/*==============================================================================================================================================================*/
/*===========================================================TODO WRITE THE OPTCODE FROM HERE===================================================================*/
/*==============================================================================================================================================================*/


// optcode for the instruction branch on carry clear:
#define INS_BCC 0x90                            // - in relative mode

// optcode for the instruction branch on carry set:
#define INS_BCS 0xb0                            // - in relative mode

// optcode for the instruction branch on result zero:
#define INS_BEQ 0xf0                            // - in relative mode


// optcode for the instruction test bits in memory  with accumulator:
#define INS_BIT_ZP 0x24                         // - in zero page mode
#define INS_BIT_ABS 0x2c                        // - in absolute mode

// optcode for the instruction branch on result minus:
#define INS_BMI 0x30                            // - in relative mode

// optcode for the instruction branch on result not zero:
#define INS_BNE 0xd0                            // - in relative mode

// optcode for the instruction branch on result plus:
#define INS_BPL 0x10                            // - in relative mode

// optcode for the instruction branch force break:
#define INS_BRK 0x00                            // - in relative mode

// optcode for the instruction branch on overflow clear:
#define INS_BVC 0x50                            // - in relative mode

// optcode for the instruction branch on overflow set:
#define INS_BVS 0x70                            // - in relative mode

// optcode for the instruction clear carry flag:
#define INS_CLC 0x18                            // - in implied mode

// optcode for the instruction clear decimal mode:
#define INS_CLD 0xf8                           // - in implied mode

// optcode for the instruction clear interrupt disable bit:
#define INS_CLI 0x58                            // - in implied mode

// optcode for the instruction clear overflow flag:
#define INS_CLV 0xb8                            // - in implied mode

// optcode for the instruction compare memory with accumulator:
#define INS_CMP_IM 0xc9                         // - in immediate mode
#define INS_CMP_ZP 0xc5                         // - in zero page mode
#define INS_CMP_ZP_X 0xd5                       // - in zero page, X mode
#define INS_CMP_ABS 0xcd                        // - in absolute mode
#define INS_CMP_ABS_X 0xdd                      // - in absolute, X mode
#define INS_CMP_ABS_Y 0xd9                      // - in absolute, Y mode
#define INS_CMP_IN_X 0xc1                       // - in indirect, X mode
#define INS_CMP_IN_Y 0xd1                       // - in indirect, Y mode

// optcode for the instruction compare on memory index X:
#define INS_CPX_IM 0xE0                         // - in immadiate
#define INS_CPX_ZP 0xe4                         // - in zero page mode
#define INS_CPX_ABS 0xec                        // - in absolute mode

// optcode for the instruction compare on memory index Y:
#define INS_CPY_IM 0xc0                         // - in immadiate
#define INS_CPY_ZP 0xc4                         // - in zero page mode
#define INS_CPY_ABS 0xcc                        // - in absolute mode

// optcode for the instruction decrement memory by one:
#define INS_DEC_ZP 0xc6                         // - in zero page mode
#define INS_DEC_ZP_X 0xd6                       // - in zero page, X mode
#define INS_DEC_ABS 0xce                        // - in absolute mode
#define INS_DEC_ABS_X 0xdE                      // - in absolute, X mode

// optcode for the instruction decrement index X by one
#define INS_DEX 0xca                            // - in implied mode

// optcode for the instruction decrement index Y by one:
#define INS_DEY 0x88                            // - in implied mode

// optcode for the instruction exclusive-OR memory with accumulator:
#define INS_EOR_IM 0x49                         // - in immediate mode
#define INS_EOR_ZP 0x45                         // - in zero page mode
#define INS_EOR_ZP_X 0x55                       // - in zero page, X mode
#define INS_EOR_ABS 0x4d                        // - in absolute mode
#define INS_EOR_ABS_X 0x5d                      // - in absolute, X mode
#define INS_EOR_ABS_Y 0x59                      // - in absolute, Y mode
#define INS_EOR_IN_X 0x41                       // - in indirect, X mode
#define INS_EOR_IN_Y 0x51                       // - in indirect, Y mode

// optcode for the instruction increment memory by one:
#define INS_INC_ZP 0xe6                         // - in zero page mode
#define INS_INC_ZP_X 0xf6                       // - in zero page, X mode
#define INS_INC_ABS 0xee                        // - in absolute mode
#define INS_INC_ABS_X 0xfe                      // - in absolute, X mode

// optcode for the instruction increment index X by one:
#define INS_INX 0xe8                            // - in implied mode

// optcode for the instruction increment index Y by one:
#define INS_INY 0xc8                            // - in implied mode

// optcode for the instruction increment index X by one:
#define INS_JMP_ABS 0X4c                           // - in absolute mode
#define INS_JMP_IN 0x6c                            // - in indirect mode

// optcode for the instruction jump to new location saving return adress:
#define INS_JSR 0x20                            // - in absolute mode

// optcode for the instruction load accumulator with memory :
#define INS_LDA_IM 0xA9                         // - in immediate mode
#define INS_LDA_ZP 0xa5                         // - in zero page mode
#define INS_LDA_ZP_X 0xb5                       // - in zero page, X mode
#define INS_LDA_ABS 0xad                        // - in absolute mode
#define INS_LDA_ABS_X 0xbd                      // - in absolute, X mode
#define INS_LDA_ABS_Y 0xb9                      // - in absolute, Y mode
#define INS_LDA_IN_X 0xa1                       // - in indirect, X mode
#define INS_LDA_IN_Y 0xb1                       // - in indirect, Y mode

// optcode for the instruction load index X with memory:
#define INS_LDX_IM 0xa2                         // - in immediate mode
#define INS_LDX_ZP 0xa6                         // - in zero page mode
#define INS_LDX_ZP_Y 0xb6                       // - in zero page, Y mode
#define INS_LDX_ABS 0xae                        // - in absolute mode
#define INS_LDX_ABS_Y 0xba                      // - in absolute, Y mode

// optcode for the instruction load index Y with memory:
#define INS_LDY_IM 0xa0                         // - in immediate mode
#define INS_LDY_ZP 0xa6                         // - in zero page mode
#define INS_LDY_ZP_X 0xb6                       // - in zero page, X mode
#define INS_LDY_ABS 0xae                        // - in absolute mode
#define INS_LDY_ABS_X 0xbe                      // - in absolute, X mode

// optcode for the instruction shift one bit right memory or accumulator:
#define INS_LSR_AC 0x4a                         // - in accumulator mode
#define INS_LSR_ZP 0x46                         // - in zero page mode
#define INS_LSR_ZP_X 0x56                       // - in zero page, X mode
#define INS_LSR_ABS 0x4e                        // - in absolute mode
#define INS_LSR_ABS_X 0x5e                      // - in absolute, X mode

// optcode for the instruction no operation:
#define INS_NOP 0xea                            // - in implied mode

// optcode for the instruction OR memory with accumulator:
#define INS_ORA_IM 0x09                         // - in immediate mode
#define INS_ORA_ZP 0x05                         // - in zero page mode
#define INS_ORA_ZP_X 0x15                       // - in zero page, X mode
#define INS_ORA_ABS 0x0d                        // - in absolute mode
#define INS_ORA_ABS_X 0x1d                      // - in absolute, X mode
#define INS_ORA_ABS_Y 0x19                      // - in absolute, Y mode
#define INS_ORA_IN_X 0x01                       // - in indirect, X mode
#define INS_ORA_IN_Y 0x11                       // - in indirect, Y mode

// optcode for the instruction push accumulator on stack:
#define INS_PHA 0x48                            // - in implied mode

// optcode for the instruction push processor status on stack:
#define INS_PHP 0x08                            // - in implied mode

// optcode for the instruction pull accumulator from stack:
#define INS_PLA 0x68                            // - in implied mode

// optcode for the instruction pull processor status from stack:
#define INS_PLP 0x28                            // - in implied mode

// optcode for the instruction rotate one bit left memory or accumulator:
#define INS_ROL_AC 0x2a                         // - in accumulator mode
#define INS_ROL_ZP 0x26                         // - in zero page mode
#define INS_ROL_ZP_X 0x36                       // - in zero page, X mode
#define INS_ROL_ABS 0x2e                        // - in absolute mode
#define INS_ROL_ABS_X 0x3e                      // - in absolute, X mode

// optcode for the instruction rotate one bit right memory or accumulator:
#define INS_ROR_AC 0x6a                         // - in accumulator mode
#define INS_ROR_ZP 0x66                         // - in zero page mode
#define INS_ROR_ZP_X 0x79                       // - in zero page, X mode
#define INS_ROR_ABS 0x6e                        // - in absolute mode
#define INS_ROR_ABS_X 0x7e                      // - in absolute, X mode

// optcode for the instruction return from interrupt:
#define INS_RTI 0x40                            // - in implied mode

// optcode for the instruction return from subroutine:
#define INS_RTS 0x60                            // - in implied mode

// optcode for the instruction substract memory from accumulator with borrow:
#define INS_SBC_IM 0xe9                         // - in immediate mode
#define INS_SBC_ZP 0xe5                         // - in zero page mode
#define INS_SBC_ZP_X 0xf5                       // - in zero page, X mode
#define INS_SBC_ABS 0xed                        // - in absolute mode
#define INS_SBC_ABS_X 0xfd                      // - in absolute, X mode
#define INS_SBC_ABS_Y 0xf9                      // - in absolute, Y mode
#define INS_SBC_IN_X 0xe1                       // - in indirect, X mode
#define INS_SBC_IN_Y 0xf1                       // - in indirect, Y mode

// optcode for the instruction set carry flag:
#define INS_SEC 0x38                            // - in implied mode

// optcode for the instruction set Decimal flag:
#define INS_SED 0xf8                            // - in implied mode

// optcode for the instruction set interupt disable status:
#define INS_SEI 0x78                            // - in implied mode

// optcode for the instruction store accumulator in memory:
#define INS_STA_ZP 0x85                         // - in zero page mode
#define INS_STA_ZP_X 0x95                       // - in zero page, X mode
#define INS_STA_ABS 0x8d                        // - in absolute mode
#define INS_STA_ABS_X 0x9d                      // - in absolute, X mode
#define INS_STA_ABS_Y 0x99                      // - in absolute, Y mode
#define INS_STA_IN_X 0x81                       // - in indirect, X mode
#define INS_STA_IN_Y 0x91                       // - in indirect, Y mode

// optcode for the instruction store index X in memory:
#define INS_STX_ZP 0x86                         // - in zero page mode
#define INS_STX_ZP_Y 0x96                       // - in zero page, Y mode
#define INS_STX_ABS 0x8e                        // - in absolute mode

// optcode for the instruction store index Y in memory:
#define INS_STY_ZP 0x84                         // - in zero page mode
#define INS_STY_ZP_X 0x94                       // - in zero page, X mode
#define INS_STY_ABS 0x8c                        // - in absolute mode

// optcode for the instruction transfer accumulator to index X:
#define INS_TAX 0xaa                            // - in implied mode

// optcode for the instruction transfer accumulator to index Y:
#define INS_TAY 0xa8                            // - in implied mode

// optcode for the instruction transfer index X to accumulator:
#define INS_TXA 0x8a                            // - in implied mode

// optcode for the instruction transfer index X to stack register:
#define INS_TXS 0x9a                            // - in implied mode

// optcode for the instruction transfer index Y to stack register:
#define INS_TYA 0x98                            // - in implied mode