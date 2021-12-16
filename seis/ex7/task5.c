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

    int tmp = array[n - 1];

    for (i = n - 1; i >= 1; i--) {
        array[i] = array[i - 1];
    }

    array[0] = tmp;

    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;

}

