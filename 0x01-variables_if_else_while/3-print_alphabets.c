#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int ch;
    for (ch = 'A'; ch <= 'Z'; ch++){
         putchar(ch);
    }
   
    for (ch= 'a'; ch<= 'z'; ch++)
    {
        putchar(ch);
        putchar (‘\n’ ) ;
    }
    
    getch();
}

