#include <stdio.h>

void quantidadeDeCedulas(int, int*, int*, int*, int*, int*, int*, int*);

int main(){
    int valorCheio;
    int nota100;
    int nota50;
    int nota20;
    int nota10;
    int nota5;
    int nota2;
    int nota1;

    scanf("%d", &valorCheio);
    quantidadeDeCedulas(valorCheio, &nota100, &nota50, &nota20, &nota10, &nota5, &nota2, &nota1);
    printf("R$%d.00\n%d nota(s) de R$100.00\n%d nota(s) de R$50.00\n%d nota(s) de R$20.00\n%d nota(s) de R$10.00\n%d nota(s) de R$5.00\n%d nota(s) de R$2.00\n%d nota(s) de R$1.00\n"
    , valorCheio, nota100, nota50, nota20, nota10, nota5, nota2, nota1);
    return 0;
}
void quantidadeDeCedulas(int valorCheio, int*nota100, int*nota50, int*nota20, int*nota10, int*nota5, int*nota2, int*nota1){
    *nota100 = valorCheio/100;
    valorCheio = valorCheio%100;
    *nota50 = valorCheio/50;
    valorCheio = valorCheio%50;
    *nota20 = valorCheio/20;
    valorCheio = valorCheio%20;
    *nota10 = valorCheio/10;
    valorCheio = valorCheio%10;
    *nota5 = valorCheio/5;
    valorCheio = valorCheio%5;
    *nota2 = valorCheio/2;
    valorCheio = valorCheio%2;
    *nota1 = valorCheio;
}