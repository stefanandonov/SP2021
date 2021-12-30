//
// Created by Stefan Andonov on 12/29/21.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int isVowel (char c) {
    c = tolower(c);
    return c=='a' || c=='e' || c=='u' || c=='o' || c=='i';
}

int main (){
    FILE * f = fopen("/Users/stefanandonov/CLionProjects/SP2021/kn/av12/data/text.txt", "r");

    char curr;
    int vowels = 0, consonants = 0;
    while ((curr = fgetc(f))!=EOF) {
        if (isalpha(curr)){
            if (isVowel(curr)){
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(f);

    printf("Odnos samoglaski/soglaski: %d/%d = %.2f", vowels, consonants, (float) vowels/consonants);
    return 0;
}