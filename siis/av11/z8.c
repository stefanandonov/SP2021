//
// Created by Stefan Andonov on 12/24/21.
//


#include<stdio.h>
#include<string.h>
#include<ctype.h>
//"   make trim   " --> "make trim"

void trim(char *str) {
    int firstLetterIdx = -1;
    char tmp [100];
    int i;
    for (i = 0; i < strlen(str); i++) {
        if (!isspace(str[i])){
            firstLetterIdx = i;
            break;
        }
    }

    strcpy(tmp, str+firstLetterIdx);
    strcpy(str, tmp);


    for (i=strlen(str)-1;i>=0;i--) {
        if (!isspace(str[i])) {
            str[i+1]='\0';
            break;
        }
    }



    printf("%d\n", firstLetterIdx);

}

int main() {

    char str[100];

    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';

    trim(str);

    puts(str);
    printf("%ld", strlen(str));


    return 0;
}
