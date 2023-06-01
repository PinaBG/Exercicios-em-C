#include <stdio.h>

int main(){
    int termoInicial = 22;
    printf("%d ",termoInicial);
    while(termoInicial != 1){
        if(termoInicial%2==0){
            termoInicial /=2;
            printf("%d ",termoInicial);
        }else{
            termoInicial *= 3;
            termoInicial += 1;
            printf("%d ",termoInicial);
        }
    }
}