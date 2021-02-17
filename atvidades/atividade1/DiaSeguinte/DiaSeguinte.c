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

void process_next_day(
    int day, 
    int month, 
    int year
){
    if((month == 4||month == 6||month == 9||month == 11) && day == 30){
        day = 1;
        month++;
    }
    else if(month == 12 && day == 31){
        day = 1;
        month = 1;
        year++;
    }
    else if(month == 2){
        int is_leap_year = process_leap_year(year);


        if(day == 28){
            if(is_leap_year && day == 28){
                day++;
            } else {
                day = 1;
                month++;
            }
        } else if(day == 29){ 
            day = 1;
            month++;
        }
        else { 
            day++;
        };
    }
    else if(day == 31){
        day = 1;
        month++;
    }
    else{
        day++;
    }
    printf("%d %d %d\n", day, month, year);
}

int main() {    
    int day, month, year;
    scanf("%d %d %d", &day, &month, &year);

    process_next_day(day, month, year);
    return 0;
}
