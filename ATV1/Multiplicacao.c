#include <stdio.h>

long int multiplicacao(long int, long int);

int main(){
    long int multiplicador;
    long int multiplicando;

    scanf("%ld %ld", &multiplicando, &multiplicador);
    long int produto = multiplicacao(multiplicando, multiplicador);
    printf("%ld\n", produto);
    return 0;
}

long int multiplicacao(long int B, long int A){
    if(A == 0){
        return 0;
    }
    return B+(multiplicacao(A-1,B));
}