/*-----------------------------------------------
 Submitted By: Dillon Mead, Benjamin Ranew, Michael Hall
 Homework Number: Project 1
 Credit to: N/A
 

 Submitted On: 11 November 2021

 By submitting this program with my name,
 I affirm that the creation and modification
 of this program is primarily my own work.
------------------------------------------------*/
#include <stdint.h>
#define HALT_OPCODE 0x19

/**
 * Registers simulated as global variables
 */

// 16 bit Program Counter. Address of next instruction
uint16_t pc = 0;

// 8 bit Instruction Register. Contains current instruction
uint8_t ir = 0;

// 16 bit Memory Address Register. Holds pointer to address in memory.
uint16_t mar = 0;

// 8 bit Accumulator. Used to operate on data.
uint8_t acc = 0;

// memory array
unsigned char memory[65536];


/**
 * @param No input.
 * @return No returns.
 * Uses program counter as index of memory array. Stores instruction from memory into instruction register.
 * Increases program counter to point at the next instruction.
 */
void fetchNextInstruction(void){

}

/**
 * @param No input.
 * @return No returns.
 * Examines ir and determines execution opertion. Performs operation on registers and memory.
 */
void executeInstruction(void){

}

int main(int argc, char* argv[]){
    // Execution loop. Continue fetching and executing until program counter
    // points to a HALT instruction.
    while(memory[pc] != HALT_OPCODE){
        fetchNextInstruction();
        executeInstruction();
    }
    return 0;
}