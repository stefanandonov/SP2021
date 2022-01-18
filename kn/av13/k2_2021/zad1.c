//
// Created by Stefan Andonov on 1/10/22.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void cleanString(char *str) {
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
}

int checkCondition(char *str) {
    //proverka dali e palindrom
    int i, isPalindrome = 1, hasSpecialChar = 0;
    int n = strlen(str);
    for (i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            isPalindrome = 0;
        }
    }

    for (i = 0; i < n; i++) {
        if (!isalnum(str[i])) {
            hasSpecialChar = 1;
        }
    }

    return isPalindrome == 1 && hasSpecialChar == 1;
}

int main() {
    int i, N;
    scanf("%d\n", &N);

    int flag = 1;
    int maxLen = 0;
    char max[81];

    for (i = 0; i < N; i++) {
        char line[81];
        fgets(line, sizeof(line), stdin);
        cleanString(line);
        if (checkCondition(line)) {
            if (strlen(line) > maxLen) {
                maxLen = strlen(line);
                strcpy(max, line);
            }
        }
    }

    if (maxLen) { //sme nashle takva linija
        puts(max);
    } else {
        printf("Nema!");
    }

    return 0;
}