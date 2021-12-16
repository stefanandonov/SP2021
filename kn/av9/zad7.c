//
// Created by Stefan Andonov on 12/15/21.
//

#include<stdio.h>

int lcm(int m, int n, int divisor) {
    if (m == 1 && n == 1) {
        return 1;
    } else {
        if (m % divisor == 0 || n % divisor == 0) {
            return divisor * lcm(
                    m % divisor == 0 ? m / divisor : m,
                    n % divisor == 0 ? n / divisor : n,
                    divisor
            );
        } else {
            return lcm(m, n, divisor + 1);
        }
    }
}

int main() {
    int i, n;
    scanf("%d", &n);
    int array[100];
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    int lcmResult = lcm(array[0], array[1], 2);
    for (i = 2; i < n; i++) {
        lcmResult = lcm(lcmResult, array[i], 2);
    }
    printf("%d", lcmResult);
    return 0;
}