//
// Created by Stefan Andonov on 11/2/21.
//

#include<stdio.h>

int main() {
    char character;
    scanf("%c", &character);
//    printf("%c", character);
    //97 <= character <= 122
    //int isLowerCase = (97 <= character <= 122); NOT OK
    int isLowerCase = (character >= 'a') && (character <= 'z');
    int isDigit = (character >= '0') && (character <= '9');
    printf("%d %d", isLowerCase, isDigit);
    return 0;
}