//
// Created by Stefan Andonov on 11/18/21.
//

#include<stdio.h>

int main() {
    int i, m, n;
    scanf("%d %d", &m, &n);

    for (i = m + 1; i < n; i++) {
        if (i % 2 != 0) {
            int sumOfLastTwoDigits = i % 10 + i / 10 % 10;
            if (i%sumOfLastTwoDigits==0){
                printf("%d\n", i);
            }
        }
    }
    return 0;
}