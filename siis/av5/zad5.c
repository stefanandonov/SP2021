//
// Created by Stefan Andonov on 11/4/21.
// Dopolneta so: Ako nema nitu eden palindrom vo intervalot, da se ispecati poraka NEMA
//

#include<stdio.h>

int main() {
    int i, a, b, reverse = 0;
    int flag = 0;
    scanf("%d%d", &a, &b);

    for (i = a; i <= b; i++) {
        int tmp = i;
        reverse = 0;
        while (tmp) {
            int lastDigit = tmp % 10;
            reverse = 10 * reverse + lastDigit;
            tmp /= 10;
        }
        if (i==reverse) {
            flag = 1;
            printf("%d\n", i);
        }
    }

    if (flag==0){
        printf("NEMA");
    }


//    while (tmp) {
//        int lastDigit = tmp % 10;
//        reverse = 10*reverse+lastDigit;
//        tmp/=10;
//    }

//    for (i=n; i>0; i/=10){
//        reverse = 10*reverse+i%10;
//    }

//    printf("Number: %d Reverse number: %d", n, reverse);

    return 0;
}