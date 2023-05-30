#include <stdio.h>

void somaMat(int n, int[n][n]);

int main(){
    int n;
    scanf("%d", &n);
    int matriz[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    somaMat(n,matriz);
}

void somaMat(int n, int matriz[n][n]){
    int soma=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i>j){
                soma += matriz[i][j];
            }
        }
    }
    printf("%d\n", soma);
}