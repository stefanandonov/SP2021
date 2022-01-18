//
// Created by Stefan Andonov on 1/10/22.
//

#include<stdio.h>

void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while ((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();

    FILE *f = fopen("input.txt", "r");

    int m, n;
    fscanf(f, "%d %d", &m, &n);

    int i, j, k;
    int matrix[100][100];
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            fscanf(f, "%d", &matrix[i][j]);
        }
    }

    fclose(f);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            int s1 = 0;
            int s2 = 0;

            //na desno
            for (k = j; k < n; k++) {
                s1 += matrix[i][k];
            }

            //na dole
            for (k = i; k < m; k++) {
                s2 += matrix[k][j];
            }

            matrix[i][j] = (s1 > s2 ? s1 : s2);

            //printf("%d %d %d\n", matrix[i][j], s1, s2);
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