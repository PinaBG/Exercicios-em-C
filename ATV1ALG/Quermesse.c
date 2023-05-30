#include <stdio.h>

void verificaGanhador(int, int[], int);

int main(){
    int n=-1,contador=1;
    while(n!=0){
        scanf("%d",&n);
        if(n!=0){
            int sequencia[n];
            for(int i=0;i<n;i++){
                scanf("%d", &sequencia[i]);
            }
            verificaGanhador(n, sequencia, contador);
            contador++;
        }
    }
}

void verificaGanhador(int n, int sequencia[], int contador){
    printf("Teste %d\n", contador);
    for(int i=0;i<n;i++){
        if((i+1)==sequencia[i]){
            printf("%d\n\n", sequencia[i]);
        }
    }
}