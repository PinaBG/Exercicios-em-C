#include <stdio.h>
int main(){
    int numero;
    int inicio=0;
    int maior=0;
    scanf("%d", &numero);
    while(numero>=0){
        if(maior<numero){
            maior=numero;
            inicio=1;
        }
        scanf("%d", &numero);
    }

    if(inicio!=0){
        printf("%d\n", maior);
    }else{
        printf("nenhum numero informado\n");
    }
}