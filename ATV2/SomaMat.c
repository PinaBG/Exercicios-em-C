#include <stdio.h>

void somaMat(int n, int[n][n], int[n][n]);

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
    somaMat(n,matrizA,matrizB);
}

void somaMat(int n, int matrizA[n][n], int matrizB[n][n]){
    int soma;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            soma = (matrizA[i][j])+(matrizB[i][j]);
            printf("%d", soma);
            if(j<n-1){
                printf(" ");
            }
        }
        printf("\n");
    }
}