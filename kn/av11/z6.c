//
// Created by Stefan Andonov on 12/24/21.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int isStrongPassword(char *password) {
    int len = strlen(password);
    if (len < 8)
        return 0;

    int i, hasUpperLetter = 0, hasDigit = 0, hasSpecial = 0;

    for (i=0;i<len;i++) {
        if (isupper(password[i])){
            hasUpperLetter = 1;
        }
        if (isdigit(password[i])) {
            hasDigit = 1;
        }
        if (!isalnum(password[i])) {
            hasSpecial = 1;
        }
    }

    return hasSpecial && hasDigit && hasUpperLetter;
}

int main() {
    char password[100];

    fgets(password, sizeof(password), stdin);
    password[strlen(password) - 1] = '\0';

    if (isStrongPassword(password)) {
        printf("STRONG");
    } else {
        printf("WEAK");
    }
    return 0;
}