/* to print
        A
       B B
      C D C
     D E E D
  */

 #include<stdio.h>
 int main(){
    int i,j,k;
    char c='A';
       printf(" ");
    for (i = 0; i < 5; i++)
    {
        for ( j = 0; j < i; j++)
        {
            printf(" ");
        }
        for ( k = (69-i); k >64; k--)
        {
            printf("%c",c);
            c++;
        }

       
        

// //         printf("\n");
        
// //     }
// //     return 0;
// //  }
// #include <stdio.h>
// int main()
// {
//     int i, j, k, space;
//     char ch = 'A';

//     for (i = 1; i <= 4; i++)
//     {
//         ch = ch + i - 1;
//         space = 4 - i;
//         for (j = 1; j <= space; j++)
//         {
//             printf(" ");
//         }
//         for (k = 1; k <= 2*i-1; k++)
//         {
//             if (k <= i)
//             {
//                 printf("%c", ch);
//                 ch++;
//             }
//             else
//             {
//                 ch--;
//                 printf("%c", ch);
//             }
//         }
//         printf("\n");
//         ch = 'A';
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//  char ch='A';    
//     int i, j, k, m,cout;    
//     for(i=1;i<=5;i++)    
//     {    
//         for(j=5;j>=i;j--)    
//             cout<<" ";    
//         for(k=1;k<=i;k++)    
//             cout<<ch++;    
//             ch--;    
//         for(m=1;m<i;m++)    
//             cout<<--ch;    
//         cout<<"\n";    
//         ch='A';    
//     }    
//     return 0;
// }