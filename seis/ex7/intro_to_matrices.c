//
// Created by Stefan Andonov on 12/9/21.
//

#include<stdio.h>

int main() {
    //declaration of a matrix
    int matrix[100][100];
    int i, j, m, n;
    //reading the dimensions
    scanf("%d %d", &m, &n);

    //read the elements of the matrix
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    //TODO processing of the matrix

    //printing of the matrix
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
};

