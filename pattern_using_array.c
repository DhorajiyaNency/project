#include <stdio.h>

int main() {
    int arr[10][10];
    int i, j;

    // Fill the array with numbers 1 to 8 in each row
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            arr[i][j] = (j % 10) + 1;
        }
    }

    // Print the array
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// output:
// 1 2 3 4 5 6 7 8 9 10 
// 1 2 3 4 5 6 7 8 9 10 
// 1 2 3 4 5 6 7 8 9 10 
// 1 2 3 4 5 6 7 8 9 10 
// 1 2 3 4 5 6 7 8 9 10 
// 1 2 3 4 5 6 7 8 9 10 
// 1 2 3 4 5 6 7 8 9 10 
// 1 2 3 4 5 6 7 8 9 10 
// 1 2 3 4 5 6 7 8 9 10 
// 1 2 3 4 5 6 7 8 9 10 
