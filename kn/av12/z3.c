//
// Created by Stefan Andonov on 12/29/21.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main() {
    FILE *inputFile = fopen("/Users/stefanandonov/CLionProjects/SP2021/kn/av12/data/matrica1.txt", "r");
    FILE * outputFile = fopen("/Users/stefanandonov/CLionProjects/SP2021/kn/av12/data/matrica2.txt", "w");
    int m, n, i, j;
    float matrix[100][100];

    fscanf(inputFile, "%d %d", &m, &n);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            fscanf(inputFile, "%f", &matrix[i][j]);
        }
    }


    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            fprintf(outputFile, "%.1f ", matrix[j][i]);
        }
        fprintf(outputFile, "\n");
    }


    fclose(inputFile);
    fclose(outputFile);


    return 0;
}