//
// Created by Stefan Andonov on 11/10/21.
//Да се напише програма што ќе ги испечати сите броеви
// од зададен опсег кои се читаат исто и одлево надесно и оддесно налево.
//

#include<stdio.h>

int main() {
    int i, a, b;
    int reverse = 0;
    scanf("%d %d", &a, &b);
    int counter = 0;

    for (i = a; i <= b; i++) {
        //TODO calculate reverse
        int tmp = i;
        reverse = 0;
        while (tmp != 0) {
            int c = tmp % 10;
            reverse = 10 * reverse + c;
            tmp /= 10;
        }

        if (i == reverse) {
            printf("%d\n", i);
            ++counter;
        }
    }

    if (!counter){
        printf("NEMA");
    }
    //algoritam za presmetka na prevrten broj
//    while (tmp != 0) {
//        int c = tmp % 10;
//        reverse = 10 * reverse + c;
//        tmp/=10;
//    }


    return 0;
}