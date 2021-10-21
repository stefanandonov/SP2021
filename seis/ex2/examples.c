//
// Created by Stefan Andonov on 10/21/21.
//

//one-line comment

/*
 * multi-line comment
 */

#include<stdio.h>
#define DAYS_IN_A_WEEK 7
#include<math.h>
int main (){
    //example 1
    printf("Hello world!\n");

    //example 2
    int a; //declaration of a variable
    a = 20; //initialization of a variable
    int b = 5; //declaration and initialization of a variable

    int sumOfTwoNumber = a + b; //name the variable with its real meaning
    printf("The sum of %d and %d is %d\n", a, b, sumOfTwoNumber);

    //example 3
    const double PI_VALUE = 3.14;
//    PI_VALUE = 5; this is not valid, you can't change a const variable
    printf("Days in a week: %d\n", DAYS_IN_A_WEEK);
    printf("The value of PI in math.h is %lf\n", M_PI);

    //result of the printf function is the number of printed charactes
    a = printf("Macedonia %% %lf\n", M_PI);
    printf("%d\n", a);

    printf(" is a word long %d letters.\n", printf("Macedonia"));

    return 0;
}