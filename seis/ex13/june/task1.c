//
// Created by Stefan Andonov on 1/11/22.
//

#include<stdio.h>

int shouldSwap(int *array, int n, int *idxMax1, int *idxMax2) {
    int max1, max2;

    if (array[1] > array[0]) {
        *idxMax1 = 1;
        *idxMax2 = 0;
        max1 = array[1];
        max2 = array[0];
    } else {
        *idxMax2 = 1;
        *idxMax1 = 0;
        max1 = array[0];
        max2 = array[1];
    }

    int i;
    for (i = 2; i < n; i++) {
        if (array[i]>max1) {
            max2 = max1;
            *idxMax2 = *idxMax1;
            max1 = array[i];
            *idxMax1 = i;
        } else if (array[i]>max2) {
            max2 = array[i];
            *idxMax2 = i;
        }
    }

    return *idxMax2 < *idxMax1;
}

int main() {
    int i, n, array[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int idxMax1, idxMax2;
    if (shouldSwap(array, n, &idxMax1, &idxMax2)) {
        int tmp = array[idxMax1];
        array[idxMax1] = array[idxMax2];
        array[idxMax2] = tmp;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}