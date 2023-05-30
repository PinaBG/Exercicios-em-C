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
void mostrarFila(struct Filaestatica);
void mostrarFilaInvertida(struct Filaestatica);
void empilhar(struct Filaestatica*, struct Valor);
struct Valor desempilhar(struct Filaestatica *);

int main(){
    struct Filaestatica fila;
    int tamanhoFila, numero;
    char operacao;
    scanf("%d", &tamanhoFila);

    fila = criaFila(tamanhoFila);

    while(scanf("\n%c", &operacao) != EOF){
        if(operacao == 'E'){
            scanf("%d", &numero); //empilhar//
            empilhar(&fila, criaValor(numero));
        }else if (operacao =='D'){ //desempilhar//
            if(!filaVazia(fila)){
                desempilhar(&fila);
            }
        }else if (operacao =='T'){ //exbibe topo-base//
            mostrarFilaInvertida(fila);
        }else if (operacao =='B'){ //exibe base-topo//
            mostrarFila(fila);
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

void empilhar(struct Filaestatica *f, struct Valor novo){
    if(!filaCheia(*f)){
        if(filaVazia(*f)){
            f->inicio++;
        }
        f->final++;
        f->valores[f->final] = novo;
    }
}

struct Valor desempilhar(struct Filaestatica *f){
    struct Valor valorARemover = {0};
    if(!filaVazia(*f)){
        valorARemover = f->valores[f->final];
        f->final--;
    }
    return valorARemover;
}

void mostrarFila(struct Filaestatica f){
    if(!filaVazia(f)){
        for(int i=f.inicio; i<=f.final; i++){
            printf("%d\n", f.valores[i].numero);
        }
    }
}

void mostrarFilaInvertida(struct Filaestatica f){
    if(!filaVazia(f)){
        for(int i=f.final; i>=f.inicio; i--){
            printf("%d\n", f.valores[i].numero);
        }
    }
}