//
// Created by Stefan Andonov on 11/10/21.
//

#include<stdio.h>
int main (){
    //linija1
    //linija2
    //linija3

//    //linija
//    if (uslov){
//        //tuka ako e tocno
//    } else {
//        //tuka ako e netocno
//    }

    int i, sum = 0;
    int n;
    scanf("%d", &n);
    //sumata na prvite n broja (od 1 do n)

//    while (n>0) {
//        sum+=n;
//        --n;
//    }

//    do {
//        sum+=n;
//        n--;
//    } while (n>0);

    for (i=1;i<=n;i++){
        sum+=i;
    }

    printf("%d", sum);
    return 0;
}