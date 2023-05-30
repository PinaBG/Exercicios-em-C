#include <stdio.h>
#include <stdlib.h>

int calculaArea(int[], char[]);

int main(){
    int *alfabeto = malloc(26*sizeof(int));
    for(int i=0; i<26; i++){
       scanf("%d",&alfabeto[i]);
    }
    char *palavra = (char*)malloc(50*sizeof(char));
    scanf("%s",palavra);

    printf("%d\n", calculaArea(alfabeto, palavra));
}

int calculaArea(int alfabeto[], char palavra[]){
    int altura =alfabeto[(int)palavra[0]-'a'];
    int base=1;
    for(int i=1; palavra[i]!='\0'; i++){
        if(alfabeto[(int)palavra[i]-'a']>altura){
            altura=alfabeto[(int)palavra[i]-'a'];
        }
        base++;
    }
    int area = base*altura;
    return area;
}