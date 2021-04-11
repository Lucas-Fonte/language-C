#include <stdio.h>

void bubblerSort(float *v, int n){
    int i, j, aux;

    for(i=0; i<n-1; i++){

        for(j=0; j<n-1-i; j++){

            if (v[j] > v[j+1]){

                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

const char* buscaBin(float *v, int esq, int dir, int x){

    int meio;

     bubblerSort(v, dir+1);

    if(esq<=dir){

        meio = (esq+dir)/2;
        if(v[meio] == x){
            return "S";
        }
        else if(v[meio] > x){
            return buscaBin(v, esq, meio-1, x);
        }
        else {
            return buscaBin(v, meio+1, dir, x);
        }
    }

    return "N";
}

int main() {
    int LENGHT;
    float SEARCH_VALUE;
    int a, b, c, d, f;

    int i = 0;

    scanf("%d", &LENGHT);

    float ARRAY1[LENGHT];

    for (i=0; i<LENGHT; i++){
            scanf("%d", &c);
            scanf("%d", &d);
            ARRAY1[i] = c/d;
        }


    while(scanf("%d", &a) != EOF){
        scanf("%d", &b);
        SEARCH_VALUE = a/b;
        printf("%s\n", buscaBin(ARRAY1 , 0, LENGHT-1, SEARCH_VALUE));
    }

    return 0;
}