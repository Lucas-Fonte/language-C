#include <stdio.h>
#include<stdbool.h>  

const char* verify_if_array_is_ordered(
    int list_of_numbers[], 
    int size
){

    int idx;
    bool increasing = false;
    bool decreasing = false;

    if(list_of_numbers[0] > list_of_numbers[1]) {
        decreasing = true;
    } else {
        increasing = true;
    }

    for(idx = 0; idx < size; ++idx){
        if(idx == (size - 1)){
            continue;
        }

        if(increasing) {
            if(list_of_numbers[idx]  >= list_of_numbers[idx + 1]){
                return "N";
            }
        } else {
            if(list_of_numbers[idx]  <= list_of_numbers[idx + 1]){
                return "N";
            }
        }
    }

    return "S";
}

int main() {    
    int length_of_array;

    while(scanf("%d", &length_of_array) != EOF){
        int list_of_numbers[length_of_array];
        int i;

        for(i = 0; i < length_of_array; i++){
            scanf("%d", &list_of_numbers[i]);
        }

        const char* response = verify_if_array_is_ordered(list_of_numbers, length_of_array);
        printf("%s\n", response);
    }

    return 0;
}
