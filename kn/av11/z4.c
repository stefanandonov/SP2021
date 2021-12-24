//
// Created by Stefan Andonov on 12/24/21.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int contains(char *str1, char *str2) {
    int i, j, l1 = strlen(str1);
    int l2 = strlen(str2);

    if (l2 > l1)
        return 0;

    for (i = 0; i <= l1 - l2; i++) {
        if (str1[i] == str2[0]) {
            int cnt = 1;
            for (j = 0; j < l2; j++) {
                if (str2[j]!=str1[i+j]) {
                    cnt = 0;
                    break;
                }
            }
            if (cnt)
                return 1;
        }
    }

    return 0;
}

int contains1 (char * str1, char * str2) {
    if (strlen(str2)>strlen(str1))
        return 0;

    char * res = strstr(str1,str2);

    return res!=0;
}

int main() {
    char s1[100];
    char s2[100];

    gets(s1);
    gets(s2);

    if (contains1(s1, s2)) {
        printf("YES");
    } else {
        printf("NO");
    }


    return 0;
}