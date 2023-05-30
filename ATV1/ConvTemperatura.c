#include <stdio.h>

void converteTemperatura(double, double*, double*, double*, double*, double*, double*);

int main(){
    double temperatura;
    double kelvin;
    double fahrenheit;
    double rakine;
    double reaumur;
    double romer;
    double deslisle;
    scanf("%lf", &temperatura);
    converteTemperatura(temperatura, &kelvin, &fahrenheit, &rakine, &reaumur, &romer, &deslisle);
    printf("%.1lf\n", kelvin);
    printf("%.1lf\n", fahrenheit);
    printf("%.1lf\n", rakine);
    printf("%.1lf\n", reaumur);
    printf("%.1lf\n", romer);
    printf("%.1lf\n", deslisle);
}

void converteTemperatura(double temp, double*p1, double*p2, double*p3, double*p4, double*p5, double*p6){
    *p1 = temp+273.15;
    *p2 = (temp*9/5)+32;
    *p3 = temp*9/5+491.67;
    *p4 = temp*4/5;
    *p5 = temp* 0.52500 + 7.50;
    *p6 = (100-temp)*3/2;
}