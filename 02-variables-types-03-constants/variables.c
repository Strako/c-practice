#include <stdio.h>
//constant declared with define syntax (not use costant keyword or explicit type)
#define JOSE_NAME "Jose ricardo carmona sanchez"

void variablesExample(void){
    //constant declared with keyword and explicit type
    const char ARMANDO_NAME[] = "Armando isai hernandez ibarra";
    

    float age = 18;
    age = age*2.5;

    printf("02-variables and types, 03-constants\n\n");

    printf("First constant: %s \nSecond constant (define) %s\n", ARMANDO_NAME, JOSE_NAME);

    printf("Age: %f\n", age);

    printf("Size of char = %lu bytes \n", sizeof(char));
    printf("Size of int = %lu bytes \n", sizeof(int));
    printf("Size of short = %lu bytes \n", sizeof(short));
    printf("Size of long = %lu bytes \n", sizeof(long));
    printf("Size of float = %lu bytes \n", sizeof(float));
    printf("Size of double = %lu bytes \n", sizeof(double));
    printf("Size of long double = %lu bytes \n", sizeof(long double));
}