#include <stdio.h>
int main(){
    int a;
    int b;
    int divisao;
    int resto;
    scanf("%d %d", &a, &b);
    divisao = a/b;
    resto = a%b;
    printf("%d %d\n", divisao, resto);
}