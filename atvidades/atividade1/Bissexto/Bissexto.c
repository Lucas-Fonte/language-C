#include <stdio.h>
#include <stdbool.h>

const char* process_leap_year(
    int year 
){
        int SMALL_LEAP_YEAR_MULTIPLIER = 4;
        int SMALL_NON_LEAP_YEAR_MULTIPLIER = 100;
        int LARGE_LEAP_YEAR_MULTIPLIER = 400;

        if((year % SMALL_LEAP_YEAR_MULTIPLIER == 0 && year % SMALL_NON_LEAP_YEAR_MULTIPLIER != 0) 
        || year % LARGE_LEAP_YEAR_MULTIPLIER == 0){
            return "ANO BISSEXTO";
        }

        return "ANO NAO BISSEXTO";
}

int main() {    
    int year;
    scanf("%d", &year);

    printf("%s\n", process_leap_year(year));
    return 0;
}
