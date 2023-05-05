#include "main.h"

/**
 * flip_bits - all bits
 * @m: numger
 * @n: number
 * Return: changed bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
  unsigned long int diff = n ^ m;  
  
  unsigned int count = 0;
  while (diff > 0)
  {
    if ((diff & 1) == 1)  
        
    {
      count++;
    }
    diff >>= 1;  
    
  }
  return count;
}
