//
// Created by Stefan Andonov on 12/1/21.
//

#include<stdio.h>

int main() {
    int i, n;
    int vector1[100], vector2[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &vector1[i]);
    }


    for (i = 0; i < n; i++) {
        scanf("%d", &vector2[i]);
    }

    int dotProduct = 0;

    for (i = 0; i < n; i++) {
        dotProduct += (vector2[i] * vector1[i]);
    }

    printf("%d", dotProduct);
    return 0;
}