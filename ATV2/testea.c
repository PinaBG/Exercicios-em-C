#include <stdio.h>

void eliminaRepete(int, int[]);

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
            if(vaux[k+1]!=-1){
                if(k!=n-1){
                    printf(" ");
                }
            }
        }
    }
    printf("\n");
}