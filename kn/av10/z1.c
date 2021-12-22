//
// Created by Stefan Andonov on 12/22/21.
//

#include<stdio.h>

void findMaxAscSubarray(int *array, int n, int *maxStart, int *maxLength) {
    int i;
    int start;
    int length;

    for (i = 0; i < n - 1; i++) {
        start = i;
        length = 1;
        while (*(array + i) < *(array + i + 1)) {
            ++i;
            length++;
            if (i==(n-1))
                break;
        }
        if (length > *maxLength) {
            *maxLength = length;
            *maxStart = start;
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

    int maxStart = 0;
    int maxLength = 1;

    findMaxAscSubarray(array, n, &maxStart, &maxLength);

    for (i = maxStart; i < maxStart + maxLength; i++) {
        printf("%d ", *(array + i));
    }
}