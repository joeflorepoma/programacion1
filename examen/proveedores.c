#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"

void altaProveedores(eProveedor provee[], int cantidad)
{
    eProducto nuevoProveedor;

    char auxDescripcion[51];
    int auxCodigo;

    char auxCodigoStr[50];

    int libre;
    int busqueda;


    system("cls");
    printf("---Alta Proveedor---\n\n");

    libre = buscarEspacioLibre(provee, cantidad);

    if(libre == -1)
    {
        printf("\nEl sistema esta completo. No se puede dar de alta a mas personas.\n\n");
    }
    else
    {
        if(!getStringNumeros("Ingrese el codigo del proveedor: ",auxCodigoStr))
        {
            printf ("El Codigo debe ser numerico\n");
        }
        else
        {
            auxCodigo = atoi(auxCodigoStr);

            busqueda = buscarPorCodigo(provee, cantidad, auxCodigo);

            if(busqueda != -1)
            {
                printf("\nEl Codigo %d ya esta dado de alta en el sistema\n", auxCodigo);

            }
            else
            {

                nuevoProveedor.codigo.codigoProv = auxCodigo;

                if(!getStringLetras("Ingrese la descripcion: : ", auxDescripcion))
                {
                    printf("La descripcion debe estar compuesta solo por letras\n");
                }
                else
                {
                    //strcpy(nuevoProducto.descripcionProducto, auxDescripcion);


                }


            }
        }

    }

}

