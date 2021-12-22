//
// Created by Stefan Andonov on 12/16/21.
//

#include<stdio.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sortArray(int array[100], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (*(array + j) > *(array + j + 1)) {
                swap(array + j, array + j + 1);
                //swap(&array[j], &array[j+1]);
            }
        }
    }
}

int main() {
    int array[100];
    int n;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", array + i);
    }

    sortArray(array, n);
    for (i = 0; i < n; i++) {
        printf("%d ", *(array + i));
    }
    return 0;
}