#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define CANT 3
#define ESC 27

int main()
{
    eProductos producto[CANT];

    eProductos

    int i;
    char opcion;

    inicializar(productos, CANT);

        do{
        system("cls");
        printf("1- Agregar empleado\n");
        printf("2- Borrar empleado\n");
        printf("3- Modificar empleado\n");
        printf("4- Imprimir lista\n");
        printf("ESC- Salir\n");

        opcion = getch();

        switch(opcion)
        {
            case '1':

                break;
            case '2':

                break;
            case '3':

                break;
            case '4':

                system("pause");
                break;
            case 'ESC':
                break;
        }

    }while(opcion != ESC);
    return 0;
}
