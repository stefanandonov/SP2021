//
// Created by Stefan Andonov on 11/10/21.
// Да се напише програма што од непознат број на цели броеви
// што се внесуваат од тастатура ќе го определи бројот со максимална вредност.
// Програмата завршува ако се внесе невалидна репрезентација на број.
//

#include<stdio.h>

int main() {
    int number;
    int max;
    int flag = 1;

    while (scanf("%d", &number)) {

        if (number>100){
            continue;
        }

        if (flag) {
            max = number;
            flag = 0;
        }

        if (number > max) {
            max = number;
        }

    }

    if (flag){
        printf("Please enter at least one valid integer\n");
    } else {
        printf("Maximum: %d\n", max);
    }
    return 0;
}