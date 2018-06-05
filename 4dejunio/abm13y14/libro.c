#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void inicializar( eLibro book[], int cantidad)
{
    int i;

    for(i=0; i<cantidad; i++)
    {
        book[i].estado = 0;
    }
}

void mostrarDocumento(eLibro lib)
{
    printf("\n  %3d    %d  %10s   %d  \n", lib.codigoAutor, lib.codigoLibro, lib.tituloLibro, lib.stock );
}

int buscarEspacioLibre(eLibro book[], int cantidad)
{
    int i;
    int indice = -1;// devuelve -1 si no hay mas espaciop libre

    for(i=0; i<cantidad; i++)
    {
        if(book[i].estado == 0)
        {
            indice = i;// devolvera cualquier otro numero si encuentra un espacio libre
            break;
        }
    }

    return indice;
}

int buscarPorCodigo(eLibro book[], int cantidad, int codigo)
{
    int i;
    int indice = -1;// el dni no esta en la base de datos

    for(i=0; i<cantidad; i++)
    {
        if(book[i].estado == 1 && book[i].codigoLibro == codigo)
        {
            indice = i;// se encontro el dni en la base de datos
            break;
        }
    }

    return indice;
}
