//
// Created by Stefan Andonov on 11/4/21.
//

#include<stdio.h>
int main (){
    int sum = 0;
    int i;
    int n = 10;
// Zad 1.a so while i for
//    while (n<=98){
//        printf("Adding %d to the sum\n", n);
//        sum+=n;
//        n+=2;
//    }

//    for (i=10;i<=98;i+=2){
//        sum+=i;
//    }

//Zad1b: so for ciklus
    for (i=11;i<=99;i+=2){
//        printf("%d%s ", i, i==99 ? "" : " +");
        if (i!=99){
            printf("%d + ", i);
        } else {
            printf("%d ", i);
        }

        sum+=i;
    }

    printf("= %d", sum);

    return 0;
}