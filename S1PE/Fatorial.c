#include <stdio.h>
int main(){
    int numero;
    long long int fatorial;
    scanf("%d", &numero);

    for(fatorial = 1; numero>1; numero--){
        fatorial *= numero;
    }
    printf("%lld\n", fatorial);
}
