#include "holberton.h"

/**
 * _islower - Checks if character is lowercase
 *
 * @c: Character in ASCII
 *
 * Return: 1 if c is lowercase, Otherwise 0
 */

int _isupper(int c)
{
    if(c >= 'A' && c <= 'Z' )
    return (1);
    return (0);
}
