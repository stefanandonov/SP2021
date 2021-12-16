//
// Created by Stefan Andonov on 12/2/21.
//

#include<stdio.h>

int main() {
    //declaration of the array
    int vector1[100];
    int vector2[100];

    //size of the array
    int i, n;

    //read the size of the array
    scanf("%d", &n);

    //reading of the elements of the array
    for (i = 0; i < n; i++) {
        scanf("%d", &vector1[i]);
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &vector2[i]);
    }

    int scalarProduct = 0;

    for (i = 0; i < n; i++) {
        scalarProduct+=vector1[i]*vector2[i];
    }

    printf("%d", scalarProduct);
    return 0;


}

