//
// Created by Stefan Andonov on 11/10/21.
// Да се напише програма што од n броеви (внесени од тастатура)
// ќе го определи бројот на броеви што се деливи со 3, при делењето со 3 имаат остаток 1, односно 2.
//

#include<stdio.h>

int main() {
    int i, n;
    int number;
    int r0 = 0, r1 = 0, r2 = 0;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &number);
        int r = number % 3;
        if (r==0){
            r0++;
        } else if (r==1){
            r1++;
        } else {
            r2++;
        }
    }

    printf("r0: %d r1: %d r2: %d\n", r0, r1, r2);


    return 0;
}