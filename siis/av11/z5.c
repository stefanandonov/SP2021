//
// Created by Stefan Andonov on 12/24/21.
//

#include<stdio.h>
#include<string.h>

int isPalindrome(char *str) {
    int i;
    int n = strlen(str);
    printf("%d", n);
    for (i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int isPalindromeRecursive(char *str, int start, int end) {
    if (start >= end) {
        return 1;
    } else {
        if (str[start] != str[end])
            return 0;
        else
            return isPalindromeRecursive(str, start + 1, end - 1);
    }
}

int main() {
    char word[100];

    fgets(word, sizeof(word), stdin);
    //posledniot karakter go vcituva nov red, treba da se izbrishe
    word[strlen(word) - 1] = '\0';

    if (isPalindromeRecursive(word, 0, strlen(word)-1)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}