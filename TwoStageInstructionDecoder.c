/*-----------------------------------------------
 Submitted By: Dillon Mead, Benjamin Ranew, Michael Hall
 Homework Number: Project 1
 Credit to: N/A
 

 Submitted On: 11 November 2021

 By submitting this program with my name,
 I affirm that the creation and modification
 of this program is primarily my own work.
------------------------------------------------*/

/**
 * Registers simulated as global variables
 */

// 16 bit Program Counter. Address of next instruction
int pc = 0;

// 8 bit Instruction Register. Contains current instruction
int ir = 0;

// 16 bit Memory Address Register. Holds pointer to address in memory.
int mar = 0;

// 8 bit Accumulator. Used to operate on data.
int acc = 0;

// memory array [65536]

/**
 * Uses program counter as index of memory array. Stores instruction from memory into instruction register.
 * Increases program counter to point at the next instruction.
 */
fetchNextInstruction(){

}

/**
 * Examines ir and determines execution opertion. Performs operation on registers and memory.
 */
executeInstruction(){

}