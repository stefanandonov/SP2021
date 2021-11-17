//
// Created by Stefan Andonov on 11/17/21.
//

#include<stdio.h>

int main() {
    int i, j, k, x;
    scanf("%d", &x);

    for (i = 2; i <= x; i++) {
        int divisors = 0;
        for (k = 1; k <= i; k++){
            if (i%k==0){
                ++divisors;
            }
        }
        if (divisors!=2){
            continue;
        }

        int diff = x - i;
        if (diff%2==0){
            printf("%d + %d = %d\n", i, diff, x);
        }

    }


}