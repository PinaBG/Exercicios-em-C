#include <stdio.h>
#include <stdlib.h>

struct Valor{
    int numero;
    struct Valor *proximo;
};

struct FilaDinamica{
    struct Valor *inicio;
    struct Valor *final;
};

//Prototipos
struct FilaDinamica* criaFila();
struct Valor* criaValor(int);
int filaVazia(struct FilaDinamica*);
void mostrarFila(struct FilaDinamica*);
void enfileirar(struct FilaDinamica*, struct Valor*);
struct Valor* desenfileirar(struct FilaDinamica *);

int main(){
    struct FilaDinamica *fila;
    int tamanhoFila, numero;
    char operacao;
    scanf("%d", &tamanhoFila);

    fila = criaFila(tamanhoFila);

    while(scanf("\n%c", &operacao) != EOF){
        if(operacao == 'E'){
            scanf("%d", &numero); //enfileirar//
            enfileirar(fila, criaValor(numero));
        }else if (operacao =='D'){ //desenfileirar//
            if(!filaVazia(fila)){
                printf("<%d>\n", desenfileirar(fila)->numero);
            }
        }else if (operacao =='M'){ //exbibe BASE-TOPO//
            mostrarFila(fila);
        }
    }
}

struct FilaDinamica* criaFila(){
    struct FilaDinamica *fila = (struct FilaDinamica*) malloc(sizeof(struct FilaDinamica));;
    if(fila!=NULL){
        fila->inicio = NULL;
        fila->final = NULL;
    }
    return fila;
}

struct Valor* criaValor(int numero){
    struct Valor *valor = (struct Valor*) malloc(sizeof(struct Valor));
    if(valor != NULL){
        valor->numero = numero;
        valor->proximo = NULL;
    }
    return valor;
}

int filaVazia(struct FilaDinamica *fila){
    return fila->inicio == NULL && fila->final == NULL;
}

void enfileirar(struct FilaDinamica *fila, struct Valor *novo){
    if(filaVazia(fila)){
        fila->inicio = novo;
    }else{
        fila->final->proximo = novo;
    }
    fila->final = novo;
}

struct Valor* desenfileirar(struct FilaDinamica *fila){
    struct Valor *valorARemover = fila -> inicio;
    if(!filaVazia(fila)){
        if(fila->inicio == fila->final){
            fila->final = NULL;
        }
        fila->inicio = valorARemover->proximo;
    }
    return valorARemover;
}

void mostrarFila(struct FilaDinamica *fila){
    struct Valor *valor = fila->inicio;

    while(valor != NULL){
        printf("%d%s", valor->numero,valor->proximo!=NULL?" " : "\n");
        valor = valor->proximo;
    }
}