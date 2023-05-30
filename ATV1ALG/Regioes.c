#include <stdio.h>

int calculaRegiao(int);

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", calculaRegiao(n));
}

int calculaRegiao(int n){
    return 1+(0.5*n*(n+1));
}