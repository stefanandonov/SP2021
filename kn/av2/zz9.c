//
// Created by Stefan Andonov on 10/20/21.
//

#include<stdio.h>
int main (){
    char c;
    scanf("%c", &c);
    printf("%c\n", c - 'A' + 'a'); //'c' - 65 + 97
    printf("%c\n", c + 32); //'c' - 65 + 97
    return 0;
}