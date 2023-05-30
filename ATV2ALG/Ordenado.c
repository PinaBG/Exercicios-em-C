#include <stdio.h>
#include <string.h>
void verificaOrdem(int, int, int);
int main(){
    int n, m;
    int auxiliar = 0;
    int auxiliar2 = 0;
    while(scanf("%d", &n) != EOF){
        int vetor[n];
        for(int i=0; i<n; i++){
            scanf("%d", &vetor[i]);
        }
        auxiliar2 = 0;
        for(int j=0; j<n; j++){
            if(vetor[j]>=auxiliar2){
                auxiliar2 = vetor[j];
                m = j;
            }
        }

        if(m == n-1){
            auxiliar = 1;
        }else if(n == 0){
            auxiliar = 1;
        }else{
            auxiliar = 0;
        }

        m = 0;
        vetor[n] = 0;
        for(int k=0; k<n; k++){
            if(vetor[k]>=vetor[k+1]){
                m++;
            }
        }
        verificaOrdem(m, n, auxiliar);
    }
}
void verificaOrdem(int m, int n, int auxiliar){
    if(m == n){
        auxiliar = 1;
    }else if(n == 0){
        auxiliar = 1;
    }

    if(auxiliar ==1){
        printf("S\n");
    }else if(auxiliar == 0){
        printf("N\n");
    }
}