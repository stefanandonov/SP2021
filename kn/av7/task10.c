//
// Created by Stefan Andonov on 12/9/21.
//

#include<stdio.h>

int main() {
    //declaration of a matrix
    int matrix[100][100];
    int i, j, m;
    //reading the dimensions
    scanf("%d", &m);

    //read the elements of the matrix
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int symmetrical = 1; //assume that the matrix is symmetrical

    for (i = 0; i < m; i++) {
        for (j = i+1; j < m; j++) {
            if (matrix[i][j]!=matrix[j][i]) {
                symmetrical = 0; // we just proved that the matrix is not symmetrical
            }
        }
    }

    if (symmetrical){
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}