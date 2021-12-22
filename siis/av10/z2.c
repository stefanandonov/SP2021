//
// Created by Stefan Andonov on 12/16/21.
//

#include<stdio.h>

void transform(int *array, int n) {
    int i;
    for (i = 0; i < n / 2; i++) {
        int tmp = *(array + i) + *(array + n - i - 1);
        *(array + i) = tmp;
        *(array + n - i - 1) = tmp;
    }

    if (n % 2 == 1) {
        *(array + n / 2) *= 2;
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
    transform(array, n);
    for (i = 0; i < n; i++) {
        printf("%d ", *(array + i));
    }
    return 0;
}