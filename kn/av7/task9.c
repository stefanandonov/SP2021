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

    int max, min;
    //Initialize the max and min to the first element of the matrix
    max = min = matrix[0][0];

    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }

//    for (i = 0; i < m; i++) {
//        for (j = 0; j < m; j++) {
//            if (i==j){
//                matrix[i][j]=max-min;
//            }
//        }
//    }

    for (i = 0; i < m; i++) {
        matrix[i][i] = max - min;
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }


    return 0;
}