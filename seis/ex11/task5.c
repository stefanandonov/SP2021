//
// Created by Stefan Andonov on 12/30/21.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

// Extension: regardless of the case of the letters
int isPalindrome(char *str) {
    int i;
    int n = strlen(str);
    for (i = 0; i < n / 2; i++) {
        if (toupper(str[i]) != toupper(str[n - i - 1])) {
            return 0;
        }
    }
    return 1;
}

//recursive function
int isPalindromeR(char *str, int start, int end) {
    if (start >= end) {
        return 1;
    } else {
        if (toupper(str[start]) != toupper(str[end]))
            return 0;
        else
            return isPalindromeR(str, start + 1, end - 1);
    }
}

int main() {
    char str[100];
    char substr[100];
    char ch;
    int i;

    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; //delete the new line at the end of the string

    if (isPalindromeR(str, 0, strlen(str)-1)) {
        printf("PALINDROME");
    } else {
        printf("NOT A PALINDROME");
    }
    return 0;
}
