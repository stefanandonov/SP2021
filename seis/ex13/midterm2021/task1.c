//
// Created by Stefan Andonov on 12/30/21.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

//checks if the str string contains A1c at least twice.
int contains(char *str) {
    char *res = strstr(str, "a1c");
    if (res != NULL) {
        //we have found first occurrence
        //let's check for the second occurrence
        char *res1 = strstr(res + 3, "a1c");
        return res1 != NULL;
    } else {
        //A1c cannot be found in str
        return 0;
    }
}

void toLowerCase(char *str) {
    int i;
    for (i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
}

//void printLowerCase(char *str) {
//    int i;
//    for (i = 0; i < strlen(str); i++) {
//        if (isalpha(str[i])) {
//            printf("%c", tolower(str[i]));
//        } else {
//            printf("%c", str[i]);
//        }
//    }
//    printf("\n");
//}


int main() {
    int i, n;
    scanf("%d\n", &n);

    for (i = 0; i < n; i++) {
        char str[100];
        fgets(str, sizeof(str), stdin);
        str[strlen(str) - 1] = '\0'; //delete the new line at the end of the string

        toLowerCase(str);
        if (contains(str)) {
            puts(str);
        }
    }


    return 0;
}
