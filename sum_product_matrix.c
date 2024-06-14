
#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    int matrix[rows][cols];
    int sum = 0;
    long long product = 1;
    
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
            product *= matrix[i][j];
        }
    }
    
    printf("Sum of all elements: %d\n", sum);
    printf("Product of all elements: %lld\n", product);
    
    return 0;
}
