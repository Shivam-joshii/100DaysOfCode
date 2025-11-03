//Perform diagonal traversal of a matrix.
#include <stdio.h>

void diagonalTraversal(int matrix[][100], int n, int m) {
    // Traverse all diagonals starting from the first row
    for (int k = 0; k < m; k++) {
        int i = 0, j = k;
        while (i < n && j < m) {
            printf("%d ", matrix[i][j]);
            i++;
            j++;
        }
        printf("\n");
    }
    // Traverse all diagonals starting from the first column (excluding the top-left corner)
    for (int k = 1; k < n; k++) {
        int i = k, j = 0;
        while (i < n && j < m) {
            printf("%d ", matrix[i][j]);
            i++;
            j++;
        }
        printf("\n");
    }
}

int main() {
    int n, m;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);

    int matrix[n][m];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");
    diagonalTraversal(matrix, n, m);

    return 0;
}
