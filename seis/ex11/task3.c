//
// Created by Stefan Andonov on 12/30/21.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char str[100];
    char ch;
    int i;

    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; //delete the new line at the end of the string

    int start, len;
    scanf("%d %d", &start, &len);

    //First way
    for (i = start; i < start + len && i < strlen(str); i++) {
        printf("%c", str[i]);
    }

    //Second way
//    char tmp [100];
//    strncpy(tmp, str+start, len);
//    tmp[len]='\0';
//    puts(tmp);

    return 0;
}
