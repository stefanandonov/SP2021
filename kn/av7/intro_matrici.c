//
// Created by Stefan Andonov on 12/1/21.
//

#include<stdio.h>

int main (){
    int matrix [100][100];

    int i,j,m,n;

    scanf("%d %d", &m, &n);

    for (i=0;i<m;i++){
        for (j=0;j<n;j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    for (i=0;i<m;i++){
        for (j=0;j<n;j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}