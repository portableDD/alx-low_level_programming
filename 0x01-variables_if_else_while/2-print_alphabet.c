#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet using ascii values.
 *
 * Return: Always 0
 */


int main(void)
{
   int ch;

   for(ch = 'a' ; ch <= 'z' ; ch++)
      putchar(ch);
   putchar('\n');

   return(0);

}