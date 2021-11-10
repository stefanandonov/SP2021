//
// Created by Stefan Andonov on 11/10/21.
//Да се напише програма што на екран ќе ги испечати сите четири-цифрени броеви
// кај кои збирот на трите најмалку значајни
// цифри е еднаков со најзначајната цифра.
//

#include<stdio.h>

int main() {
    int i;

    for (i = 1000; i < 10000; i++) {
        int mostSignificant = i / 1000;
        int sumOfLeastSignificant = (i % 10) + (i / 10 % 10) + (i / 100 % 10);
//        printf("%d %d %d\n", i, mostSignificant, sumOfLeastSignificant);
        if (mostSignificant == sumOfLeastSignificant){
            printf("%d\n", i);
        }
    }
    return 0;
}