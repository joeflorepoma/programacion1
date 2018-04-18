#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "string.h"
#define CANT 3



int main()
{

    eEmpleado empleado[CANT];

    alta(empleado, CANT);

    lista(empleado, CANT);



    return 0;
}
