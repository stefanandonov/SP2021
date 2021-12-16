//
// Created by Stefan Andonov on 12/15/21.
//

#include<stdio.h>

double function (int n) {
    if (n==1 || n==2){
        return n;
    } else {
        return ((n-1.0)/n)*function(n-1) + (1.0/n)* function(n - 2);
    }

}

int main (){
    int n;
    scanf("%d", &n);
    printf("%.10f", function(n));
    return 0;
}