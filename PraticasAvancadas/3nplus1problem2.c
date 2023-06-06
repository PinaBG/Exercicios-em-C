#include <stdio.h>

int main(){
    int termoInicial, termoFinal;

    scanf("%d %d", &termoInicial, &termoFinal);
    int nCiclos;
    int nMaximoCiclos = 0;
    int termoInicialReal = termoInicial;
    int termoFinalReal = termoFinal;
    if(termoInicial>termoFinal){
        termoInicial = termoFinalReal;
        termoFinal = termoInicialReal;
    }

    for(int i=termoInicial;i<=termoFinal;i++){
        nCiclos = 1;
        int n = i;
        while(n != 1){
            if(n%2==0){
                n /=2;
            }else{
                n *= 3;
                n += 1;
            }
            nCiclos++;
        }
        if(nMaximoCiclos<nCiclos){
            nMaximoCiclos = nCiclos;
        }
    }

    printf("%d %d %d",termoInicialReal,termoFinalReal,nMaximoCiclos);
}