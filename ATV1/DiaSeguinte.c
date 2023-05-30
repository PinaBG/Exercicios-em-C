#include <stdio.h>

void diaSeguinte(int, int, int, int*, int*, int*);

int main(){
    int Dia;
    int Mes;
    int Ano;

    scanf("%d %d %d", &Dia, &Mes, &Ano);
    diaSeguinte(Dia, Mes, Ano, &Dia, &Mes, &Ano);
    printf("%d %d %d\n", Dia, Mes, Ano);
    return 0;
}
void diaSeguinte(int Dia, int Mes, int Ano, int *diaSeguinte, int *mesSeguinte, int *anoSeguinte){
    *anoSeguinte = Ano;
    if(Mes == 2){
        if(Dia == 29){
            *diaSeguinte = 1;
            *mesSeguinte = 3;
        }
        else if(Dia == 28){
            if((Ano%100!=0&&Ano%4==0)||Ano%400==0){
                *diaSeguinte = 29;
                *mesSeguinte = 2;
            }else{
                *diaSeguinte = 1;
                *mesSeguinte = Mes + 1;
            }
        }else{
            *diaSeguinte = Dia + 1;
            *mesSeguinte = Mes;
        }
    }else if(Mes == 1 || Mes == 3 || Mes == 5 || Mes == 8 || Mes == 7 || Mes == 10){
        if(Dia == 31){
            *diaSeguinte = 1;
            *mesSeguinte = Mes + 1;
        }else{
            *diaSeguinte = Dia + 1;
            *mesSeguinte = Mes;
        }
    }else if(Mes == 4 || Mes == 6 || Mes == 9 || Mes == 11){
        if(Dia == 30){
            *diaSeguinte = 1;
            *mesSeguinte = Mes + 1;
        }else{
            *diaSeguinte = Dia + 1;
            *mesSeguinte = Mes;
        }
    }else if(Mes == 12){
        if(Dia == 31){
            *diaSeguinte = 1;
            *mesSeguinte = 1;
            *anoSeguinte = Ano + 1;
        }else{
            *diaSeguinte = Dia + 1;
            *mesSeguinte = Mes;
        }
    }
}