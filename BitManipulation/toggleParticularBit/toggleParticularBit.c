/**
 * @file toggleParticularBit.c
 * @author Vishwajit Kumar Tiwari
 * @brief  Source file for toggling a particular bit in an unsigned integer.
 * @version 0.1
 * @date 2023-10-01
 */

#include "toggleParticularBit.h"

unsigned int toggleParticularBit(unsigned int number, unsigned int bitPosition)
{
    if(bitPosition >= sizeof(unsigned int) * 8)
    {
        fprintf(stderr, "Error: Bit position out of range.\n");
        exit(EXIT_FAILURE);
    }

    number = number ^ (1<<bitPosition);

    return number;
}

int main()
{
    unsigned int number, bitPosition, result;

    printf("Enter a number: ");
    scanf("%u", &number);
    printf("Enter the bit position to toggle (0-indexed): ");
    scanf("%u", &bitPosition);

    result = toggleParticularBit(number, bitPosition);

    printf("Original number: %u: %b\n", number, number);
    printf("Number after toggling bit %u: %b\n", bitPosition, result);

    return 0;
}