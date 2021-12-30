//
// Created by Stefan Andonov on 12/30/21.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void clean (char * str) {
    int i,j=0;
    for (i=0;i<strlen(str);i++) {
        if (isalpha(str[i])) {
            if (isupper(str[i])) {
                str[j]=tolower(str[i]);
            }  else {
                str[j]=toupper(str[i]);
            }
            ++j;
        }
    }

    str[j]='\0';
}

int main (){
    char str[100];

    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; //delete the new line at the end of the string

    clean(str);

    puts(str);

    return 0;
}
