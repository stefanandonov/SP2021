#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x, i, counter = 0, digit, number = 0;
    scanf("%d", &n);
    if (n < 10) {
        printf("Brojot ne e validen");
        return 0;//izlezi od programata
    }
    for (i = (n - 1); i > 0; i--) {
        x = i;
        while (x) {
            digit = x % 10;
            counter++;
            number = number * 10 + digit;
            x /= 10;
        }
        if (number % counter == 0) {
            printf("%d\n", i);
//printf("%d",x); pomosna


        }

    }
    return 0;
}