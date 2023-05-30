#include <stdio.h>

int verificaDiferente(int[],int[],int,int);

int main(){
    int n;
    scanf("%d",&n);
    int n2 = n+1;
    int v1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&v1[i]);
    }
    int v2[n2];
    for(int j=0;j<n2;j++){
        scanf("%d",&v2[j]);
    }
    printf("%d\n", verificaDiferente(v1,v2,n,n2));
}

int verificaDiferente(int v1[],int v2[],int n, int n2){
    int existe;
    for(int i=0;i<n2;i++){
        existe = 0;
        for(int j=0;j<n;j++){
            if(v2[i]==v1[j]){
                existe = 1;
            }
        }
        if(existe == 0){
            return v2[i];
        }
    }
    return 0;
}