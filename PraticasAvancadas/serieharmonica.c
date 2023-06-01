#include <stdio.h>

int main(){
    int nTermos;
    scanf("%d",&nTermos);

    float serieHarmonica = 0;
    for(float i=1;i<=nTermos;i++){
        serieHarmonica += (1/i);
    }

    printf("%.3f", serieHarmonica);
}