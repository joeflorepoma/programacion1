#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"

void mostrarProducto(eProducto prod)
{
    printf("\n\ncodigo  cantidad  descripcion importe\n");
    printf("\n  %3d     %d   %10s    %.2f\n", prod.codigoProducto, prod.cantidad, prod.descripcionProducto, prod.importe );
}

void mostrarDocumentos(eProducto product[], int cantidad)
{
    int i;


    printf("---Lista de Productos---\n\n");
    //printf("  Dni      Edad    Nombre \n\n");

    for(i=0; i < cantidad; i++)
    {
        if(product[i].estado == 1)
        {
            mostrarProducto(product[i]);
        }
    }
}

void inicializar( eProducto product[], int cantidad)
{
    int i;

    for(i=0; i<cantidad; i++)
    {
        product[i].estado = 0;
    }
}

int buscarEspacioLibre(eProducto product[], int cantidad)
{
    int i;
    int indice = -1;// devuelve -1 si no hay mas espaciop libre

    for(i=0; i<cantidad; i++)
    {
        if(product[i].estado == 0)
        {
            indice = i;// devolvera cualquier otro numero si encuentra un espacio libre
            break;
        }
    }

    return indice;
}

int buscarPorCodigo(eProducto product[], int cantidad, int cod)
{
    int i;
    int indice = -1;// el dni no esta en la base de datos

    for(i=0; i<cantidad; i++)
    {
        if(product[i].estado == 1 && product[i].codigoProducto == cod)
        {
            indice = i;// se encontro el dni en la base de datos
            break;
        }
    }

    return indice;
}

void altaProductos(eProducto product[], int cantidad)
{
    eProducto nuevoProducto;

    char auxDescripcion[51];
    int auxCodigo;
    int auxCantidad;
    float auxImporte;

    char auxCodigoStr[50];
    char auxCantidadStr[50];
    char auxImporteStr[50];

    int libre;
    int busqueda;


    system("cls");
    printf("---Alta producto---\n\n");

    libre = buscarEspacioLibre(product, cantidad);

    if(libre == -1)
    {
        printf("\nEl sistema esta completo. No se puede dar de alta a mas personas.\n\n");
    }
    else
    {
        if(!getStringNumeros("Ingrese el codigo del producto: ",auxCodigoStr))
        {
            printf ("El Codigo debe ser numerico\n");
        }
        else
        {
            auxCodigo = atoi(auxCodigoStr);

            busqueda = buscarPorCodigo(product, cantidad, auxCodigo);

            if(busqueda != -1)
            {
                printf("\nEl Codigo %d ya esta dado de alta en el sistema\n", auxCodigo);
                mostrarProducto(product[busqueda]);
            }
            else
            {
                nuevoProducto.estado = 1;
                nuevoProducto.codigoProducto = auxCodigo;

                if(!getStringLetras("Ingrese la descripcion: : ", auxDescripcion))
                {
                    printf("La descripcion debe estar compuesta solo por letras\n");
                }
                else
                {
                    strcpy(nuevoProducto.descripcionProducto, auxDescripcion);

                    if(!getStringNumerosFlotantes("Ingrese el importe: ", auxImporteStr))
                    {
                        printf ("La importe debe ser decimal\n");
                    }
                    else
                    {
                        auxImporte = atof(auxImporteStr);
                        nuevoProducto.importe = auxImporte;

                        if(!getStringNumeros("Ingrese la cantidad: ", auxCantidadStr))
                        {
                            printf("La cantidad ingresada debe ser numerica\n");
                        }
                        else
                        {
                            auxCantidad = atoi(auxCantidadStr);
                            nuevoProducto.cantidad = auxCantidad;

                            product[libre] = nuevoProducto;

                            printf("\nAlta exitosa!!!\n\n");
                        }


                    }


                }


            }
        }

    }

}

void modificarProductos(eProducto product[], int cantidad)
{
    //eProducto nuevoProducto;

    char auxDescripcion[51];
    int auxCodigo;
    int auxCantidad;
    float auxImporte;

    char auxCodigoStr[50];
    char auxCantidadStr[50];
    char auxImporteStr[50];

    int busqueda;

    system("cls");
    printf("---Modificacion producto---\n\n");

    if(!getStringNumeros("Ingrese el codigo del producto a modificar: ", auxCodigoStr))
    {
        printf ("El Codigo debe ser numerico\n");
    }
    else
    {
        auxCodigo = atoi(auxCodigoStr);
        busqueda = buscarPorCodigo(product, cantidad, auxCodigo);

        if(busqueda == -1)
        {
            printf("\nEl Codigo %d no se encuentra en el sistema\n\n", auxCodigo);
        }
        else
        {
            mostrarProducto(product[busqueda]);
            if(!getStringLetras("Reingrese la descripcion: : ", auxDescripcion))
            {
                printf("La descripcion debe estar compuesta solo por letras\n");
            }
            else
            {
                strcpy(product[busqueda].descripcionProducto, auxDescripcion);

                if(!getStringNumerosFlotantes("Reingrese el importe: ", auxImporteStr))
                {
                    printf ("La importe debe ser decimal\n");
                }
                else
                {
                    auxImporte = atof(auxImporteStr);
                    product[busqueda].importe = auxImporte;

                    if(!getStringNumeros("Reingrese la cantidad: ", auxCantidadStr))
                    {
                        printf("La cantidad ingresada debe ser numerica\n");
                    }
                    else
                    {
                        auxCantidad = atoi(auxCantidadStr);
                        product[busqueda].cantidad = auxCantidad;


                        printf("\nModificacion exitosa!!!\n\n");
                    }


                }


            }
        }
    }

}

void bajaProducto(eProducto product[], int cantidad)
{
    int auxCodigo;

    char auxCodigoStr[50];

    int busqueda;
    char confirma;

    system("cls");
    printf("---Baja Producto---\n\n");

    if(!getStringNumeros("Ingrese el codigo del producto a dar de baja: ", auxCodigoStr))
    {
        printf ("El codigo debe ser numerico\n");
    }
    else
    {
        auxCodigo = atoi(auxCodigoStr);

        busqueda = buscarPorCodigo(product, cantidad, auxCodigo);

        if(busqueda == -1)
        {
            printf("\nEl Codigo de producto %d no se encuentra en el sistema\n\n", auxCodigo);
        }
        else
        {
            mostrarProducto(product[busqueda]);

            do
            {
                printf("\nConfirma baja? [s|n]: ");
                fflush(stdin);
                scanf("%c", &confirma);
                confirma = tolower(confirma);
            }
            while(confirma != 's' && confirma != 'n');

            if(confirma == 's')
            {
                product[busqueda].estado = 0;
                printf("\nSe ha realizado la baja\n\n");
            }
            else
            {
                printf("\nSe ha cancelado la baja\n\n");
            }
        }
    }
}

void informarSuperan(eProducto product[],int cantidad)
{
    int i;
    float total = 0;
    float promedio = 0;
    int cantidadTotal = 0;
    int cont = 0;

    system("cls");

    for(i=0; i<cantidad; i++)
    {
        if(product[i].estado == 0)
        {
            continue;
        }

        total += product[i].importe;
        cantidadTotal += product[i].cantidad;
    }
    promedio = (float)total/cantidadTotal;
    printf(" El total de los importes es : %.2f\n", total);

    printf(" El promedio de los importes sera: %.2f\n", promedio);

    for(i=0; i<cantidad; i++)
    {
        if(product[i].estado == 0)
        {
            continue;
        }
        if(product[i].importe > promedio)
        {
            cont++;
        }

    }

    //mostrarDocumentos(product,cantidad);

    printf(" La cantidad de productos que superan el promedio son: %d\n", cont);

}

void informarNoSuperan(eProducto product[],int cantidad)
{
    int i;
    float total = 0;
    float promedio = 0;
    int cantidadTotal = 0;
    int cont = 0;

    system("cls");

    for(i=0; i<cantidad; i++)
    {
        if(product[i].estado == 0)
        {
            continue;
        }

        total += product[i].importe;
        cantidadTotal += product[i].cantidad;
    }
    promedio = (float)total/cantidadTotal;
    printf(" El total de los importes es : %.2f\n", total);

    printf(" El promedio de los importes sera: %.2f\n", promedio);

    for(i=0; i<cantidad; i++)
    {
        if(product[i].estado == 0)
        {
            continue;
        }
        if(product[i].importe < promedio)
        {
            cont++;
        }
    }
    //mostrarDocumentos(product,cantidad);

    printf(" La cantidad de productos que superan el promedio son: %d\n", cont);

}

void stockMenos(eProducto product[],int cantidad)
{
    int i;
    int cont = 0;
    int cont2 = 0;

    for(i=0; i<cantidad; i++)
    {
        if(product[i].estado == 0)
        {
            continue;
        }
        if(product[i].cantidad <= 10)
        {
            cont++;
        }else{

            cont2++;
        }
    }
    printf("\nLa cantidad de productos <= 10 unidades son: %d\n", cont);
    printf("\nLa cantidad de productos mayores a 10 unidades son: %d\n", cont2);

}
