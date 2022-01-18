//
// Created by Stefan Andonov on 1/11/22.
//

#include<stdio.h>

int checkCondition(int number) {
    int lastDigit = number % 10;
    while (number > 9) {
        number /= 10;
    }
    int firstDigit = number;
    return firstDigit % 2 == 1 && lastDigit % 2 == 0;
}

int checkConditionRecursive (int number, int lastDigit) {
    if (lastDigit==-1) {
        lastDigit = number%10;
    }

    if (number<10) {
        return number % 2 == 1 && lastDigit % 2 == 0;
    } else {
        return checkConditionRecursive(number/10, lastDigit);
    }

}

int main() {
    int n;
    scanf("%d", &n);
    int array[100];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int counter = 0;
    for (i = 0; i < n; i++) {
        if (checkConditionRecursive(array[i], -1)) {
            printf("%d\n", array[i]);
            ++counter;
        }
    }

    if (counter==0){
        printf("No such elements!");
    }
    return 0;
}