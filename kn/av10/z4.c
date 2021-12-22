//
// Created by Stefan Andonov on 12/22/21.
//

#include<stdio.h>

void swap (int * a, int * b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubbleSort(int *array, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (*(array+j)>*(array+j+1)){
                swap(array+j, array+j+1);
            }
        }
    }
}

int main() {
    int array[100];
    int i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", array + i);
    }

    bubbleSort(array, n);

    for (i = 0; i < n; i++) {
        printf("%d ", *(array + i));
    }
    return 0;
}