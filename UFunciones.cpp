//
// Created by mbermejo on 1/09/2022.
//

#include "UFunciones.h"

unsigned long int numeroInvertido(unsigned long int num)
{ unsigned long int ni=0, digito;

    while(num !=0)
    {
        digito = num % 10;
        ni = ni *10 + digito;
        num = num / 10;
    }
    return ni;
}