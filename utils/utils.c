#include "stdio.h"
#include "stdbool.h"

#define SCENARIO "SCENARIO: "

void printSeparator(void){
    const char SEPARATOR[] = "________________________________________________________________\n\n";
        printf(SEPARATOR);
    };

void simpleTest(char scenario[], bool condition, const char expected){
    if(condition){
        printf("✔️ - %s%s\n", SCENARIO, scenario);

        return;
    }
    char errorMessage[100];
    snprintf(errorMessage, sizeof(errorMessage), "Expected: %s", expected);
 
    printf("🗙 - %s%s%s\n", SCENARIO, scenario, errorMessage);
    
    return;
}