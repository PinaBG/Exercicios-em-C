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
int filaCheia(struct Filaestatica);
int filaVazia(struct Filaestatica);
void enfileirar(struct Filaestatica*, struct Valor);
struct Valor desenfileirar(struct Filaestatica *);

int main(){
    struct Filaestatica fila;
    int tamanhoFila, numero;
    char operacao;
    scanf("%d", &tamanhoFila);

    fila = criaFila(tamanhoFila);

    while(scanf("\n%c", &operacao) != EOF){
        if(operacao == 'E'){
            scanf("%d", &numero); //enfileirar//
            enfileirar(&fila, criaValor(numero));
        }else if (operacao =='D'){ //desenfileirar//
            if(!filaVazia(fila)){
                printf("%d\n", desenfileirar(&fila).numero);
            }
        }
    }
}

struct Filaestatica criaFila(int tamanhoFila){
    struct Filaestatica f;
    f.valores = (struct Valor*) malloc(tamanhoFila*sizeof(struct Valor));
    f.tamanho = tamanhoFila;
    f.inicio = -1;
    f.final = -1;
    return f;
}

struct Valor criaValor(int numero){
    struct Valor it;
    it.numero = numero;
    return it;
}

int filaCheia(struct Filaestatica f){
    return f.final == f.tamanho-1;
}
int filaVazia(struct Filaestatica f){
    return (f.inicio == -1 && f.final == -1) || f.inicio > f.final;
}

void enfileirar(struct Filaestatica *f, struct Valor novo){
    if(!filaCheia(*f)){
        if(filaVazia(*f)){
            f->inicio++;
        }
        f->final++;
        f->valores[f->final] = novo;
    }
}

struct Valor desenfileirar(struct Filaestatica *f){
    struct Valor valorARemover = {0};
    if(!filaVazia(*f)){
        valorARemover = f->valores[f->inicio];
        if(f->inicio != f->final){
            f->inicio++;
        }
        else{
            f->inicio = -1;
            f->final = -1;
        }
    }
    return valorARemover;
}