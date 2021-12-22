//
// Created by Stefan Andonov on 12/16/21.
//

#include<stdio.h>

int linearSearch(int *array, int n, int element) {
    int i;
    for (i = 0; i < n; i++) {
        if (*(array + i) == element)
            return i;
    }
    return -1;
}

int binarySearch(int *array, int n, int element) {
    int start = 0;
    int end = n - 1;
    while (start <= end) {
        int middle = (start + end) / 2;
        if (*(array + middle) == element)
            return middle;
        else {
            if (element > *(array + middle)) {
                start = middle + 1;
            } else {
                end = middle - 1;
            }
        }
    }
    return -1;
}

int main() {
    int array[100];
    int n;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", array + i);
    }

    printf("%d", linearSearch(array,n,4));
    printf("%d", binarySearch(array,n,4));
    return 0;
}