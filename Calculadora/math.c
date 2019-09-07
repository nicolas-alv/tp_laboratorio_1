#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

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



long factorial(long num1){

    long resultado = 1;
    int i;

    for(i=num1; i>=1; i--){

        resultado=resultado*i;
    }

    return resultado;
}


