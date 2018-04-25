#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>
#include <conio.h>

#define CANT 3
#define ESC 27

int main()
{

    eProducto productos[CANT];

    char opcion;

    inicializar(productos, CANT);

    do
    {
        system("cls");
        printf("1- Agregar producto\n");
        printf("2- Borrar producto\n");
        printf("3- Modificar producto\n");
        printf("4- Imprimir lista\n");
        printf("ESC- Salir\n");

        opcion = getch();

        switch(opcion)
        {
        case '1':
            alta(productos, CANT);
            break;
        case '2':
            printf("Baja...");
            break;
        case '3':
            printf("Modificar...");
            break;
        case '4':

            system("pause");
            break;
        case 'ESC':
            break;
        }

    }
    while(opcion != ESC);

    return 0;
}
