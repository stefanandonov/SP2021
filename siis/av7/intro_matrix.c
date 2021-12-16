//
// Created by Stefan Andonov on 12/2/21.
//

#include<stdio.h>

int main() {
    //deklaracija
    int matrix[100][100];

    int i, j, m, n;
    scanf("%d %d", &m, &n);

//    int n; ZA KVADRATNA MATRICA
//    scanf("%d", &n);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}