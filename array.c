#include <stdio.h>

void main() {
    int arr[10][10], i, j, rows, cols;

    // Read the number of rows and columns from the user
    printf("Enter row and column sizes : ");
    scanf("%d %d", &rows, &cols);

    // Nested loops to read values into the 2D array
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter the value of arr[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Print the final result
    printf("The given matrix is\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            // Print elements separated by a space
            printf("%d ", arr[i][j]);
        }
        // Print a newline after each row to form the matrix shape
        printf("\n");
    }
}