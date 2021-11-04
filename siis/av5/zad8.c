//
// Created by Stefan Andonov on 11/4/21.
//

#include<stdio.h>

int main (){
    int m1,m2;
    int number;

    scanf("%d", &number);
    m1 = m2 = number;

    while (scanf("%d", &number)){
        if (number>m1){
            m2 = m1;
            m1 = number;
        } else {
            if (number>m2){
                m2 = number;
            }
        }
    }

    printf("%d %d", m1, m2);
    return 0;
}