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

void bubbleSort(
    int list_of_numbers[], 
    int size
){
    int first_idx;
    int second_idx;
    int swap_count = 0;
    int current_swap;    

    printListOfNumbers(list_of_numbers, size);
    for (first_idx = 0 ; first_idx < size - 1; first_idx++)
    {
        for (second_idx = 0 ; second_idx < size - first_idx - 1; second_idx++)
        {
            if (list_of_numbers[second_idx] > list_of_numbers[second_idx+1]){
                current_swap = list_of_numbers[second_idx];
                list_of_numbers[second_idx] = list_of_numbers[second_idx+1];
                list_of_numbers[second_idx+1] = current_swap;
                printListOfNumbers(list_of_numbers, size);
                swap_count += 1;
            }
        }
    }

    printListOfNumbers(list_of_numbers, size);
    printf("Trocas: %d\n", swap_count);
}


int main() {
    int array_length;
    int i = 0;


    scanf("%d", &array_length);

    int list_of_numbers[array_length];

    for (i=0; i<array_length; i++){
            scanf("%d", &list_of_numbers[i]);
    }

    bubbleSort(list_of_numbers, array_length);

    return 0;
}