#include <stdio.h>

void contaVetor(int, int[], int, int*);

int main(){
    int n,k,contador=0;
    scanf("%d", &n);
    int v[n];
    for(int i=0; i<n; i++){
        scanf("%i", &v[i]);
    }
    scanf("%d", &k);
    contaVetor(n, v, k, &contador);
    printf("%d\n", contador);
}

void contaVetor(int n, int v[], int k, int* contador){
    for(int i=0; i<n; i++){
        if(k<=v[i]){
            *contador+=1;
        }
    }
}