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

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            int isHole = 1;
            if (i > 0) { //can have a upper neighbour
                if (matrix[i - 1][j] <= matrix[i][j])
                    isHole = 0;
            }

            if (i < (m - 1)) { //can have a bottom neighbour
                if (matrix[i + 1][j] <= matrix[i][j])
                    isHole = 0;
            }

            if (j > 0) { // can have a left neighbour
                if (matrix[i][j - 1] <= matrix[i][j])
                    isHole = 0;
            }

            if (j < (n - 1)) { //can have a right neighbour
                if (matrix[i][j + 1] <= matrix[i][j])
                    isHole = 0;
            }

            if (isHole) {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    return 0;
}
