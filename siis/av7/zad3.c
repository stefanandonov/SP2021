//
// Created by Stefan Andonov on 11/18/21.
//

#include<stdio.h>

int main (){
    int vector1[100], vector2[100];
    int i, n;

    scanf("%d", &n);
    for (i=0;i<n;i++){
        scanf("%d", &vector1[i]);
    }

    for (i=0;i<n;i++){
        scanf("%d", &vector2[i]);
    }

    int dotProduct = 0;
    for (i=0;i<n;i++){
        dotProduct+= vector1[i] * vector2[i];
    }

    printf("%d", dotProduct);
}