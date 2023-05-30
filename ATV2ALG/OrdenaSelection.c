#include <stdio.h>
#include <stdlib.h>
void ordenaBubble(int, int[], int);
int main(){
    int n;
    scanf("%d", &n);
    int numeros[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
    }
    for (int j = 0; j < n; j++) {
        if(j == n-1){
            printf("%d\n", numeros[j]);
        }else{
            printf("%d ", numeros[j]);
        }
    }
    int auxiliar;
    int trocas=0;
    for (int k = 0; k < (n-1); k++) {
        int auxiliar2 = k;
        for (int l = k+1; l < n; l++){
            if (numeros[l] < numeros[auxiliar2]){
                auxiliar2 = l;
                trocas++;
            }
        }
        if(k != auxiliar2){
            auxiliar = numeros[k];
            numeros[k] = numeros[auxiliar2];
            numeros[auxiliar2] = auxiliar;

        }
        for(int o=0; o<n; o++){
            if(o == n-1){
                printf("%d\n", numeros[o]);
            }else{
                printf("%d ", numeros[o]);
            }
        }
    }
    ordenaBubble(n,numeros,trocas);

}
void ordenaBubble(int n, int numeros[], int trocas){
    for (int i=0; i<n; i++) {
        if(i == n-1){
            printf("%d\n", numeros[i]);
        }else{
            printf("%d ", numeros[i]);
        }
    }
    printf("%d\n", trocas);
}