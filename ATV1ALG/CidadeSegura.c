#include <stdio.h>

void calculaSeguranca(int n, int n2, int cameras[n2][n2]);

int main(){
    int n;
    scanf("%d", &n);
    int n2 = n+1;
    int cameras[n2][n2];
    for(int i=0; i<n2; i++){
        for(int j=0; j<n2; j++){
            scanf("%d", &cameras[i][j]);
        }
    }
    calculaSeguranca(n, n2, cameras);
}

void calculaSeguranca(int n,int n2, int cameras[n2][n2]){
    int seguranca;
    int esquinaSegura[n][n];
    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            seguranca = 0;
            if(cameras[i][j] == 1){
                seguranca++;
            }
            if(cameras[i+1][j] == 1){
                seguranca++;
            }
            if(cameras[i][j+1] == 1){
                seguranca++;
            }
            if(cameras[i+1][j+1] == 1){
                seguranca++;
            }
            if(seguranca>=2){
                esquinaSegura[i][j] = 1;
            }
            if(seguranca<2){
                esquinaSegura[i][j] = 0;
            }
        }
    }
    for(int k=0; k<n; k++){
        for(int l=0; l<n; l++){
            if(esquinaSegura[k][l] == 1){
                printf("S");
            }
            else{
                printf("U");
            }
        }
        printf("\n");
    }
}