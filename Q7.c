/* to print
              A      A
              AB    BA
              ABC  CBA
              ABCDDCBA


       */
      
#include<stdio.h>
int main(){
int i,j,k;
char ch='A';


        for ( i = 0; i < 4; i++)
        {
            for ( j = 0; j < i+1; j++)
            {
                printf("%c",ch+j);
                
            }
            for ( j = 0; j < 3-i; j++)
            {
                printf(" ");
            
                
            }
            for ( j = 0; j < 3-i; j++)
            {
                printf(" ");
            
                
            }
            for ( k=i+1 ; k>0;k--)
            {
                printf("%c",ch+k-1);
                
            }
            



            printf("\n");
            
        }
        return 0;
        
      }