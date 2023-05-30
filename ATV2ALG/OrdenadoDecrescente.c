#include <stdio.h>
#include <string.h>
void verificaOrdem(int, int);
int main(){
    int n,m;
    while(scanf("%d", &n) != EOF){
        int vetor[n];
        m = 0 ;
        for(int i=0; i<n; i++){
            scanf("%d", &vetor[i]);
        }
        vetor[n] = 0;
        for(int j=0; j<n; j++){
            if(vetor[j]>=vetor[j+1]){
                m++;
            }
        }
        verificaOrdem(m,n);
    }
}
void verificaOrdem(int m, int n){
    if(m == n){
        printf("S\n");
    }else if(n == 0){
        printf("S\n");
    }else{
        printf("N\n");
    }
}