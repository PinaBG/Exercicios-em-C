#include <stdio.h>

void verificaEstrela(int, int[], int*, int);

int main(){
    int contador = 0;
    int abertura;
    scanf("%d",&abertura);
    int n;
    scanf("%d",&n);
    int estrelas[n];
    for(int i=0;i<n;i++){
        scanf("%d",&estrelas[i]);
    }
    verificaEstrela(abertura,estrelas,&contador,n);
    printf("%d\n",contador);
}

void verificaEstrela(int abertura, int estrelas[], int* contador, int n){
    for(int i=0;i<n;i++){
        if((estrelas[i]*abertura)>=40000000){
            *contador += 1;
        }
    }
}