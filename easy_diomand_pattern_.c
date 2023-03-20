#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int spaces = n - 1;
    int stars = 1;

    for (int i = 1; i < n*2; i++)
    {
        // Print spaces before the asterisks
        for (int j = 1; j <= spaces; j++)
        {
            printf(" ");
        }

        // Print the asterisks
        for (int j = 1; j <= stars; j++)
        {
            printf("* ");
        }

        printf("\n");

        // Update spaces and stars for next iteration
        if (i < n)
        {
            spaces--;
            stars++;
        }
        else
        {
            spaces++;
            stars--;
        }
    }

    return 0;
}


//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 


// With using user input
// #include<stdio.h>
// int main(){
//     int i,j,rows,stars=1;
//     printf("Enter your number:");
//     scanf("%d",&rows);
//     int space=rows;
    
//   for(i=1; i<=rows*2; i++)
//   {
//       for(j=1; j<=space; j++)
//       {
//           printf(" ");
//       }
//       for(j=1; j<=stars; j++)
//       {
//           printf("* ");
//       }
//       printf("\n");
//       if(i<rows){
       
//         space--;
//         stars++;
//       }
//       else{
//         space++;
//         stars--;
//       }
//   }
//   return 0;
// }


// Enter your number:5
//      * 
//     * * 
//    * * * 
//   * * * * 
//  * * * * * 
//   * * * * 
//    * * * 
//     * * 
//      * 
      
