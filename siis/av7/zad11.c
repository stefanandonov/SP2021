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

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            int dlapka = 1;
            //goren sosed
            if (i >= 1) {
                if (matrix[i - 1][j] <= matrix[i][j]) {
                    dlapka = 0;
                }
            }

            //dolen sosed
            if (i < m - 1) {
                if (matrix[i + 1][j] <= matrix[i][j]) {
                    dlapka = 0;
                }
            }

            //lev sosed
            if (j >= 1) {
                if (matrix[i][j - 1] <= matrix[i][j]) {
                    dlapka = 0;
                }
            }

            //desen sosed
            if (j < n - 1) {
                if (matrix[i][j+1]<=matrix[i][j]){
                    dlapka=0;
                }
            }

            if (dlapka){
                printf("%d ", matrix[i][j]);
            }
        }
    }

    return 0;
}