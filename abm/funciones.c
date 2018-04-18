#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "string.h"

void alta(eEmpleado emp[], int cantidad)
{
    int i;

    for(i=0; i<cantidad; i++)
    {
        printf("Ingrese nombre");
        scanf("%[^\n]", emp[i].nombre );

        printf("legajo: ");
        scanf("%d", &emp[i].legajo);

        printf("Salario: ");
        scanf("%f", &emp[i].salario);

        printf("Dia");
        scanf("%d",&emp[i].fn.dia);

        printf("Mes");
        scanf("%d",&emp[i].fn.mes);

        printf("Anio");
        scanf("%d",&emp[i].fn.anio);

    }

}

void lista(eEmpleado emp[], int cantidad)
    {
        int i;

        for(i=0; i<cantidad; i++)
        {
            printf("%d %s %d/%d/%d %.2f", emp[i].legajo, emp[i].nombre, emp[i].fn.dia, emp[i].fn.mes, emp[i].fn.anio, emp[i].salario);
        }
    }
