//
// Created by Stefan Andonov on 1/10/22.
//

#include <stdio.h>
#include <math.h>

void printFile() {
    FILE *f = fopen("shema.txt", "r");
    char line[1000];
    while (!feof(f)) {
        fgets(line, 1000, f);
        if (feof(f))
            break;
        printf("%s", line);
    }
    fclose(f);
}

int main() {
    //Vasiot kod tuka
    int n;
    scanf("%d", &n);

    int N = (int) ceil(sqrt(n));

    //printf("%d", N);

    int j, i;
    int matrix[100][100];

    int flag = 0;

    for (i = 0; i < N; i++) {
        flag = 0;
        for (j = 0; j < N; j++) {

            if (flag) {
                matrix[i][j]=0;
                continue;
            }
            if (j == 0) {
                matrix[i][j] = i + 1;
            } else {
                if (j % 2 == 0) {
                    matrix[i][j] = matrix[i][j - 1] + 1 + 2 * i;
                } else {
                    matrix[i][j] = matrix[i][j - 1] + 1 + 2 * (N - 1 - i);
                }
            }

            if (matrix[i][j]>n){
                matrix[i][j]=0;
                flag = 1;
            }
        }
    }


    FILE *f = fopen("shema.txt", "w");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            fprintf(f, "%d ", matrix[i][j]);
        }
        fprintf(f, "\n");
    }

    fclose(f);


    printFile();
    return 0;
}