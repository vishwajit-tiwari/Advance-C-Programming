/**
 * @file clearParticularBit.c
 * @author Vishwajit Kumar Tiwari
 */

#include "clearParticularBit.h"

unsigned int clarParticularBit(unsigned int number, unsigned int bitPosition)
{
    if(bitPosition >= sizeof(unsigned int) * 8)
    {
        fprintf(stderr, "Error: Bit position out of range.\n");
        exit(EXIT_FAILURE);
    }
    number = number & ~(1<<bitPosition);
    return number;
}

int main()
{
    unsigned int number, bitPosition, result;

    printf("Enter a number: ");
    scanf("%u", &number);
    printf("Enter the bit position to clear (0-indexed): ");
    scanf("%u", &bitPosition);

    result = clarParticularBit(number, bitPosition);

    printf("Original number: %u: %b\n", number, number);
    printf("Number after clearing bit %u: %b\n", result, result);

    return 0;
}

