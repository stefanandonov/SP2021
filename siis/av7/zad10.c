//
// Created by Stefan Andonov on 12/2/21.
//

#include<stdio.h>

int main() {
    //deklaracija
    int matrix[100][100];

    int i, j, n;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int squareMatrix = 1;

    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++){
            if (matrix[i][j]!=matrix[j][i]){
                squareMatrix=0;
            }
        }
    }

    if (squareMatrix){
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}