//
// Created by Stefan Andonov on 10/27/21.
//

#include<stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    printf("%d\n", c>='a' && c<='z'); // 'a'<=c<='z'
    printf("%d", c>='0' && c<='9');
//    printf("%d", 1 <= 'z');
    return 0;
}