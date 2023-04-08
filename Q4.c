     /* to print
       1      1
       12    21
       123  321
       12344321
       */
#include <stdio.h>
int main()
{
    int n=1,i,j,k,l;

    for(i=0;i<4;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf("%d",n+j);
             
        }
            for(k=0;k<3-i;k++)
        {
            printf(" ");
        }
         for(k=0;k<3-i;k++)
        {
            printf(" ");
        }
         for(l=i+1;l>0;l--)
        {
            printf("%d",n+l-1);   
        }

        
        
        printf("\n");
    }
return 0;
}


