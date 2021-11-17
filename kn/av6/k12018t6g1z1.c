//
// Created by Stefan Andonov on 11/17/21.
// Од тастатура се вчитува природен број N, а потоа се вчитуваат последователно
// N тројки цели броеви (a, b, c). Нека за секоја тројка цели броеви a, b и c
// се дефинира вредност s што се пресметува по следната формула:
//
//s = max/2 + 3*max - max^2
//
//каде што max е најголемиот од броевите a, b, c.
// На излез да се испечати вредноста s за секоја од тројките броеви и на
// крај повторно најголемата добиена вредност за s.
//

#include<stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int i, a, b, c;
    float maxS;
    for (i = 0; i < N; i++) {
        float s = 0;
        scanf("%d%d%d", &a, &b, &c);
        int max = a;
        if (b > max) {
            max = b;
        }
        if (c > max) {
            max = c;
        }

        s = (max / 2.0) + (3 * max) - (max * max);
        if (i == 0) {
            maxS = s;
        }
        if (s > maxS) {
            maxS = s;
        }
        printf("%.1f\n", s);
    }
    printf("Najgolema: %.1f", maxS);

    return 0;
}

