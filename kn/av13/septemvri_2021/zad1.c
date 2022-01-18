//
// Created by Stefan Andonov on 1/10/22.
//

#include<stdio.h>

int findLargest(int *array, int n) {
    int maxNumber;
    int maxIdx = -1;
    int i;
    for (i = 1; i < n - 1; i++) {
        if (array[i] > array[i - 1] && array[i] > array[i + 1]) {
            if (maxIdx == -1 || array[i] > maxNumber) {
                maxIdx = i;
                maxNumber = array[i];
            }
        }
    }

    return maxIdx;
}

int main() {
    int n;
    scanf("%d", &n);

    int array[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int idx = findLargest(array, n);

    if (idx == -1) {
        printf("No element match the criteria");
    } else {
        printf("%d", array[idx]);
    }

    return 0;
}