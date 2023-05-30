#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void montaTranscricao(char[]);

int main(){
    char *dna = (char *) malloc(1000000*sizeof(char));
    while(scanf("%s", dna) != EOF){
        montaTranscricao(dna);
    }
}

void montaTranscricao(char dna[]){
    for(int i=0; i<strlen(dna); i++){
        if(dna[i] == 'C'){
            printf("G");
        }else if(dna[i] == 'G'){
            printf("C");
        }else if(dna[i] == 'T'){
            printf("A");
        }else if(dna[i] == 'A'){
            printf("U");
        }
    }
    printf("\n");
}