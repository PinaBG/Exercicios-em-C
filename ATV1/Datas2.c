#include <stdio.h>

int validaData(int, int, int);

int main(){
    long int Dia;
    long int Mes;
    long int Ano;

    scanf("%ld %ld %ld", &Dia, &Mes, &Ano);

    if (Ano>=1582&&Dia>0&&Mes>0&&Mes<=12){
        if (validaData(Dia,Mes,Ano) == 0){
            printf("DATA INVALIDA\n");
        }else{
            printf("DATA VALIDA\n");
        }
    }else{
        printf("DATA INVALIDA\n");
    }
    return 0;
}
int validaData(int Dia, int Mes, int Ano){
    if (Mes == 1 || Mes == 3 || Mes == 5 || Mes == 7 || Mes == 8 || Mes ==10 || Mes == 12){
        if (Dia <= 31){
            return 1;
        }
        else{
            return 0;
        }
    }else if (Mes == 2){
        if((Ano%4==0&&Ano%100!=0)||Ano%400==0){
            if(Dia <= 29){
                return 1;
            }
            else{
                return 0;
            }
        }else{
            if(Dia <= 28){
                return 1;
            }
            else{
                return 0;
            }
        }
    }else{
        if(Dia <= 30){
            return 1;
        }else{
            return 0;
        }
    }
}