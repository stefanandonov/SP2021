//
// Created by Stefan Andonov on 12/9/21.
//

#include<stdio.h>

void printFirstN (int number) {
    int i;
    while (number){
        printf("%d ", number);
        --number;
    }
    //number = 0
}

int main (){
    int n;
    scanf("%d", &n);
    printFirstN(n); //n=10
    printf("\n%d", n);
    return 0;
}

