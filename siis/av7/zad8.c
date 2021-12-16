//
// Created by Stefan Andonov on 12/2/21.
//

#include<stdio.h>

int main() {
    //deklaracija
    int matrix[100][100];

    int i, j, m, n;
    scanf("%d %d", &m, &n);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sumOfEvenRows = 0, sumOfOddColumn = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (i%2==0){
                sumOfEvenRows+=matrix[i][j];
            }
            if (j%2==1){
                sumOfOddColumn+=matrix[i][j];
            }
        }
    }

    printf("%d", sumOfOddColumn-sumOfEvenRows);
    return 0;
}