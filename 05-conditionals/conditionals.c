#include "stdbool.h"
#include "string.h"
#include "stdio.h"
#include "stdlib.h"
#include "constants.h"

char* getGrade(int score, int lowLimit, int highLimit, const char grade[], char result[]){
    const char gradeE[] = "Grade E";
    if(score >= lowLimit && score < highLimit){
    strcpy(result, grade);
    
    return result;
    }

    return result;
};

char* conditionalsExample(int score, int attendance){
    int gradesRangeArray[10] = {A_LOW,A_HIGH, B_LOW, B_HIGH, C_LOW, C_HIGH, D_LOW, D_HIGH, E_LOW, E_HIGH};
    const char *gradesArray[5];
    const int length = sizeof(gradesArray);
    gradesArray[0] = "Grade A\0";
    gradesArray[1] = "Grade B\0";
    gradesArray[2] = "Grade C\0";
    gradesArray[3] = "Grade D\0";
    gradesArray[4] = "Grade E\0";

    char *result = malloc(23 * sizeof(char));
    if(result == NULL){
        return NULL;
    }
    result[0] = '\0';

    int i;
    
    int fixedScore = score > 100 ? 100 : score;
    int fixedAttendance = attendance > 100 ? 100 : attendance;
    fixedScore = fixedScore < 0 ? 0 : fixedScore;
    fixedAttendance = fixedAttendance < 0 ? 0 : fixedAttendance;

    const bool haveMinimumAttendance = fixedAttendance < 75 ? true: false;
    const bool haveMinimumScore = fixedScore < 40 ? true : false;

    if(!haveMinimumAttendance || haveMinimumScore){
        const char *failedMessage = haveMinimumAttendance ? "Fail due to attendance\0" : "Fail due to low score\0";
        strcpy(result, failedMessage);
        return result;
    }

    for(i = 0; i < length; i++){
        getGrade(fixedScore, gradesRangeArray[i * 2], gradesRangeArray[(i * 2) + 1], gradesArray[i], result );
        if(!strcmp(result, "")){
            i = length;
        }
    }

    return result;
};

void conditionsExampleResult(int score, int attendance){
    printf(conditionalsExample(score, attendance));
}

    
  