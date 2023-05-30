#include <stdio.h>

int divisao(int, int);
int resto(int, int);

int main()
{
    long int dividendo, divisor;

    scanf("%ld %ld", &dividendo, &divisor);
    printf("%d %d\n", divisao(dividendo, divisor), resto(dividendo, divisor));

    return 0;
}

int divisao(int dividendo, int divisor){
    if(dividendo<divisor){
        return 0;
    }
    return 1 + divisao(dividendo-divisor, divisor);
}

int resto(int dividendo, int divisor){
    if(dividendo<divisor){
        return dividendo;
    }
    return resto(dividendo-divisor, divisor);
}