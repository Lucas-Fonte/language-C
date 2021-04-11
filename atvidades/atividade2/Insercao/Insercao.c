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

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            printListOfNumbers(arr, n);
            j = j - 1;
        }
        arr[j + 1] = key;

    }
}


int main() {
    int array_length;
    int i = 0;

    scanf("%d", &array_length);

    int list_of_numbers[array_length];

    for (i=0; i<array_length; i++){
            scanf("%d", &list_of_numbers[i]);
    }

    insertionSort(list_of_numbers, array_length);
    printListOfNumbers(list_of_numbers, array_length);

    return 0;
}