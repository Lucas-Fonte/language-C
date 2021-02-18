#include <stdio.h>

float multiply_numbers(
    float list_of_numbers[], 
    int current_index
){
    if(current_index <= 0)
        return 1;   

    return multiply_numbers(list_of_numbers, current_index - 1) * list_of_numbers[current_index - 1];
}

int main() {    
    float first_number, second_number;
    scanf("%f %f", &first_number, &second_number);

    float list_of_numbers[] = {first_number, second_number};
    int length_of_array = 2;

    float response = multiply_numbers(list_of_numbers, length_of_array);
    printf("%1.0f\n", response);

    return 0;
}
