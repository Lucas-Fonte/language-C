#include <stdio.h>
#include<stdbool.h> 

bool binarySearch(
    int list_of_numbers[], 
    int left_pointer, 
    int right_pointer, 
    int search_value)
{

    int middle;
    int f = 0;

    if(left_pointer<=right_pointer){

        middle = (left_pointer+right_pointer)/2;
        if(list_of_numbers[middle] == search_value){
            return true;
        }
        else if(list_of_numbers[middle] > search_value){
            for(f=middle; f<=right_pointer; f++){
                if(f == right_pointer){
                    printf("%d\n", list_of_numbers[f]);
                }
                else{
                    printf("%d ", list_of_numbers[f]);
                }
            }

            return binarySearch(list_of_numbers, left_pointer, middle-1, search_value);
        }
        else {
            for(f=left_pointer; f<=middle; f++){
                if(f == middle){
                    printf("%d\n", list_of_numbers[f]);
                }
                else{
                    printf("%d ", list_of_numbers[f]);
                }
            }

            return binarySearch(list_of_numbers, middle+1, right_pointer, search_value);
        }
    }

    return false;
}

int main() {
    int array_length;
    int search_value;

    int i = 0;
    bool search_value_found;

    scanf("%d", &array_length);

    int list_of_numbers[array_length];

    for (i=0; i<array_length; i++){
            scanf("%d", &list_of_numbers[i]);
        }

    while(scanf("%d", &search_value) != EOF){


        search_value_found = binarySearch(list_of_numbers, 0, array_length-1, search_value);

        if(search_value_found){
            printf("VALOR %d LOCALIZADO NA COLECAO\n", search_value);
        }
        else{
            printf("VALOR %d NAO LOCALIZADO NA COLECAO\n", search_value);
        }

    }

    return 0;
}