#include <stdio.h>
#include <time.h>

int process_leap_year(
    int year 
){
        int SMALL_LEAP_YEAR_MULTIPLIER = 4;
        int SMALL_NON_LEAP_YEAR_MULTIPLIER = 100;
        int LARGE_LEAP_YEAR_MULTIPLIER = 400;

        if((year % SMALL_LEAP_YEAR_MULTIPLIER == 0 && year % SMALL_NON_LEAP_YEAR_MULTIPLIER != 0) 
        || year % LARGE_LEAP_YEAR_MULTIPLIER == 0){
            return 1;
        }

        return 0;
}

const char* process_dates(
    int day, 
    int month, 
    int year
){
    // Base conditions
    if(year < 1582) {
        return "DATA INVALIDA";
    }
    if(month > 12 || month < 1) {
        return "DATA INVALIDA";
    }
    if(day > 31 || day < 1) {
        return "DATA INVALIDA";
    }

    int is_leap_year = process_leap_year(year);

    // special conditions   
    if (month == 2){
        if (is_leap_year && day == 29) {
            return "DATA VALIDA";
        }
        else if(day > 28) 
        {
            return "DATA INVALIDA";
        }
    }

    if (month == 4 || month == 6 || month == 9 || month == 11){
        if (day > 30){
            return "DATA INVALIDA";
        }
    }


    return "DATA VALIDA";
}

int main() {    
    int day, month, year;
    scanf("%d %d %d", &day, &month, &year);

    printf("%s\n", process_dates(day, month, year));
    return 0;
}
