#include <stdio.h>
#include <string.h>
void verificaOrdem(int, int);
int main(){
    int n, aux, m;
    while(scanf("%d", &n) != EOF){
        int vetor[n];
        for(int i=0; i<n; i++){
            scanf("%d", &vetor[i]);
        }
        aux = 0;
        for(int j=0; j<n; j++){
            if(vetor[j]>=aux){
                aux = vetor[j];
                m = j;
            }
        }
        verificaOrdem(m,n);
    }
}
void verificaOrdem(int m, int n){
    if(m == n-1){
        printf("S\n");
    }else if(n == 0){
        printf("S\n");
    }else{
        printf("N\n");
    }
}