#include <stdio.h>
#include <stdlib.h>

char menu(){

    int opcion;

    printf("<Presione 1> Ingrese el primer operando\n");
    printf("<Presione 2> Ingrese el segundo operando\n");
    printf("Suma <Ingrese a>\n");
    printf("Multiplicacion <Ingrese b>\n");
    printf("Resta <Ingrese c>\n");
    printf("Division <Ingrese d>\n");
    printf("Factorial <Ingrese e>\n");
    printf("Salir <Ingrese f>\n");
    printf("Ingrese opcion:\n");
    fflush(stdin);
    opcion=getchar();

    return opcion;


}

int suma(int num1, int num2){


    int resultado=num1+num2;

    return resultado;


}

int resta(int num1, int num2){

    int resultado=num1-num2;

    return resultado;

}

int multiplicacion( int num1, int num2){

    int resultado=num1*num2;

    return resultado;

}


float division(float num1, float num2){

    float resultado=num1/num2;

    return resultado;

}



int factorial(int n)
{
    int res;

    if(n==1)
        return 1;
    res=n* factorial(n-1);
    return (res);
}


