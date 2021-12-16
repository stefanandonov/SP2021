//
// Created by Stefan Andonov on 12/15/21.
//

#include<stdio.h>

long factorialRecursive(int n) {
    if (n==1)
        return 1;
    else
        return n * factorialRecursive(n-1);
}

int main (){
    int n;
    scanf("%d", &n);
    printf("%ld", factorialRecursive(n));
    return 0;
}