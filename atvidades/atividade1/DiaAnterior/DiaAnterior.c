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

void process_previous_day(
    int day, 
    int month, 
    int year
){
    if(day == 1){
        if(month == 5||month == 7||month == 10||month == 12){
            day = 30;
            month--;
        }
        else if(month  ==  3){
            int is_leap_year = process_leap_year(year);

            if(is_leap_year){
                day = 29;
            } 
            else { 
                day = 28;
            };
            month--;
        }
        else if(month == 1){
            day = 31;
            month = 12;
            year--;
        }
        else{
            day = 31;
            month--;
        }
    }
    else{
        day--;
    }
    printf("%d %d %d\n", day, month, year);
}

int main() {    
    int day, month, year;
    scanf("%d %d %d", &day, &month, &year);

    process_previous_day(day, month, year);
    return 0;
}
