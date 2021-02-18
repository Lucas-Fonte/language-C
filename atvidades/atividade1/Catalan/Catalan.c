#include <stdio.h>

int catalan_numbers(int catalan_number){
    if(catalan_number <= 1)
        return 1;   

    int response = 0;
    for(int i = 0; i < catalan_number; i++){
        response += catalan_numbers(i) 
            * catalan_numbers(catalan_number - i - 1);
    }
    
    return response;
}

int main() { 
    int stopping_point = 0;
    while (stopping_point != -1){
        scanf("%d", &stopping_point);

        if(stopping_point != -1) {
            int response = catalan_numbers(stopping_point);
            printf("%d\n", response);
        }
    }



    return 0;
}
