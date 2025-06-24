/**
 * @file toggleParticularBit.h
 * @author Vishwajit Kumar Tiwari
 * @brief Header file for toggling a particular bit in an unsigned integer.
 * @version 0.1
 * @date 2023-10-01
 */

#ifndef TOGGLE_PARTICULAR_BIT_H
#define TOGGLE_PARTICULAR_BIT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Toggles a particular bit in an unsigned integer.
 * 
 * @param number The original number.
 * @param bitPosition The position of the bit to toggle (0-indexed).
 * @return The number after toggling the specified bit.
 */
unsigned int toggleParticularBit(unsigned int number, unsigned int bitPosition);

#endif // TOGGLE_PARTICULAR_BIT_H
