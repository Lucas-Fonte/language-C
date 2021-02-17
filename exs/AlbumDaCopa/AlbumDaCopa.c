#include <stdio.h>

int process_world_cup_sticker_album(
    int album_total_stickers, 
    int amount_missing_stickers, 
    int amount_bought_stickers,
    int missing_stickers[],
    int bought_stickers[]
){
        int i, k;
        for(k = 0; k < amount_bought_stickers; ++k){
            for(i = 0; i < amount_missing_stickers; ++i){
                if(bought_stickers[k] == missing_stickers[i]){
                    --amount_missing_stickers;
                }
            }
        }

        return amount_missing_stickers;
}

int main() {    
    int album_total_stickers, amount_missing_stickers, amount_bought_stickers;

    scanf("%d %d %d", &album_total_stickers,  &amount_missing_stickers, &amount_bought_stickers);
    int missing_stickers[amount_missing_stickers];
    int bought_stickers[amount_bought_stickers];

    // printf("\nalbum_total_stickers: %d \n", album_total_stickers);
    // printf("amount_missing_stickers: %d \n", amount_missing_stickers);
    // printf("amount_bought_stickers: %d \n\n", amount_bought_stickers);

    // fill missing stickers array
    for(int i = 0; i < amount_missing_stickers; ++i){
        scanf("%d", &missing_stickers[i]);
        // printf("missing_sticker[%d]: %d \n", i, missing_stickers[i]);
    }

    // fill bought stickers array
    for(int k = 0; k < amount_bought_stickers; ++k){
        scanf("%d", &bought_stickers[k]);
        // printf("bought_stickers[%d]: %d \n", k, bought_stickers[k]);
    }
    
    int result = process_world_cup_sticker_album(
        album_total_stickers,
        amount_missing_stickers,
        amount_bought_stickers,
        missing_stickers,
        bought_stickers
    );


    // printf("result: %d\n", result);
    printf("%d\n", result);
    return 0;
}
