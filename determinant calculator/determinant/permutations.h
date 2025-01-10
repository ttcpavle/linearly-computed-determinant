#ifndef PERMUTATIONS_H
#define PERMUTATIONS_H

#define TWO_FACTORIAL 2
#define THREE_FACTORIAL 6
#define FOUR_FACTORIAL 24
#define FIVE_FACTORIAL 120
#define SIX_FACTORIAL 720
#define SEVEN_FACTORIAL 5040

#include <iostream>

extern const uint8_t p2[ 3 * TWO_FACTORIAL];
extern const uint8_t p3[ 4 * THREE_FACTORIAL];
extern const uint8_t p4[ 5 * FOUR_FACTORIAL];
extern const uint8_t p5[ 6 * FIVE_FACTORIAL];
extern const uint8_t p6[ 7 * SIX_FACTORIAL];
extern const uint8_t p7[ 8 * SEVEN_FACTORIAL];

#endif // PERMUTATIONS_H
