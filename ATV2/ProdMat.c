#include <stdio.h>

void prodMat(int n, int[n][n], int[n][n]);

int main(){
    int n;
    scanf("%d", &n);
    int matrizA[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &matrizA[i][j]);
        }
    }
    int matrizB[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &matrizB[i][j]);
        }
    }
    prodMat(n,matrizA,matrizB);
}

void prodMat(int n, int matrizA[n][n], int matrizB[n][n]){
    int soma;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            soma =0;
            for(int k=0; k<n; k++){
                soma += matrizA[i][k]*matrizB[k][j];
            }
            if(j!=n-1){
                printf("%d ",soma);
            }else{
                printf("%d\n",soma);
            }
        }
    }
}