//
// Created by Stefan Andonov on 1/11/22.
//

#include <stdio.h>
void printFile() {
    FILE *f=fopen("matrix.txt","r");
    char line[1000];
    while(!feof(f)){
        fgets(line,1000,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

int main() {
    //Vasiot kod tuka
    int m, n, r, k;
    int matrix[100][100];
    int i, j;

    scanf("%d %d", &m, &n);
    scanf("%d %d", &r, &k);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int min = matrix[0][0];
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < k; j++) {
            matrix[i][j]=min;
        }
    }

    FILE * file = fopen("matrix.txt", "w");

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            fprintf(file, "%d ", matrix[i][j]);
        }
        fprintf(file, "\n");
    }
    // do tuka
    printFile();
    return 0;
}
