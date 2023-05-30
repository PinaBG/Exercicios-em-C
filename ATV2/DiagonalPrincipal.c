#include <stdio.h>

void diagonal(int n, int[n][n], char c);

int main(){
    char c;
    scanf("%c", &c);
    int n;
    scanf("%d", &n);
    int v[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &v[i][j]);
        }
    }
    diagonal(n,v, c);
}

void diagonal(int n, int v[n][n], char c){
    int aux=0;
    float soma=0;
    float media;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==(aux)){
                soma+=v[i][j];
                aux++;
                break;
            }
        }
    }
    if(c=='S'){
        printf("%0.1f\n", soma);
    }else{
        media=soma/n;
        printf("%0.1f\n", media);
    }
}