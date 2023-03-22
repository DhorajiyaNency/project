#include <stdio.h>
int main() {
    // declare variables
    int row, i, j, k;

    // take input
    printf("Enter the number of rows: ");
    scanf("%d", & row);

    // new line
    printf("\n");

    // display the pattern
    for (i = 1; i <= row; i++) {
        // print space
        for (j = 1; j <= row - i; j++) {
            printf("*");
        }
        // print *
        for (k = 1; k <= i; k++) {
            printf("-");
        }
        // new line
        printf("\n");
    }
    return 0;
}
// Enter the number of rows: 5

// ****-
// ***--
// **---
// *----
// -----


#include<stdio.h>
void main(){
    int rows;
    
    printf("Enter no. of rows:");
    scanf("%d",&rows);
    
    for(int i=1; i<=rows; i++)
    {
       for(int j=1; j<=rows; j++)
       {
        if(j<=i)
        {
            printf("-");
        }
        else{
            printf("*");
        }
       }
       printf("\n");
    }
}

// Enter no. of rows:5
// -****
// --***
// ---**
// ----*
// -----
