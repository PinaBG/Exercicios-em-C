#include <stdio.h>

void diaAnterior(int, int, int, int*, int*, int*);

int main(){
    int Dia;
    int Mes;
    int Ano;

    scanf("%d %d %d", &Dia, &Mes, &Ano);
    diaAnterior(Dia, Mes, Ano, &Dia, &Mes, &Ano);
    printf("%d %d %d\n", Dia, Mes, Ano);
    return 0;
}
void diaAnterior(int Dia, int Mes, int Ano, int *diaAnterior, int *mesAnterior, int *anoAnterior){
    *anoAnterior = Ano;
    if(Mes == 1){
        if(Dia == 1){
            *diaAnterior = 1;
        }else{
            *diaAnterior = Dia - 1;
        }
        *mesAnterior = 12;
        *anoAnterior = Ano - 1;
    }else if(Mes == 2||Mes == 4||Mes == 6||Mes == 9||Mes == 11||Mes == 8){
        if (Dia == 1){
            *diaAnterior = 31;
            *mesAnterior = Mes - 1;
        }else{
            *diaAnterior = Dia - 1;
            *mesAnterior = Mes;
        }
    }else if(Mes == 3){
        if(Dia == 1){
            *mesAnterior = 2;
            if((Ano%100!=0&&Ano%4==0)||Ano%400==0){
                *diaAnterior = 29;
            }else{
                *diaAnterior = 28;
            }
        }
    }else if(Mes == 5||Mes == 7||Mes == 10||Mes == 12){
        if(Dia == 1){
            *diaAnterior = 30;
            *mesAnterior = Mes - 1;
        }else{
            *diaAnterior = Dia - 1;
            *mesAnterior = Mes;
        }
    }
}