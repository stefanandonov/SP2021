//
// Created by Stefan Andonov on 10/21/21.
//

#include<stdio.h>

int main() {
    //deklaracija na promenlivi
    char c;

    //input
    scanf("%c", &c);

    //'a' <= c <= 'z' mala bukva
    printf("Is the character a uppercase letter? %d", c >= 'A' && c <= 'Z');

    //'0' <= c <= '9'
    printf("Is the character a digit? %d", c >= '0' && c <= '9');
    return 0;
}