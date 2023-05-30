#include <stdio.h>
#include <stdlib.h>

struct Item
{
    int chave;
};

struct Filaestatica
{
    struct Item *itens;
    int inicio, final;
    int tamanho;
};

struct Filaestatica criafila(int);
struct Item criaitem(int);
int filaCheia(struct Filaestatica);
int filaVazia(struct Filaestatica);
void mostrarFila(struct Filaestatica);
void enfileirar(struct Filaestatica*, struct Item);
struct Item desenfileirar(struct Filaestatica *);

int main()
{
    struct Filaestatica fila;
    int n, chave;
    char op;
    scanf("%d", &n);

    fila = criafila(n);

    while(scanf("\n%c", &op) != EOF)
    {
        if(op == 'E')
        {
            scanf("%d", &chave); //enfileirar//
            enfileirar(&fila, criaitem(chave));
        }
        else if (op =='D') //desenfileirar//
        {
            if(!filaVazia(fila))
            {
                printf("%d\n", desenfileirar(&fila).chave);
            }
        }
    }
}

struct Filaestatica criafila(int n)
{
    struct Filaestatica f;
    f.itens = (struct Item*) malloc(n*sizeof(struct Item));
    f.tamanho = n;
    f.inicio = -1;
    f.final = -1;
    return f;
}

struct Item criaitem(int chave)
{
    struct Item it;
    it.chave = chave;
    return it;
}

int filaCheia(struct Filaestatica f)
{
    return f.final == f.tamanho-1;
}
int filaVazia(struct Filaestatica f)
{
    return (f.inicio == -1 && f.final == -1) || f.inicio > f.final;
}
void mostrarFila(struct Filaestatica f)
{
    int i;
    if(!filaVazia(f))
    {
        for(i=f.inicio; i<=f.final; i++)
        {
            printf("%d%s", f.itens[i].chave, i!=f.final?" " : "\n");
        }
    }
}

void enfileirar(struct Filaestatica *f, struct Item novo)
{
    if(!filaCheia(*f))
    {
        if(filaVazia(*f))
        {
            f->inicio++;
        }
        f->final++;
        f->itens[f->final] = novo;
    }
}

struct Item desenfileirar(struct Filaestatica *f)
{
    struct Item it = {0};
    if(!filaVazia(*f))
    {
        it = f->itens[f->inicio];
        if(f->inicio != f->final)
        {
            f->inicio++;
        }
        else
        {
            f->inicio = -1;
            f->final = -1;
        }
    }
    return it;
}