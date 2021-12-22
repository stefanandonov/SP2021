//
// Created by Stefan Andonov on 12/16/21.
//

#include<stdio.h>

int lcm(int m, int n, int divisor) {
    if (m == 1 && n == 1)
        return 1;
    else {
        if (m % divisor == 0 || n % divisor == 0) {
            if (m % divisor == 0) {
                m /= divisor;
            }
            if (n % divisor == 0) {
                n /= divisor;
            }
            return divisor * lcm(m, n, divisor);
        } else {
            return lcm(m, n, divisor + 1);
        }
    }
}

int main() {
    int i, n, array[100];
    int lcmResult;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    lcmResult = lcm(array[0], array[1], 2);
    for (i = 2; i < n; i++) {
        lcmResult = lcm(lcmResult, array[i], 2);
    }

    printf("LCM: %d", lcmResult);
    return 0;
}