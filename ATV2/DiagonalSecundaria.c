#include <stdio.h>

void diagonal(int n, int[n][n]);

int main(){
    int n;
    scanf("%d", &n);
    int v[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &v[i][j]);
        }
    }
    diagonal(n,v);
}

void diagonal(int n, int v[n][n]){
    int aux = n;
    for(int i=0;i<n;i++){
        for(int j=n;j>-1;j--){
            if(j==(aux-1)){
                printf("%d\n", v[i][j]);
                aux--;
                break;
            }
        }
    }
}