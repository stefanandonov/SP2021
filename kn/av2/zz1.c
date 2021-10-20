//
// Created by Stefan Andonov on 10/20/21.
//

/*
 * The main logic of this program is in the int main function.
 */

#include<stdio.h>
#include<math.h>
#define DAYS_IN_A_WEEK 7

int main() {
    int year = 2021;
    printf("Welcome to FINKI academic year: %d/%d!\n", year, year + 1);
//    int i; //This is a variable of type integer
//    float f; //This is a variable of type float
//    double d;
//    char c;
//    short s;

    /*
     * 3.3 Suma na dva celi broja
     */
    int a; //deklaracija na promenliva
    a = 5; //inicijalizacija na promenliva
    int b = 10; //deklaracija so inicijalizacija
    int c;
    c = a + b;
    printf("The sum of %d and %d is %d\n", a, b, c);


    /*
     * Constants
     */
    const double PI = 3.14;
    printf("%d\n", DAYS_IN_A_WEEK);
    printf("%lf\n", M_PI);

    /*
     * Example 5
     */

    printf("Prva rechenica.\nVtora rechenica.\nTreta rechenica.\n");
    return 0;
}