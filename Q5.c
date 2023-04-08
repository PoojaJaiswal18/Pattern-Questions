 /* to print

       * * * * *
       * *   * *
       *   *   *
       * *   * *
       * * * * *


       */
#include<stdio.h>
int main()
{
    int  n,i,j,k;
    printf("Enter the length of side sq:");
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||j==1||i==n||j==n || i==j|| j==((n-i)+1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}