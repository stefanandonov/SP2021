//
// Created by Stefan Andonov on 12/9/21.
//

#include<stdio.h>
#include<stdlib.h>
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
    int sumEven = 0, sumOdd = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (i%2==0) { //even row
                sumEven+=matrix[i][j];
            }

            if (j%2==1){ //odd column
                sumOdd+=matrix[i][j];
            }
        }
    }

    printf("%d", abs(sumEven-sumOdd));
    return 0;
}