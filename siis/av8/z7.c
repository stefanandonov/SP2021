//
// Created by Stefan Andonov on 12/9/21.
//

#include<stdio.h>

int sumOfDigits (int number){
    int sum = 0;
    while (number){
        sum+=number%10;
        number/=10;
    }
    return sum;
}

int reverse (int number){
    int rev = 0;
    while (number){
        rev = 10*rev + number%10;
        number/=10;
    }
    return rev;
}
int main() {
    int i, n;
    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        int j = n-i;
        if (reverse(i)%sumOfDigits(j)==0){
            printf("%d %d\n", i, j);
        }
    }
    return 0;
}