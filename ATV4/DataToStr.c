#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void converteData(char data[], char *);

int main(){
    char *data = (char *) malloc(100*sizeof(char));
    char *dataConvertida = (char *) malloc(10000*sizeof(char));
    while(scanf(" %[^\t\n]s", data) != EOF){
        converteData(data,dataConvertida);
    }
    printf("%s", dataConvertida);
}
void converteData(char data[], char *dataConvertida){
    char *dia = (char *) malloc(20*sizeof(char));
    char *mes = (char *) malloc(20*sizeof(char));
    char *aux = (char *) malloc(20*sizeof(char));

    aux = strtok(data," ");
    if(strlen(aux)!=2){
        dia[0] = '0';
        strcat(dia,aux);
    }else{
        dia = aux;
    }

    aux = strtok(NULL," ");
    if(strlen(aux)!=2){
        mes[0] = '0';
        strcat(mes,aux);
    }else{
        mes = aux;
    }

    char *ano = strtok(NULL," ");
    strcat(dataConvertida, dia);
    if(strcmp(mes,"01")==0){
        strcat(dataConvertida, " de Janeiro de ");
    }else if(strcmp(mes,"02")==0){
        strcat(dataConvertida, " de Fevereiro de ");
    }else if(strcmp(mes,"03")==0){
        strcat(dataConvertida, " de Marco de ");
    }else if(strcmp(mes,"04")==0){
        strcat(dataConvertida, " de Abril de ");
    }else if(strcmp(mes,"05")==0){
        strcat(dataConvertida, " de Maio de ");
    }else if(strcmp(mes,"06")==0){
        strcat(dataConvertida, " de Junho de ");
    }else if(strcmp(mes,"07")==0){
        strcat(dataConvertida, " de Julho de ");
    }else if(strcmp(mes,"08")==0){
        strcat(dataConvertida, " de Agosto de ");
    }else if(strcmp(mes,"09")==0){
        strcat(dataConvertida, " de Setembro de ");
    }else if(strcmp(mes,"10")==0){
        strcat(dataConvertida, " de Outubro de ");
    }else if(strcmp(mes,"11")==0){
        strcat(dataConvertida, " de Novembro de ");
    }else if(strcmp(mes,"12")==0){
        strcat(dataConvertida, " de Dezembro de ");
    }
    strcat(dataConvertida, ano);
    strcat(dataConvertida, "\n");
}