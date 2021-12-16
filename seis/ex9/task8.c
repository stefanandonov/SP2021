//
// Created by Stefan Andonov on 12/16/21.
//

#include<stdio.h>

int sum(int a[100], int n) {
    if (n == 1) {
        return a[0];
    } else {
        return a[n - 1] + sum(a, n - 1);
    }
}

int main() {
    int i, n;
    scanf("%d", &n);
    int array[100];
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Sum of the array: %d", sum(array, n));
    return 0;
}