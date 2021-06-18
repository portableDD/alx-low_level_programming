#include <stdio.h>



void main(){
    int ch;
    for (ch= ‘A’; ch<= ‘Z’; ch++){
         putchar(ch);
    }
   
    for (ch= ‘a’; ch<= ‘z’; ch++)
    {
        putchar(ch);
        putchar (‘\n’ ) ;
    }
    
    getch();
}

