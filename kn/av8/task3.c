//
// Created by Stefan Andonov on 12/9/21.
//

#include<stdio.h>
#include<math.h>

int isPrime(int number) {
    int i;
    for (i = 2; i <= (int) sqrt(number); i++) {
        if (number % i == 0)
            return 0; //this number it's not a prime number (it has a divisor different that 1 or itself)
    }
    return 1;
}

int main() {
    int i, n;
//    for (i=2;i<=1000;i++){
//        if (isPrime(i)){
//            printf("%d ", i);
//        }
//    } testing the method
    scanf("%d", &n);

    for (i = n + 1;; i++) {
        if (isPrime(i)) {
            printf("%d", i - n);
            break;
        }
    }
    return 0;
}