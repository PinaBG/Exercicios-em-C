#include <stdio.h>

void contaNotas(int, int[]);
void maiorNota(int, int[]);

int main(){
    int n;
    scanf("%d", &n);
    int v[n];
    for(int i=0; i<n; i++){
        scanf("%i", &v[i]);
    }
    contaNotas(n,v);
    maiorNota(n,v);
}

void contaNotas(int n, int v[]){
    int cont=0;
    int aux = v[n-1];
    for(int i=0;i<n;i++){
        if(v[i]==aux){
            cont++;
        }
    }
    printf("Nota %d, %d vezes\n", aux,cont);
}

void maiorNota(int n, int v[]){
    int maior=0,indice=0;
    for(int i=0;i<n;i++){
        if(v[i]>maior){
            maior=v[i];
        }
    }
    for(int i=0;i<n;i++){
        if(v[i]==maior){
            indice=i;
            break;
        }
    }
    printf("Nota %d, indice %d\n", maior,indice);
}
