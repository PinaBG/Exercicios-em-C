#include <stdio.h>
#include <stdlib.h>

struct Valor{
    int numero;
    struct Valor *anterior;
};

struct PilhaDinamica{
    struct Valor *valores;
    int inicio, final;
    struct Valor *topo;
};

//Prototipos
struct PilhaDinamica* criaPilha();
struct Valor* criaValor(int);
int pilhaVazia(struct PilhaDinamica*);
void mostrarPilha(struct PilhaDinamica*);
void empilhar(struct PilhaDinamica*, struct Valor*);
struct Valor* desempilhar(struct PilhaDinamica *);

int main(){
    struct PilhaDinamica *pilha;
    int tamanhoFila, numero;
    char operacao;
    scanf("%d", &tamanhoFila);

    pilha = criaPilha(tamanhoFila);

    while(scanf("\n%c", &operacao) != EOF){
        if(operacao == 'E'){
            scanf("%d", &numero); //empilhar//
            empilhar(pilha, criaValor(numero));
        }else if (operacao =='D'){ //desempilhar//
            if(!pilhaVazia(pilha)){
                printf("[%d]\n", desempilhar(pilha)->numero);
            }
        }else if (operacao =='M'){ //exbibe topo-base//
            mostrarPilha(pilha);
        }
    }
}

struct PilhaDinamica* criaPilha(){
    struct PilhaDinamica *pilha = (struct PilhaDinamica*) malloc(sizeof(struct PilhaDinamica));;
    if(pilha!=NULL){
        pilha->topo = NULL;
    }
    return pilha;
}

struct Valor* criaValor(int numero){
    struct Valor *valor = (struct Valor*) malloc(sizeof(struct Valor));
    if(valor != NULL){
        valor->numero = numero;
        valor->anterior = NULL;
    }
    return valor;
}

int pilhaVazia(struct PilhaDinamica *pilha){
    return pilha->topo == NULL;
}

void empilhar(struct PilhaDinamica *pilha, struct Valor *novo){
    novo->anterior = pilha->topo;
    pilha -> topo = novo;
}

struct Valor* desempilhar(struct PilhaDinamica *pilha){
    struct Valor *valorARemover = pilha -> topo;
    if(!pilhaVazia(pilha)){
        pilha->topo = valorARemover->anterior;
    }
    return valorARemover;
}

void mostrarPilha(struct PilhaDinamica *pilha){
    struct Valor *valor = pilha->topo;
    while(valor != NULL){
        printf("%d%s", valor->numero, valor->anterior!=NULL?" " : "\n");
        valor = valor->anterior;
    }
}