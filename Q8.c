/* to print

       A B C D C B A
         A B C B A
           A B A
             A


       */
#include <stdio.h>

int main() {
    char ch = 'A'; 
    int i, j, k,l;

    
    for (i = 0; i < 4; i++) {
      
        for (j = 0; j < i; j++) {
            printf("  ");
        }
        
        for (k = 0; k < 4 - i; k++) {
            printf("%c ", ch + k);
        }
       //reverse loop for decending order of char
        for (l= 2-i; l >= 0; l--) {
            printf("%c ", ch + l);
        }
        
        printf("\n");
    }

    return 0;
}
