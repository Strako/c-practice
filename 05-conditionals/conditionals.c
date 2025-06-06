#include "stdbool.h"
#include "stdio.h"
#include "constants.h"

const char* conditionalsExample(int score, int attendance){
    int fixedScore = score > 100 ? 100 : score;
    int fixedAttendance = attendance > 100 ? 100 : attendance;
    fixedScore = fixedScore < 0 ? 0 : fixedScore;
    fixedAttendance = fixedAttendance < 0 ? 0 : fixedAttendance;

    const bool haveMinimumAttendance = fixedAttendance < 75 ? true: false;
    const bool haveMinimumScore = fixedScore < 40 ? true : false;

    if(!haveMinimumAttendance || haveMinimumScore){
        const char *failedMessage = haveMinimumAttendance ? "Fail due to attendance" : "Fail due to low score";
        return failedMessage;
    }

    if(fixedScore >= A_LOW && fixedScore <= A_HIGH){

        return "Grade A";
    };

    if(fixedScore >= B_LOW && fixedScore < B_HIGH){

        return "Grade B";
    };

    if(fixedScore >= C_LOW && fixedScore < C_HIGH){

        return "Grade C";
    };

    if(fixedScore >= D_LOW && fixedScore < D_HIGH){

        return "Grade D";
    };

    return "Grade E";
};

    
  