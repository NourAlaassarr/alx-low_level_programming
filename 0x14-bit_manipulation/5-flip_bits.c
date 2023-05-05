#include "main.h"

/**
 * flip_bits - all bits
 * @m: numger
 * @n: number
 * Return: changed bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
  unsigned long int d = n ^ m;  
  
  unsigned int count = 0;
  while (d > 0)
  {
    if ((d & 1) == 1)  

    {
      count++;
    }
    d >>= 1; 
    
  }
  return count;
}
