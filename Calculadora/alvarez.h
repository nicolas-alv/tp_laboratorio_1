#ifndef ALVAREZ_H_INCLUDED
#define ALVAREZ_H_INCLUDED


 /** \brief Se visualiza Menu de opciones.
   *  \return la opción ejegida (la cual es una letra).
   */

char menu();

/** \brief Se realiza la suma de dos operadores ingresados.
  * \param Primer numero ingresado
  * \param Segundo numero ingresado
  * \return resultado de la suma (num1 + num2)
  */

int suma(int num1, int num2);

/** \brief Se realiza la resta de dos operadores ingresados.
  * \param Primer numero ingresado
  * \param Segundo numero ingresado
  * \return resultado de la resta (num1 - num2)
  */

int resta(int num1, int num2);

/** \brief Se realiza la multiplicacion de dos operadores ingresados.
  * \param Primer numero ingresado
  * \param Segundo numero ingresado
  * \return resultado de la multiplicacion (num1*num2)
  */

int multiplicacion(int num1, int num2);

/** \brief Se dividen dos numeros, pueden ser con coma
  * \param Primer numero ingresado
  * \param Segundo numero ingresado (Si es igual a cero, no se ejecuta la division)
  * \return resultado de la division (num1 / num2, muestra dos decimales)
  */

float division(float num1, float num2);

/** \brief Se realiza el factorial de cada numero ingresado.
  * \param 1er Numero ingresado
  * \param 2do numero ingresado
  * \return factorial del/de los numero/s
  */
int factorial(int n);

#endif // ALVAREZ_H_INCLUDED
