//
// Created by Stefan Andonov on 1/11/22.
//

#include<stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int i, j;

    int matrix[100][100];

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int minSum, minJ = 0;
    for (j = 0; j < n; j++) {
        int sum = 0;
        for (i = 0; i < m; i++) {
            sum+=matrix[i][j];
        }
        if (j==0) {
            minSum = sum;
        } else if (sum < minSum) {
            minSum = sum;
            minJ = j;
        }
    }

    printf("%d", minJ);


    return 0;
}