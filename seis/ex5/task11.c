//
// Created by Stefan Andonov on 11/17/21.
//

#include<stdio.h>

int main() {
    int points;
    scanf("%d", &points);

    int grade = points / 10 + 1;
//    printf("%d", grade);

    switch (grade) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("F");
            break;
        case 6:
            printf("E");
            break;
        case 7:
            printf("D");
            break;
        case 8:
            printf("C");
            break;
        case 9:
            printf("B");
            break;
        default:
            printf("A");
            break;
    }
    return 0;
}