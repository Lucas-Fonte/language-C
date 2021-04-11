#include <stdio.h>

int catalan_numbers(int catalan_number){
    if(catalan_number <= 1)
        return 1;   

    int response = 0;
    for(int i = 0; i < catalan_number; i++){
        // cn = 3
        // i = 0
        // 0 = cn(0) * cn(2) + c(1) * c(0) + c(2) * c(0) == 5
        // cn(2) = cn(0) * cn(2 - 0 - 1) + cn(1) * cn(2 - 1  - 1)
            // => (1 * 1) +  ((1 * 1) * (1)) = 2
        // cn(1) = cn(0) * cn(1 - 0 - 1) => 1 * 1 => 1
        // cn(0) = 1
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
