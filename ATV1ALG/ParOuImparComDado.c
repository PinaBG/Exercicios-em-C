#include <stdio.h>

void calculaPontos(int*,int*,int, int);

int main(){
    int vitoria;
    scanf("%d", &vitoria);
    int rolagem;

    int pSheldon=0;
    int pLeonard=0;

    int rodada = 0;

    while(pSheldon!=vitoria && pLeonard!=vitoria){
        scanf("%d", &rolagem);
        calculaPontos(&pSheldon,&pLeonard,rolagem, rodada);
        rodada++;
    }
    if(pSheldon==vitoria){
        printf("Sheldon\n");
    }else{
        printf("Leonard\n");
    }
}

void calculaPontos(int* pSheldon,int* pLeonard,int rolagem,int rodada){
    if(rodada%2==0){
        if(rolagem%2==0 && *pSheldon%2==0){
            *pSheldon+=1;
        }else if(rolagem%2!=0 && *pSheldon%2!=0){
            *pSheldon+=1;
        }else{
            if(*pSheldon>0){
                *pSheldon-=1;
            }
        }
    }else{
        if(rolagem%2==0 && *pLeonard%2==0){
            *pLeonard+=1;
        }else if(rolagem%2!=0 && *pLeonard%2!=0){
            *pLeonard+=1;
        }else{
            if(*pLeonard>0){
                *pLeonard-=1;
            }
        }
    }
}