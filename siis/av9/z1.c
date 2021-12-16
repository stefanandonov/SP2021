//
// Created by Stefan Andonov on 12/9/21.
//

#include<stdio.h>
int sumOfFirstNRecursive (int n) {
    if (n==1)
        return 1;
    else
        return n + sumOfFirstNRecursive(n-1);
}

long factorial (int n){
    if (n==1)
        return 1;
    else
        return n * factorial(n-1);
}

long formula (int n) {
    if (n==1) {
        return 1;
    } else {
        return factorial(sumOfFirstNRecursive(n)) + formula(n-1);
    }
}

int main () {
    int i,n;
    long sum = 0l;
    scanf("%d", &n);
    printf("%ld", formula(n));
    return 0;
}