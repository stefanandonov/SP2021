//
// Created by Stefan Andonov on 11/8/21.
//

#include<stdio.h>
int main (){
    int n = 1;
    int number = 100;
    int i;
//    while (n++<100){
//        printf("%d\n", n);
////        ++n;
//    }

//    for (i=1;i<=100;i++){
//        printf("%d\n", i);
//    }

    do {
        printf("%d\n", n);
        ++n;
    } while (n<=-5);

    return 0;
}