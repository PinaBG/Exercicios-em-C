#include <stdio.h>
#include <string.h>

void verificaPalavra(int n,int q,char conjuntoS[n][25],char conjuntoQ[q][25]);

int main(){
    int n;
    scanf("%d",&n);
    char conjuntoS[n][25];
    for(int i=0;i<n;i++){
        scanf("%s", conjuntoS[i]);
    }
    int q;
    scanf("%d",&q);
    char conjuntoQ[q][25];
    for(int j=0;j<q;j++){
        scanf("%s", conjuntoQ[j]);
    }
    verificaPalavra(n,q,conjuntoS,conjuntoQ);
}

void verificaPalavra(int n,int q,char conjuntoS[n][25],char conjuntoQ[q][25]){
    int contador;
    for(int i=0;i<q;i++){
        contador = 0;
        for(int j=0;j<n;j++){
            if(strcmp(conjuntoQ[i],conjuntoS[j])==0){
                contador++;
            }
        }
        printf("%d\n",contador);
    }
}