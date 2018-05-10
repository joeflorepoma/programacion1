#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"

#define CANT 6

int main()
{
    //eProveedor proveedores[CANT];
    eProducto productos[CANT];

    int numero = 0;
    int salir = 0;

    inicializar(productos, CANT);

    do
    {

        switch(menuABM())
        {
        case 1:
            do
            {
                switch(menu2())
                {
                case 1:

                    system("pause");
                    break;
                case 2:

                    system("pause");
                    break;

                case 6:
                    salir = 1;
                    printf("\nSalir\n\n");
                    break;
                default:
                    printf("\nOpcion Incorrecta\n\n");
                    system("pause");
                }
            }
            while(salir != 1);



            break;
        case 2:

            do
            {
                switch(menu())
                {
                case 1:
                    altaProductos(productos, CANT);
                    system("pause");
                    break;
                case 2:
                    modificarProductos(productos,CANT);
                    system("pause");
                    break;
                case 3:
                    bajaProducto(productos,CANT);
                    system("pause");
                    break;
                case 4:
                    informarSuperan(productos, CANT);
                    informarNoSuperan(productos, CANT);
                    stockMenos(productos, CANT);
                    system("pause");
                    break;
                case 5:

                    system("pause");
                    break;
                case 6:
                    salir = 1;
                    printf("\nSalir\n\n");
                    break;
                default:
                    printf("\nOpcion Incorrecta\n\n");
                    system("pause");
                }
            }
            while(salir != 1);


            break;

        case 6:
            numero = 1;
            printf("\nSalir\n\n");
            break;
        default:
            printf("\nOpcion Incorrecta\n\n");
            system("pause");
        }



    }
    while(numero != 1);



    return 0;
}
