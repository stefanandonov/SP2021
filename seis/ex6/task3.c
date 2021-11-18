//
// Created by Stefan Andonov on 11/18/21.
//

#include<stdio.h>

int main() {
    int i, M, N;

    scanf("%d %d", &M, &N);
//    if (N > 10 && M > 10 && N > M) {
//
//    }

    for (i = M + 1; i < N; i++) {
        if (i % 2 != 0) {
            int sumOfLeastTwoSign = i % 10 + i / 10 % 10;
            if (i % sumOfLeastTwoSign == 0) {
                printf("%d\n", i);
            }

        }
    }
    return 0;
}