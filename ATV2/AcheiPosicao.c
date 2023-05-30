#include <stdio.h>

void achaPosicao(int, int[], int m, int[]);

int main(){
    int n=0;
    scanf("%d", &n);
    int v[n];
    for(int i=0; i<n; i++){
        scanf("%i", &v[i]);
    }
    int m=0;
    scanf("%d", &m);
    int busca[m];
    for(int j=0; j<m; j++){
        scanf("%i", &busca[j]);
    }
    achaPosicao(n,v,m,busca);
}

void achaPosicao(int n, int v[], int m, int busca[]){
    int aux;
    for(int i=0;i<m;i++){
        aux=busca[i];
        for(int j=0; j<n; j++){
            if(aux==v[j]){
                printf("%d\n",j);
                break;
            }else if(j==n-1){
                printf("-1\n");
            }
        }
    }
}