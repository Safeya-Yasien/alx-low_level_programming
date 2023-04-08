#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int index = n ^ m;
    unsigned int num_bits_flipped = 0;
    
    while (index != 0)
    {
        if ((index & 1) == 1)
        {
            num_bits_flipped++;
        }
        
        index >>= 1;
    }
    
    return num_bits_flipped;
}
