#include <stdio.h>

void contaFormas(int, int[], int, int);

int main(){
    int n;
    scanf("%d", &n);
    int v[n];
    for(int i=0; i<n; i++){
         scanf("%d", &v[i]);
    }
    int d,m;
    scanf("%d %d", &d, &m);

    contaFormas(n,v,d,m);
}

void contaFormas(int n, int v[], int d, int m){
    int aux=0,aux2=m;
    int formas=0, i;
    for(i=0; i<(n-(m-1)); i++){
        for(int j=i; j<aux2; j++){
            aux += v[j];
        }
        if(aux==d){
            formas++;
        }
        aux2 += 1;
        aux = 0;
    }
    printf("%d\n", formas);
}