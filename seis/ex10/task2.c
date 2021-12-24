//
// Created by Stefan Andonov on 12/23/21.
//

#include<stdio.h>

void transform(int *array, int n) {
    int i;
    for (i = 0; i < n / 2; i++) {
        int sum = *(array + i) + *(array + n - i - 1);
        *(array + i) = sum;
        *(array + n - i - 1) = sum;
    }

    if (n % 2 == 1) {
        *(array+n/2)*=2;
    }
}

int main() {
    int array[100];
    int i, n;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", array + i);
    }

    transform(array, n);

    for (i = 0; i < n; i++) {
        printf("%d ", *(array + i));
    }

    return 0;
}