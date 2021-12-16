//
// Created by Stefan Andonov on 12/16/21.
//

#include<stdio.h>

int gcd(int first, int second) {
    if (second == 0)
        return first;
    else
        return gcd(second, first % second);
}

int main() {
    int n;
    scanf("%d", &n);
    int array[100];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int gcdResult = gcd(array[0], array[1]);

    for (i = 2; i < n; i++) {
        gcdResult = gcd(gcdResult, array[i]);
    }

    printf("GCD: %d", gcdResult);
    return 0;
}