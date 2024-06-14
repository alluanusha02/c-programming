#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);
    
    int matrix[n][n];
    
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Primary diagonal: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");
    
    printf("Secondary diagonal: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", matrix[i][n-i-1]);
    }
    printf("\n");
    
    return 0;
}
