#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void inicializar(eProductos product[], int cantidad)
{
    int i;

    for(i = 0; i < cantidad; i++)
    {
        product[i].estado = 0;
    }
}
