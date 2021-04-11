#include <stdio.h>

void printListOfNumbers(int list_of_numbers[], int size){
   int idx;

   for(idx = 0; idx < size; idx++) {
      if(idx == (size - 1)){
        printf("%d\n", list_of_numbers[idx]);
        break;
      }
      printf("%d ", list_of_numbers[idx]);
   }
}

void mergeSort(
    int first_idx,
    int second_idx,
    int list_of_numbers[], 
    int auxiliar_array[],
    int size
){
    if (second_idx <= first_idx) {
        return;     
    }
    int middle_idx = (first_idx + second_idx) / 2;

    mergeSort(first_idx, middle_idx, list_of_numbers, auxiliar_array, size);     
    mergeSort(middle_idx + 1, second_idx, list_of_numbers, auxiliar_array, size);     

    int pointer_left = first_idx;       
    int pointer_right = middle_idx + 1;        
    int third_index;      

    
    for (third_index = first_idx; third_index <= second_idx; third_index++) {
        if (pointer_left == middle_idx + 1) {      
            auxiliar_array[third_index] = list_of_numbers[pointer_right];
            pointer_right++;
        } else if (pointer_right == second_idx + 1) {        
            auxiliar_array[third_index] = list_of_numbers[pointer_left];
            pointer_left++;
        } else if (list_of_numbers[pointer_left] < list_of_numbers[pointer_right]) {        
            auxiliar_array[third_index] = list_of_numbers[pointer_left];
            pointer_left++;
        } else {        
            auxiliar_array[third_index] = list_of_numbers[pointer_right];
            pointer_right++;
        }
    }

    for (third_index = first_idx; third_index <= second_idx; third_index++) {      
        list_of_numbers[third_index] = auxiliar_array[third_index];
    }

    printListOfNumbers(list_of_numbers, size);
}


int main() {
    int array_length;
    scanf("%d", &array_length);

    int i = 0;
    int auxiliar_array[array_length];
    int list_of_numbers[array_length];

    for (i=0; i<array_length; i++){
        scanf("%d", &list_of_numbers[i]);
    }

    printListOfNumbers(list_of_numbers, array_length);
    printListOfNumbers(list_of_numbers, array_length);

    mergeSort(
        0, 
        array_length - 1, 
        list_of_numbers, 
        auxiliar_array,
        array_length
    );

    return 0;
}