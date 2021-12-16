//
// Created by Stefan Andonov on 12/2/21.
//

#include<stdio.h>

int main() {
    //declaration of the array
    int array[100];

    //size of the array
    int i, n;

    //read the size of the array
    scanf("%d", &n);

    //reading of the elements of the array
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int m;
    scanf("%d", &m);

    int tmp[100];

    for (i = 0; i < n; i++) {
        tmp[(i+m)%n]=array[i];
    }

    for (i = 0; i < n; i++) {
        array[i] = tmp[i];
    }

    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }



    return 0;
}