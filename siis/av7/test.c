//
// Created by Stefan Andonov on 11/22/21.
//

#include <stdio.h>

int main() {
    int i, n, x;

    scanf("%d %d", &n, &x);

    for (i = n - 1; i >= 0; i--) {
        int tmpX = x;


        int flag = 1;
        while (tmpX!=0){
            int lastDigitInX = tmpX%10;
            int tmpI = i;
            while (tmpI!=0){
                int lastDigitInI = tmpI%10;
                if (lastDigitInX==lastDigitInI){
                    flag = 0;
                }
                tmpI/=10;
            }
            tmpX/=10;
        }

        if (flag){
            printf("%d", i);
            break;
        }
    }

    return 0;
}








