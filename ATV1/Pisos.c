#include <stdio.h>

void pisos(int, int, int*, int*);

int main(){
    int largura;
    int comprimento;
    int tipo1;
    int tipo2;

    scanf("%d %d", &largura, &comprimento);
    pisos(largura, comprimento, &tipo1, &tipo2);
    printf("%d\n", tipo1);
    printf("%d\n", tipo2);
    return 0;
}

void pisos(int largura, int comprimento, int *tipo1, int *tipo2){
    *tipo1 = comprimento * largura + ((comprimento-1)*(largura-1));
    *tipo2 = (((comprimento-1)*2)+((largura-1)*2));
}