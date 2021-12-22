//
// Created by Stefan Andonov on 12/22/21.
//

#include<stdio.h>

int linearSearch(int *array, int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (*(array + i) == key)
            return i;
    }
    return -1;
}

int binarySearch(int *array, int n, int key) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int middle = (start + end) / 2;
        if (*(array + middle) == key) {
            return middle;
        } else if (key > *(array + middle)) {
            start = middle + 1;
        } else {
            end = middle - 1;
        }
    }

    return -1;
}

int binarySearchRecursive(int *array, int key, int start, int end) {
    if (start > end)
        return -1;
    else {
        int middle = (start + end) / 2;
        if (*(array + middle) == key) {
            return middle;
        } else if (key > *(array + middle)) {
            return binarySearchRecursive(array, key, middle + 1, end);
        } else {
            return binarySearchRecursive(array, key, start, middle - 1);
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

    printf("%d %d", linearSearch(array, n, 100), binarySearchRecursive(array, 100, 0, n-1));
}