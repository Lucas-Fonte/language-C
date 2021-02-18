#include <stdio.h>

int subtract_numbers(
    int list_of_numbers[], 
    int current_index
){
    if(current_index <= 0)
        return 0;   

    return subtract_numbers(list_of_numbers, current_index - 1) - list_of_numbers[current_index - 1];
}

int main() {    
    int first_number, second_number;
    scanf("%d %d", &first_number, &second_number);

    if(first_number > 0){
        first_number = first_number * (-1);
    }
    int list_of_numbers[] = {first_number, second_number};
    int length_of_array = 2;

    int response = subtract_numbers(list_of_numbers, length_of_array);
    printf("%d\n", response);

    return 0;
}
