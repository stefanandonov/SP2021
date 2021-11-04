//
// Created by Stefan Andonov on 11/4/21.
//

#include<stdio.h>

int main (){
    int n = 100;
    int i;

//    while (n!=0) {
//       printf("Message\n");
//       --n;
//    }

    for (i=1;i<=n;i++){
        printf("Message\n");
    }

    printf("%d", n);
    return 0;
}