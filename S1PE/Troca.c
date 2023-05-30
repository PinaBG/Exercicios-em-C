#include <stdio.h>
int main(){
    long long int a;
    long long int aux;
    long long int b;
    scanf("%lld %lld", &a, &b);
    aux = a;
    a = b;
    b = aux;
    printf("%lld %lld\n", a, b);
}