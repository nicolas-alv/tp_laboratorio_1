#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "math.h"

int main()
{
    int numero1;
    int numero2;
    int flag1=0;
    int flag2=0;
    char continuar;

    do {

        printf("Bienvenido a la calculadora\n");
        printf("------------Menu---------------");

        if (flag1==0){

            printf("\nPrimer operando es a = x ");
        }else {
            printf("\nPrimer operando es a = %d\n", numero1);

        }

        if (flag1==0){

            printf("\nSegundo operando es b = y\n ");
        }else {
            printf("\nSegundo operando es b = %d\n", numero2);

        }



        switch(menu()){

            case '1':
                system("cls");
                printf("Ingrese el primer numero: ");
                fflush(stdin);
                scanf("%d", &numero1);
                flag1=1;
                break;

            case '2':
                system("cls");
                printf("Ingrese el segundo numero: ");
                fflush(stdin);
                scanf("%d", &numero2);
                flag2=1;
                break;

            case 'a':
                if (flag1==1 && flag2==1){

                    printf("El resultado de la suma es %d\n", suma(numero1, numero2));

                }else{

                    printf("Mal, los dos numeros deben ser ingresados para realizar la opreación\n");

                }
                system("pause");
                break;

            case 'b':

                if (flag1==1 && flag2 ==1) {

                    printf("El resultado de la multiplicacion es %d\n", multiplicacion(numero1, numero2));

                }else{

                    printf("Mal, los dos numeros deben ser ingresados para realizar la opreación\n");


                }
                system("pause");
                break;

            case 'c':
                if (flag1==1 && flag2==1){

                    printf("El resultado de la resta es %d\n", resta(numero1, numero2));

                }else {

                    printf("Mal, los dos numeros deben ser ingresados para realizar la operación\n");

                }
                system("pause");
                break;

            case 'd':
                if (flag1==1 && flag2==1){

                    printf("El resultado de la division es %.2f\n", division(numero1, numero2));

                }else if (numero2==0){

                    printf("No esta permitida la division por cero\n");

                }else{

                    printf("Mal, los dos numeros deben ser ingresados para realizar la operacion\n");
                }
                system("pause");
                break;

            case 'e':
                if (flag1==1){

                    printf("El factorial del primero numero es %d\n", factorial(numero1));

                    }else {

                    printf("No se ha ingresado el primer numero\n");

                    }

                 if (flag2==1){

                    printf("El factorial del segundo numero es %d\n", factorial(numero2));

                 }else{

                    printf("No se ha ingresado el segundo numero\n");

                 }
                 system("pause");
                 break;

            case 'f':
                exit(0);
                break;

            default :
                printf("Opcion invalida\n");
                system("pause");
                break;

        }

        printf("Si desea continuar, presione s\n");
        fflush(stdin);
        scanf("%c", &continuar);
        system("cls");


    }while(continuar='s');

    return 0;
}




