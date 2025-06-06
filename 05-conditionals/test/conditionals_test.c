#include "stdio.h"
#include "string.h"
#include "../conditionals.h"
#include "../../utils/utils.h"

void testConditionalsExample(void){
    printf("\n05-Conditionals-test\n");

    const char *result = conditionalsExample(1,10);
    const char expectedResultA[] = "Grade A";
    simpleTest("conditionalsExmaple should return Test Grade A",
        strcmp(result, expectedResultA), 
        expectedResultA);
} 