#include <stdio.h>
// #include <stdlib.h>
// #include <time.h>


void main(){
    int ch;
    /* print uppercase letters */
    for (ch= ‘A’; ch<= ‘Z’; ch++){
         putchar(ch);
    }
   
    /* print lowercase letters */
    for (ch= ‘a’; ch<= ‘z’; ch++)
    {
        putchar(ch);
        putchar (‘\n’ ) ;
    }
    
    getch();
}

