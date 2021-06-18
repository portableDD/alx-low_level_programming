#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* betty style doc for function main goes there */
int main(void)
{
    int ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(ch);
    }
    for (ch = 'A'; ch <= 'Z'; ch++)
    {
         putchar(ch);
    }
    putchar ('\n');

    return(0);
}

