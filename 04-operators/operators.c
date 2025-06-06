#include "stdio.h"
#include "stdbool.h"
#include "stdlib.h"
#include "time.h"

const int  OFFSET_TO_MAX_VALUE = 1;\
const bool IS_DECIMAL = true;
const bool IS_NOT_DECIMAL = false;

int getRandon(int mminValue, int maxValue, bool isDecimal){
    if(mminValue > maxValue){

        return 0;
    }

    const int roof = maxValue - (mminValue) + OFFSET_TO_MAX_VALUE;
    const int offset = mminValue;
    
    srand(time(NULL));
    float randomNumber =  (rand() % roof) - offset;

    printf("pre random number////////////////%f\n",randomNumber);

    if(isDecimal){
        const float decimalPart = getRandon(0,100, IS_NOT_DECIMAL) / 100;
        randomNumber += decimalPart;
    }

    return randomNumber;
}

void operatorsExample(void){
    const float a = getRandon(10,100, IS_NOT_DECIMAL);
    const float b = getRandon(0,23, IS_DECIMAL);
    const float c = getRandon(35,200,IS_NOT_DECIMAL);
    const float d = getRandon(145,300, IS_DECIMAL);
    const float e = getRandon(10,100, IS_NOT_DECIMAL);


    const float firstOperation = b*c;
    const float secondOperation = firstOperation/d;
    const float thirdOperation = a + secondOperation;
    const float fourthOperation = thirdOperation - e;

    const float result = a + ((b*c)/d) - e;
    printf("%f\n%f\n%f\n%f\n%f\n",a,b,c,d,e);
    printf("04-Operators\n\n");
    printf("first operation = %.2f\n"
        "second operation = %.2f\n"
        "third operation = %.2f\n"
        "fourth operation = %.2f\n"
        "assert result = %.2f\n",
        firstOperation,
        secondOperation,
        thirdOperation,
        fourthOperation, 
        result);
};