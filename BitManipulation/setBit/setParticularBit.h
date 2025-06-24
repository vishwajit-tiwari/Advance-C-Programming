/**
 *  @file setParticularBit.h
 *  @author Vishwajit Kumar Tiwari
 */

#ifndef SET_PARTICULAR_BIT_H
#define SET_PARTICULAR_BIT_H

#include <stdio.h>
#include <stdlib.h>

/**
 *  @brief Sets a particular bit in an unsigned integer.
 *  
 *  This function sets the bit at the specified position to 1.
 *  
 *  @param number The original unsigned integer.
 *  @param bitPosition The position of the bit to set (0-indexed).
 *  @return The modified unsigned integer with the specified bit set.
 */
unsigned int setParticularBit(unsigned int number, unsigned int bitPosition);

#endif // SET_PARTICULAR_BIT_H

