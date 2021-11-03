

#include<stdio.h>
int main (){
    long embg;
    scanf("%ld", &embg);
    printf("%ld\n", embg);
    int date = embg/1000000;
    int day = date / 100000;
    int month = date / 1000 % 100;
    //int year = date % 1000 + 2000;?????
    int year = date % 1000;
    if (year>=900) {
        year+=1000;
    } else {
        year+=2000;
    }

    printf("%02d.%02d.%d", day, month, year);
    return 0;

//    int x = 5;
//
//    if (x==5) {
//        ++x;
//        printf("%d", x);
//    }else {
//        --x;
//    }
}