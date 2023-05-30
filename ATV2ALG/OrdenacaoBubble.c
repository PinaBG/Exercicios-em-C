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
    for (int k = 1; k < n; k++) {
        for (int l = 0; l < n - 1; l++){
            if (numeros[l] > numeros[l + 1]){
                auxiliar = numeros[l];
                numeros[l] = numeros[l + 1];
                numeros[l+1] = auxiliar;
                for (int m = 0; m < n; m++) {
                    if(m == n-1){
                        printf("%d\n", numeros[m]);
                    }else{
                        printf("%d ", numeros[m]);
                    }
                }
                trocas++;
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
    printf("Trocas: %d\n", trocas);
}