//
// Created by Stefan Andonov on 11/17/21.
// An integer N is read from the standard input. Write a program that will print the first number greater than N that has equal number of odd and even digits (zero is counted as an even digit).
//

#include<stdio.h>

int main (){
    int i, n;
//    int countEven = 0, countOdd = 0;
    scanf("%d", &n);

    for (i=n+1; ;i++){
        int countEven = 0, countOdd = 0;
        //TODO calculate even and odd digits
        int temp = i;
        while (temp){
            int lastDigit = temp%10;
            if (lastDigit%2==0){
                countEven++;
            } else {
                countOdd++;
            }
            temp/=10;
        }

        if (countEven == countOdd){
            printf("%d", i);
            break;
        }
    }
    return 0;
}

