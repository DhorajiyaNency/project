/*
#include <stdio.h>

int main()
{
    char ch = 'A';
    int num = 1;

    // Loop through each row
    for (int i = 1; i <= 5; i++)
    {

        // Loop through each column in the current row
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%c ", ch);
                ch++;
            }
            else if (i % 2 == 1)
            {
                printf("%d ", num);
                num++;
            }
            else
            {
                printf("%c ", ch);
                ch++;
            }
        }

        // Move to the next row
        printf("\n");
    }

    return 0;
}

*/

// 1
// A B
// 2 3 4
// C D E F
// 5 6 7 8 9

#include <stdio.h>

int main()
{
    char ch = 'A';
    int num = 1;

    // Loop through each row
    for (int i = 1; i <= 6; i++)
    {

        // Loop through each column in the current row
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%c ", ch);
                ch++;
            }
            else
            {
                printf("%d ", num);
                num++;
                
            }
        }

        // Move to the next row
        printf("\n");
    }

    return 0;
}

// A
// 1 2
// B C D
// E F G H
// 3 4 5 6 7
// I J K L M N


//  Using User Input
// #include<stdio.h>
// void main(){
//     int rows, num=1;
//     char ch='A';
//     printf("Enter your number of Row:");
//     scanf("%d",&rows);
    
//     for(int i=1; i<=rows; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//             if(i%2==0){
//                 // printf("%d",num);
//                 // num++;
//                  printf("%c",ch);
//                 ch++;
//             }
//             else{
//                 // printf("%c",ch);
//                 // ch++;
//                 printf("%d",num);
//                 num++;
//             }
//         }
//         printf("\n");
//     }
// }
//


// Enter your number of Row:5
// 1
// AB
// 234
// CDEF
// 56789


