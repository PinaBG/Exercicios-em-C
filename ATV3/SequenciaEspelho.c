#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void montaEspelho(int numeros1[], int numeros2[], int n);

int main(){
    int n;
    scanf("%d",&n);
    int *numeros1 = (int*) malloc(n*sizeof(int));
    int *numeros2 = (int*) malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        scanf("%d %d", &numeros1[i], &numeros2[i]);
    }
    montaEspelho(numeros1,numeros2,n);
}

void montaEspelho(int numeros1[], int numeros2[], int n){
    for(int i=0;i<n;i++){
        char *inverte = (char *) malloc(n*sizeof(char));
        char *aux = (char *) malloc(n*sizeof(char));
        for(int j=numeros1[i];j<=numeros2[i];j++){
            printf("%d", j);
            sprintf(aux, "%d", j);
            strcat(inverte,aux);
        }
        for(int k=strlen(inverte);k!=0;k--){
            printf("%c", inverte[k-1]);
        }
        printf("\n");
    }
}