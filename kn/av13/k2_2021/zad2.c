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

    int currentNumber = 1;
    for (j = 0; j < N; j++) {

        if (j % 2 == 0) { //rastecki redosled
            for (i = 0; i < N; i++) {
                if (currentNumber>n) {
                    matrix[i][j]=0;
                    continue;
                }
                matrix[i][j] = currentNumber;
                currentNumber++;
            }
        } else { //opagjacki redosled
            for (i = N - 1; i >= 0; i--) {
                if (currentNumber>n) {
                    matrix[i][j]=0;
                    continue;
                }
                matrix[i][j] = currentNumber;
                currentNumber++;
            }
        }
    }

    FILE *f = fopen("shema.txt", "w");
    for (i=0;i<N;i++){
        for (j=0;j<N;j++){
            fprintf(f, "%d ", matrix[i][j]);
        }
        fprintf(f, "\n");
    }

    fclose(f);


    printFile();
    return 0;
}