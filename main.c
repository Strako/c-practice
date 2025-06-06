#include "stdio.h"
#include "./utils/utils.h"
#include "./02-variables-types-03-constants/variables.h"
#include "./04-operators/operators.h"
#include "./05-conditionals/conditionals.h"
#include "./05-conditionals/test/conditionals_test.h"


int main(void){
    printSeparator();
    printf("02-variables and types, 03-constants\n\n");
    variablesExample();

    printSeparator();
    printf("04-Operators\n\n");
    operatorsExample();

    printSeparator();
    printf("05-Conditionals\n\n");
    conditionalsExample(65, 92);
    testConditionalsExample();
} 