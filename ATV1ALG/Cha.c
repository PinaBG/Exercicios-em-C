#include <stdio.h>

int verificaPontuacao(int,int[]);

int main(){
    int cha;
    int time[5];
    scanf("%d", &cha);
    scanf("%d %d %d %d %d", &time[0], &time[1], &time[2], &time[3], &time[4]);
    printf("%d\n", verificaPontuacao(cha,time));
}

int verificaPontuacao(int cha,int time[]){
    int count=0;
    for(int i=0;i<5;i++){
        if(time[i]==cha){
            count++;
        }
    }
    return count;
}