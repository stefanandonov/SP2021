//
// Created by Stefan Andonov on 12/16/21.
//

#include<stdio.h>

int sumOfFirstNNumbers (int number) {
    if (number==1){
        return 1;
    } else {
        return number + sumOfFirstNNumbers(number-1);
    }
}

long factorial(int n) {
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

long formula (int n){
    if (n==1){
        return 1;
    } else {
        return factorial(sumOfFirstNNumbers(n)) + formula(n-1);
    }
}


int main (){
    int i, n;
    scanf("%d", &n);
    printf("%ld", formula(n));
    return 0;
}
