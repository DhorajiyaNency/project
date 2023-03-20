// Method: 1
// #include <stdio.h>
// int main()
// {
//     int i, j, k = 0, p, sp = 5;

//     // Outer loop to iterate over each row
//     for (i = 1; i <= 5; i++)
//     {
//         // Calculate the sum of numbers from 1 to i
//         k = k + i;
//         p = k;

//         // Inner loop to print spaces before the numbers
//         for (j = 1; j <= sp; j++)
//         {
//             printf(" "); // print a space character
//         }

//         // Inner loop to print the numbers in the row
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d ", p); // print the number followed by a space
//             p--;              // decrement the number to be printed in the next iteration
//         }

//         printf("\n"); // move to the next line
//         sp--;         // decrement the number of spaces to be printed in the next row
//     }

//     return 0;
// }

//      1 
//     3 2 
//    6 5 4 
//   10 9 8 7 


// Method: 2
#include <stdio.h>
int main(){
    int rows, i, j, count = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(i=1;i<=rows;i++){
        if(i%2 != 0){ // For odd rows
            for(j=1;j<=i;j++){
                printf("%d ", count++);
            }
        }
        else{ // For even rows
            count += i - 1;
            for(j=1;j<=i;j++){
                printf("%d ", count--);
            }
            count += i + 1;
        }
        printf("\n"); // Move to next line
    }
    return 0;
}
//      1 
//     3 2 
//    6 5 4 
//   10 9 8 7 

