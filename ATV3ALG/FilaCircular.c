#include <stdio.h>
#include <stdlib.h>

struct Valor{
    int numero;
};

struct Filaestatica{
    struct Valor *valores;
    int inicio, final;
    int tamanho;
};

//Construtores
struct Filaestatica criaFila(int);
struct Valor criaValor(int);
int filaCheia(struct Filaestatica, int tamanhoFila);
int filaVazia(struct Filaestatica);
void enfileirar(struct Filaestatica*, struct Valor, int tamanhoFila);
struct Valor desenfileirar(struct Filaestatica *, int tamanhoFila);

int main(){
    struct Filaestatica fila;
    int tamanhoFila, numero;
    char op;
    scanf("%d", &tamanhoFila);

    fila = criaFila(tamanhoFila);

    while(scanf("\n%c", &op) != EOF){
        if(op == 'E'){
            scanf("%d", &numero); //enfileirar//
            enfileirar(&fila, criaValor(numero), tamanhoFila);
        }else if (op =='D'){ //desenfileirar//
            if(!filaVazia(fila)){
                printf("%d\n", desenfileirar(&fila, tamanhoFila).numero);
            }
        }
    }
}

struct Filaestatica criaFila(int tamanhoFila){
    struct Filaestatica f;
    f.valores = (struct Valor*) malloc(tamanhoFila*sizeof(struct Valor));
    f.tamanho = tamanhoFila;
    f.inicio = 0;
    f.final = 0;
    return f;
}

struct Valor criaValor(int numero){
    struct Valor it;
    it.numero = numero;
    return it;
}

int filaCheia(struct Filaestatica f, int tamanhoFila){
    return (f.final+1)%tamanhoFila == f.inicio;
}
int filaVazia(struct Filaestatica f){
    return (f.inicio == f.final);
}
void enfileirar(struct Filaestatica *f, struct Valor novo, int tamanhoFila){
    if(!filaCheia(*f,tamanhoFila)){
        f->valores[f->final] = novo;
        f->final = (f->final + 1) % tamanhoFila;
    }
}

struct Valor desenfileirar(struct Filaestatica *f, int tamanhoFila){
    struct Valor valorARemover = {0};
    if(!filaVazia(*f)){
        valorARemover = f->valores[f->inicio];
        f->inicio = (f->inicio + 1) % tamanhoFila;
    }
    return valorARemover;
}