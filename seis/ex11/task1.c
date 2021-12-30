//
// Created by Stefan Andonov on 12/30/21.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int countOccurrences (char ch, char * str) {
    int counter = 0;
    while (*str!='\0'){
        if (*str == ch) {
            ++counter;
        }
        str++;
    }

    return counter;
}

int countOccurrences1 (char ch, char * str) {
    int i, counter = 0;
    for (i=0;i<strlen(str);i++) {
        if (str[i]==ch){
            counter++;
        }
    }
    return counter;
}

int countOccurrences2 (char ch, char * str) {
    if (*str=='\0')
        return 0;
    else {
        if (*str==ch)
            return 1 + countOccurrences2(ch, str+1);
        else
            return countOccurrences2(ch, str+1);
    }
}

int main (){
    char str [100];
    char ch;

    fgets(str, sizeof(str), stdin);
    str[strlen(str)-1]='\0'; //delete the new line at the end of the string

    scanf("%c", &ch);

    printf("%d", countOccurrences(ch, str));
    return 0;
}
