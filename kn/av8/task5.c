//
// Created by Stefan Andonov on 12/9/21.
//

#include<stdio.h>

int sumOfFirstNNumbers (int number) {
    int i,sum = 0;
    for (i=1;i<=number;i++){
        sum+=i;
    }
    return sum;
}

long long factorial (int number) {
    int i;
    long product = 1;
    for (i=1;i<=number;i++){
        product*=i;
    }
    return product;
}

int main (){
    int i, n;
    scanf("%d", &n);
    long long result = 0;
    for (i=1;i<=n;i++){
        result+=(factorial(sumOfFirstNNumbers(i)));
    }
    printf("%lld", result);
    return 0;
}
