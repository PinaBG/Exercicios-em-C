#include <stdio.h>

void contaCarimbadas(int, int, int[], int[]);

int main(){
    int i;
    int ncm[3];
    for(i=0; i<3; i++){
        scanf("%d", &ncm[i]);
    }
    int carimbadas[ncm[1]];
    for(i=0; i<ncm[1]; i++){
        scanf("%d", &carimbadas[i]);
    }
    int compradas[ncm[2]];
    for(i=0; i<ncm[2]; i++){
        scanf("%d", &compradas[i]);
    }
    contaCarimbadas(ncm[1],ncm[2],carimbadas,compradas);
}

void contaCarimbadas(int c, int m, int carimbadas[], int compradas[]){
    int aux=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<c;j++){
            if(compradas[i]==carimbadas[j]){
                carimbadas[j]=-1;
                aux++;
            }
        }
    }
    int total = c - aux;
    printf("%d\n",total);
}