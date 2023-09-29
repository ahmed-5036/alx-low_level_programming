#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/* Task 0: Binary to Unsigned Int */
unsigned int binary_to_uint(const char *b);

/* Task 1: Print Binary Representation */
void print_binary(unsigned long int n);

/* Task 2: Get Bit at Index */
int get_bit(unsigned long int n, unsigned int index);

/* Task 3: Set Bit at Index */
int set_bit(unsigned long int *n, unsigned int index);

/* Task 4: Clear Bit at Index */
int clear_bit(unsigned long int *n, unsigned int index);

/* Task 5: Count Flipped Bits */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* Task 6: Endianness */
int get_endianness(void);
int _putchar(char c);
#endif /* MAIN_H */

