#include<stdio.h>


// void printListOfNumbers(int list_of_numbers[], int size){
void printListOfNumbers(int list_of_numbers[], int size, int position){
   int idx;
   
   printf("Position %d - ", position);
   for(idx = 0; idx < size; idx++) {
      if(idx == (size - 1)){
        printf("%d\n", list_of_numbers[idx]);
        break;
      }
      printf("%d ", list_of_numbers[idx]);
   }
}

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 

int partition (int arr[], int low, int high, int size) 
{ 
    int pivot = arr[high];
    printListOfNumbers(arr, size, 3);
    int aux;
    int i = (low - 1); 
 
    // for (int j = low; j <= high - 1; j++) 
    for (int j = low; j < high; j++) 
    { 
        if (arr[j] < pivot) 
        { 
            i++; 
            aux = arr[j];
            arr[j] = arr[i];
            printListOfNumbers(arr, size, 4);
            arr[i] = aux;
            // swap(&arr[i], &arr[j]); 
            // printListOfNumbers(arr, size, 5);
        } 
        printListOfNumbers(arr, size, 4);
    } 
    printListOfNumbers(arr, size, 6);
    aux = arr[high];
    arr[high] = arr[i + 1];
    arr[i + 1] = aux;

    // swap(&arr[i + 1], &arr[high]); 
    // printListOfNumbers(arr, size, 7);
    return (i + 1); 
} 

void quickSort(int arr[], int low, int high, int size) 
{ 
    if (low < high) 
    { 
        int pi = partition(arr, low, high, size); 
        printListOfNumbers(arr, size, 2);
        quickSort(arr, low, pi - 1, size); 
        printListOfNumbers(arr, size, 2);
        quickSort(arr, pi + 1, high, size); 
    } 
} 

int main(){
    int array_length;
    scanf("%d", &array_length);

    int i = 0;
    int auxiliar_array[array_length];
    int list_of_numbers[array_length];

    for (i=0; i<array_length; i++){
        scanf("%d", &list_of_numbers[i]);
    }

//    printListOfNumbers(list_of_numbers, array_length, 1);
   quickSort(list_of_numbers, 0, array_length-1, array_length);
   printListOfNumbers(list_of_numbers, array_length, 0);
   printListOfNumbers(list_of_numbers, array_length, 0);

   return 0;
}