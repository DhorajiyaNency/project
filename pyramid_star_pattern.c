#include<stdio.h>
void main(){
    int i,j,k,rows;
    
    printf("Enter your number of Row:");
    scanf("%d",&rows);
    
    int space=rows;
    
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=space; j++)
        {
            printf(" ");
        }
        for(k=1; k<=i; k++)
        {
            printf(" *");
        }
        printf("\n");
        space--;
    }
}


// Enter your number of Row:5
//       *
//      * *
//     * * *
//    * * * *
//   * * * * *



// #include<stdio.h>
// void main(){
//     int i,j,k,rows;
    
//     printf("Enter your number of Row:");
//     scanf("%d",&rows);
    
//     int space=rows;
    
//     for(i=rows; i>=1; i--)
//     {
//         for(j=1; j<=space; j++)
//         {
//             printf(" ");
//         }
//         for(k=1; k<=i; k++)
//         {
//             printf(" *");
//         }
//         printf("\n");
//         space++;
//     }
// }
// Enter your number of Row:5
//       * * * * *
//        * * * *
//         * * *
//          * *
//           *
