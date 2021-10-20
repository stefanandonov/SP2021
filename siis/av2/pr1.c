//
// Created by Stefan Andonov on 10/14/21.
//

#include<stdio.h>
#include<math.h>

#define DAYS_IN_A_WEEK 7
int main (){
    const double PI = 3.141592653590;
    int a=4, c=8;//deklaracija
    a = 5; //inicijalizacija
    int b = 6; //deklaracija so inicijalizacija
    c = a + b;
    printf("Sumata na vrednosti %d i %d e %d \n",a, b, c);
    printf("%d", DAYS_IN_A_WEEK);
    return 0;
}