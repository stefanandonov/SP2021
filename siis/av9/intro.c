//
// Created by Stefan Andonov on 12/9/21.
//

long factorial (int n){
    if (n==1)
        return 1;
    else
        return n * factorial(n-1);
}

int sumOfFirstNRecursive (int n) {
    if (n==1)
        return 1;
    else
        return n + sumOfFirstNRecursive(n-1);
}

#include<stdio.h>
int main (){
    printf("%d", sumOfFirstNRecursive(5));
    return 0;
}