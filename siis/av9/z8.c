//
// Created by Stefan Andonov on 12/16/21.
//

#include<stdio.h>

int sum(int array[100], int n) {
    if (n == 1) {
        return array[0];
    } else {
        return array[n - 1] + sum(array, n - 1);
    }
}

int main() {
    int i, n, array[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    printf("%d", sum(array, n));
    return 0;
}