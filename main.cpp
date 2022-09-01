/*--------------------------------------------------------
 * Dato de Entrada: numero (unisgned long int)
 *                  verificamos que el numero al menos tenga 3 digitos
 * Dato de Salida: mensaje "Es capicua" o "No es capicua"
 ----------------------------------------------------------*/

#include <iostream>
#include "UFunciones.h"
using namespace std;

int main()
{ unsigned long int numero;

  do{
      cout << "Numero : ";
      cin >> numero;
  }while(numero<=100);

  if( numero == numeroInvertido(numero))
      cout << "El numero es capicua!";
  else
      cout << "El numero No es capicua";
  return 0;
}


