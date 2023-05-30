#include <stdio.h>

void eliminaRepete(int, int[]);
int verificaContinu(int, int, int[]);

int main(){
    int n;
    scanf("%d", &n);
    int v[n];
    for(int i=0; i<n; i++){
        scanf("%i", &v[i]);
    }
    eliminaRepete(n, v);
}

void eliminaRepete(int n, int v[]){
    int aux,j,cont=0;
    int vaux[n];
    char final[n*2];
    for(int i=0; i<n; i++){
        aux=v[i];
        for(j=0; j<cont;j++){
            if(aux==v[j]){
                break;
            }
        }
        if(j==cont){
            vaux[i]=v[i];
            cont++;
        }else{
            vaux[i]=-1;
        }
    }
    for(int k=0;k<n;k++){
        if(vaux[k]!=-1){
            printf("%d", v[k]);
            if(verificaContinu(k,n,vaux)==1){
                if(k!=n-1){
                    printf(" ");
                }
            }
        }
    }
    printf("\n");
}

int verificaContinu(int k, int n, int v[]){
    for(int i=k+1;i<n;i++){
        if(v[i]!=-1){
            return 1;
        }
    }
    return 0;
}