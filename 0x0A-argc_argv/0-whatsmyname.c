#include "holberton.h"

/**
 * _strcat - Concatenates two stings
 * @argc: Destination string
 * @argv: Description of Arrays
 * Return: Returns a pointer to the resulting string dest
 */

int main(int argc, char *argv[])
{
	int i;

    _putchar("%d\n",argc);
	for(i = 1; i < argc; i++)
    {
        _putchar("%s", argv[i]);
    }
	return 0;
}
