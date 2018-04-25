#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <conio.h>
#include <string.h>

void inicializar(eProducto product[], int cantidad)
{
    int i;

    for(i=0; i<cantidad; i++)
    {
        product[i].estado = 0;
    }
}

int buscarLibre(eProducto product[], int cantidad)
{
    int indice = -1;
    int i;

    for(i=0; i < cantidad; i++)
    {
        if(product[i].estado == 0)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

int buscarEmpleado(eProducto product[], int cantidad, int cod)
{
    int indice = -1;
    int i;

    for(i=0; i < cantidad; i++)
    {
        if(product[i].estado == 1 && product[i].codigo == cod)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

void mostrarEmpleado(eProducto product)
{
    printf("  %4d     %s    %10.2f    %d\n", product.codigo, product.descripcion, product.importe, product.cantidad );
}

void alta(eProducto product[], int cantidad)
{

    eProducto nuevoProduct;
    int indice;
    int esta;
    int codigo;

    system("cls");
    printf("---Alta empleado---\n\n");

    indice = buscarLibre(product,cantidad);

    if(indice == -1)
    {
        printf("\nEl sistema esta completo. No se puede dar de alta a empleados nuevos.\n\n");
    }
    else
    {
        printf("Ingrese codigo: ");
        scanf("%d", &codigo);

        esta = buscarEmpleado(product, cantidad, codigo);

        if(esta != -1)
        {
            printf("\nEl legajo %d ya esta dado de alta en el sistema\n", codigo);
            mostrarEmpleado(product[esta]);
        }
        else
        {
            nuevoProduct.estado = 1;
            nuevoProduct.codigo = codigo;

            printf("Ingrese descripcion: ");
            fflush(stdin);
            gets(nuevoProduct.descripcion);

            printf("Ingrese importe: ");
            scanf("%f", &nuevoProduct.importe);

            printf("Ingrese cantidad: ");
            scanf("%d", &nuevoProduct.cantidad);

            product[indice] = nuevoProduct;

            printf("\nAlta exitosa!!!\n\n");

        }
    }

}

