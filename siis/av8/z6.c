//
// Created by Stefan Andonov on 12/9/21.
//

#include<stdio.h>

int sumOfFirstNNumber (int n) {
    int sum = 0;
    int i;
    for (i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

long factorial (int number){
    long product = 1;
    int i;
    for (i=1;i<=number;i++)
        product*=i;
    return product;
}

long calculateForNumber(int i) {
    return factorial(sumOfFirstNNumber(i));
}

int main (){
    int i, n;
    scanf("%d", &n);
    long sum = 0;
    for (i=1;i<=n;i++){
        sum+=calculateForNumber(i);
    }
    printf("%ld", sum);
    return 0;

}