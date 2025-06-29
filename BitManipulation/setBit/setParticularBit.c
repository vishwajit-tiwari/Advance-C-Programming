/**
 * @file setParticularBit.c
 * @author Vishwajit Kumar Tiwari
 * @brief Implementation of a function to set a particular bit in an unsigned integer.
 * * @version 0.1
 * @date 2023-10-01
 */

#include "setParticularBit.h"

unsigned int setParticularBit(unsigned int number, unsigned int bitPosition)
{
    // Check if the bit position is valid
    if (bitPosition >= sizeof(unsigned int) * 8) {
        fprintf(stderr, "Error: Bit position out of range.\n");
        exit(EXIT_FAILURE);
    }
    
    // Set the bit at the specified position to 1
    return number | (1U << bitPosition);

}

int main() {
    unsigned int number = 5; // Binary: 0000 0101
    unsigned int bitPosition = 1; // Set the second bit (0-indexed)
    
    unsigned int result = setParticularBit(number, bitPosition);
    
    printf("Original number: %u %b\n", number, number);
    printf("Modified number: %u %b\n", result, result); // Should print 7 (Binary: 0000 0111)
    
    return 0;
}