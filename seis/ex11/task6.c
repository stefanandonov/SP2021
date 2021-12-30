//
// Created by Stefan Andonov on 12/30/21.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int isStrong(char *pass) {
    if (strlen(pass) < 8)
        return 0;

    int i, hasUpperLetter = 0, hasDigit = 0, hasSpecial = 0;

    for (i = 0; i < strlen(pass); i++) {
        if (isupper(pass[i])) {
            hasUpperLetter = 1;
        }
        if (isdigit(pass[i])) {
            hasDigit = 1;
        }
        if (!isalpha(pass[i])) {
            hasSpecial = 1;
        }
    }

    return hasUpperLetter == 1 && hasDigit == 1 && hasSpecial == 1;

}

int main() {
    char password[100];

    fgets(password, sizeof(password), stdin);
    password[strlen(password) - 1] = '\0'; //delete the new line at the end of the string

    if (isStrong(password)){
        printf("STRONG");
    } else {
        printf("WEAK");
    }
    return 0;
}
