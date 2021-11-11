//
// Created by Stefan Andonov on 11/11/21.
//

#include<stdio.h>

int main() {
    int i, n, flag;
    scanf("%d", &n);

    for (i = n + 1;;i++) {
        flag = 1; //pretpostavuvame deka brojot e rastecki
        int tmp = i; //za da ne se unisti vrednosta na i
        while (tmp >= 10) {
            int c1 = tmp % 10; //posledna cifra od brojot
            int c2 = tmp / 10 % 10; //pretposledna cifra od brojot
            if (c1 <= c2) { //dali vazi deka brojot ne e rastecki, odnosno posledna e pomala ili ednakva od pretposledna cifra
                flag = 0; //go spustame znameceto na 0
                break;
            }
            tmp /= 10; //trgame po edna cifra od brojot
        }

        if (flag==1){ //dali uste vazi pretpostavkata
            printf("%d", i); //ispecati go brojot
            break; //zavrshi go ciklusot
        }
    }
    return 0;
}