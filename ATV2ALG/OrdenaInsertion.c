#include <stdio.h>
#include <stdlib.h>
void ordenaInsertion(int, int[], int, int);
int main(){
    int auxiliar, n, trocas=0, m=0;
    int trocaOuN = 0;

    scanf("%d", &n);
    int numeros[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &numeros[i]);
    }

    ordenaInsertion(n,numeros,trocaOuN,trocas);

    for(int j=0; j<n-1; j++){
        if(numeros[j]>numeros[j+1]){
            m++;
        }
    }

    for (int k = 1; k < n; k++) {
		int contador = k;
		while (contador > 0 && numeros[contador] < numeros[contador-1]) {
			auxiliar = numeros[contador];
			numeros[contador] = numeros[contador - 1];
			numeros[contador - 1] = auxiliar;
			contador -= 1;

			ordenaInsertion(n,numeros,trocaOuN,trocas);

			trocas++;
		}
	}

    trocaOuN = 1;
    ordenaInsertion(n,numeros,trocaOuN,trocas);

    if(m == n-1){
        printf("PIOR CASO\n");
    }
    else if(trocas == 0){
        printf("MELHOR CASO\n");
    }
    else{
        printf("CASO ALEATORIO\n");
    }
}
void ordenaInsertion(int n, int numeros[], int trocaOuN, int trocas){
    for (int i=0; i<n; i++) {
        if(i == n-1){
            printf("%d\n", numeros[i]);
        }
        else{
            printf("%d ", numeros[i]);
        }
    }
    if(trocaOuN==1){
            printf("Trocas:%d\n", trocas);
    }
}