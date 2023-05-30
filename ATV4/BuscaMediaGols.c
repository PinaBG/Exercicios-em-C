#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Infos{
    char nomeTime[51];
    int qtdAtletas;
    char jogadores[51][51];
    int gols[51];
    int mediaGols;
};

struct Infos Gtim(char*, int, char**, int*, int*);
void montaJogador(struct Infos*, int n);

int main(){
    int n;
    scanf("%d", &n);
    struct Infos *time;

    time = (struct Infos*) malloc(n*sizeof(struct Infos));

    for(int i=0;i<n;i++){
        time[i].mediaGols = 0;
        scanf("%s", time[i].nomeTime);
        scanf("%d", &time[i].qtdAtletas);
        for(int j=0;j<time[i].qtdAtletas;j++){
            scanf("%s %d", time[i].jogadores[j], &time[i].gols[j]);
            time[i].mediaGols += time[i].gols[j];
        }
        time[i].mediaGols = time[i].mediaGols/time[i].qtdAtletas;
    }
    montaJogador(time, n);
}

void montaJogador(struct Infos *time, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<time[i].qtdAtletas;j++){
            if(time[i].gols[j]>time[i].mediaGols){
                printf("[%s] %s\n", time[i].nomeTime, time[i].jogadores[j]);
            }
        }
    }
}