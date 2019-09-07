#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char menu();
int suma(int num1, int num2);
int resta(int num1, int num2);
int multiplicacion(int num1, int num2);
float division(float num1, float num2);
int factorial (int num1);



int main()
{


    char continuar;
    int numero1;
    int numero2;
    int flag1=0;
    int flag2=0;
    int num1;
    int num2;




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
            system("cls");
            case '1':
                printf("Ingrese el primer numero: ");
                scanf("%d", &numero1);
                flag1=1;
                break;

            case '2':
                printf("Ingrese el segundo numero: ");
                scanf("%d", &numero2);
                flag2=1;
                break;

            case 'a':
                if (flag1==1 && flag2==1){

                    printf("El resultado de la suma es %d", suma(num1, num2));

                }else{

                    printf("Mal, los dos numeros deben ser ingresados para realizar la opreación\n");

                }
                system("pause");
                break;

            case 'b':
                if (flag1==1 && flag2 ==1) {

                    printf("El resultado de la multiplicacion es %d\n", multiplicacion(num1, num2));

                }else{

                    printf("Mal, los dos numeros deben ser ingresados para realizar la opreación\n");


                }
                system("pause");
                break;

            case 'c':
                if (flag1==1 && flag2==1){

                    printf("El resultado de la resta es %d\n", resta(num1, num2));

                }else {

                    printf("Mal, los dos numeros deben ser ingresados para realizar la operación\n");

                }
                system("pause");
                break;

            case 'd':
                if (flag1==1 && flag2==1){

                    printf("El resultado de la division es %.2f\n", division(num1, num2));

                }else if (num2==0){

                    printf("No esta permitida la division por cero\n");

                }else{

                    printf("Mal, los dos numeros deben ser ingresados para realizar la operacion\n");
                }
                system("pause");
                break;

            case 'e':
                if (flag1==1 && flag2==1){

                   printf("El factorial del primer numnero es %d, y el del segundo es %d\n ", factorial(numero1), factorial(numero2));

                }else{

                    printf("Mal, los dos numeros deben ser ingresados para realizar la operacion\n");

                }
                system("pause");
                break;

            case 's':
                break;

            default :
                printf("Opcion invalida\n");
                system("pause");
                break;

        }


    }while(continuar='s');

    return 0;
}

char menu(){

    int opcion;

    printf("<Presione '1'> Ingrese el primer operando\n");
    printf("<Presione '2'> Ingrese el segundo operando\n");
    printf("Suma <Ingrese 'a'>\n");
    printf("Multiplicacion <Ingrese 'b'>\n");
    printf("Resta <Ingrese 'c'>\n");
    printf("Division <Ingrese 'd'>\n");
    printf("Factorial <Ingrese 'e'>\n");
    printf("Salir <Ingrese 's'>\n");
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



int factorial (int num1){

    int respuesta=1;
    int i;


    for(i=num1; i>=1; i--){

        respuesta=respuesta*i;

    }

    return respuesta;

 }







