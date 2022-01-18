// Task2.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// rotacija vo desno na dijagonali na kvadratna matrica

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

#define MAX 50

void printFile() {

    FILE *f = fopen("output.txt", "r");
    char line[1000];
    while (!feof(f)) {
        fgets(line, 1000, f);
        if (feof(f))
            break;
        printf("%s", line);
    }
    fclose(f);
}

void wtf() {
    FILE *f = fopen("input.txt", "w");

    int row, column, i, j;
    int el;
    scanf("%d", &row);

    fprintf(f, "%d\n", row);

    for (i = 0; i < row; ++i) {
        for (j = 0; j < row; ++j) {
            scanf("%d", &el);
            fprintf(f, "%d ", el);
        }
        fputc('\n', f);
    }
    fclose(f);

    return;
}

int main() {
    wtf();
    FILE *inputFile = fopen("input.txt", "r");

    int n;
    fscanf(inputFile, "%d", &n);

    int i, j;
    int matrix[100][100];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            fscanf(inputFile, "%d", &matrix[i][j]);
        }
    }

    fclose(inputFile);

    int tmp[4];
    for (i = 0; i < n / 2; i++) {
        j = n - i - 1;

        tmp[0] = matrix[i][i];   //00 top left element
        tmp[1] = matrix[i][j];   //04 top right element
        tmp[2] = matrix[j][i];   //40 bottom left element
        tmp[3] = matrix[j][j];   //44 bottom right element

        matrix[i][j] = tmp[0];
        matrix[j][j] = tmp[1];
        matrix[j][i] = tmp[3];
        matrix[i][i] = tmp[2];
    }

    FILE * outputFile = fopen("output.txt", "r");

    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            fprintf(outputFile, "%d ", matrix[i][j]);
        }
        fprintf(outputFile, "\n");
    }

    fclose(outputFile);

    // Your code ends here!
    printFile();

    return 0;
}