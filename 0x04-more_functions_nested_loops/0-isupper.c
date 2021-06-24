#include "holberton.h"

/**
 * _isupper - Checks for uppercase characters
 * @c: Character in ASCII
 *
 * Return: 1 if c is lowercase, Otherwise 0
 */

int _isupper(int c)
{
    if(c >= 'A' && c <= 'Z' ) 
    {
        return (1);
    }
   else 
   {
       return (0);
   }
}
