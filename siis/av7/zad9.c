//
// Created by Stefan Andonov on 12/2/21.
//

#include<stdio.h>

int main() {
    //deklaracija
    int matrix[100][100];

    int i, j, n;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int max, min;
    max = min = matrix[0][0];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j]>max){
                max = matrix[i][j];
            }

            if (matrix[i][j]<min){
                min = matrix[i][j];
            }
        }
    }

    int diff = max - min;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i==j){
                matrix[i][j]=diff;
            }
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}