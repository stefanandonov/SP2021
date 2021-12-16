//
// Created by Stefan Andonov on 12/9/21.
//

#include<stdio.h>

double xn(int n) {
    if (n==1 || n==2)
        return n;
    else
        return ((n-1.0)/n)*xn(n-1) + (1.0/n)*xn(n-2);
}

int main (){
    int n;
    scanf("%d", &n);
    printf("%lf", xn(n));
    return 0;
}