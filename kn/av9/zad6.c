//
// Created by Stefan Andonov on 12/15/21.
//

#include<stdio.h>

int gcd(int m, int n) {
    if (n == 0)
        return m;
    else
        return gcd(n, m % n);
}

int main() {
    int i, n;
    scanf("%d", &n);
    int array[100];
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    int gcdResult = gcd(array[0], array[1]);
    for (i = 2; i < n; i++) {
        gcdResult = gcd(gcdResult, array[i]);
    }
    printf("%d", gcdResult);
    return 0;
}