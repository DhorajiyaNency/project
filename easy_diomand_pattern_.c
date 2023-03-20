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
