//
// Created by Stefan Andonov on 12/15/21.
//

#include<stdio.h>

int countEights(int n) {
    if (n==0){
        return 0;
    } else {
        int lastDigit = n%10;
        int secondToLastDigit = n/10%10;
        if (lastDigit==8){
            if (secondToLastDigit==8){
                return 2 + countEights(n/10);
            } else {
                return 1 + countEights(n/10);
            }
        } else {
            return countEights(n/10);
        }
    }
}

int main (){
    int n;
    scanf("%d", &n);
    printf("%d", countEights(n));
    return 0;
}

