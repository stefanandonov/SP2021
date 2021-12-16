//
// Created by Stefan Andonov on 12/16/21.
//

#include<stdio.h>

int lcd(int m, int n, int divisor) {
    if (m == 1 && n == 1) {
        return 1;
    } else {
        if (m % divisor == 0 || n % divisor == 0) {
            if (m % divisor == 0)
                m /= divisor;
            if (n % divisor == 0)
                n /= divisor;
            return divisor * lcd(m, n, divisor);
        } else {
            return lcd(m, n, divisor + 1);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int array[100];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int lcdResult = lcd(array[0], array[1], 2);

    for (i = 2; i < n; i++) {
        lcdResult = lcd(lcdResult, array[i], 2);
    }

    printf("LCD: %d", lcdResult);
    return 0;
}