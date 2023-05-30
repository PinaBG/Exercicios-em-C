#include <stdio.h>

void contaCarimbadas(int, int, int[], int[]);

int main(){
    int n=0,m=0;
    scanf("%d",&n);
    scanf("%d",&m);
    int v[n];
    for(int i=0; i<n; i++){
        v[i]=i+1;
    }
    int compradas[m];
    for(int j=0; j<m; j++){
        scanf("%d", &compradas[j]);
    }
    contaCarimbadas(n,m,v,compradas);
}

void contaCarimbadas(int n, int m, int v[], int compradas[]){
    int aux=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(compradas[i]==v[j]){
                v[j]=-1;
                aux++;
            }
        }
    }
    int total = n - aux;
    printf("%d\n",total);
}