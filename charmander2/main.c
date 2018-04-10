#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[31];
    char apellido[31];

    printf("Ingrese nombre: \n");
    fflush(stdin);
    scanf("%[^\n]", nombre);

    printf("Ingrese apellido: \n");
    fflush(stdin);
    scanf("%[^\n]", apellido);

    strlwr(apellido);
    strlwr(nombre);

    apellido[0]= toupper(apellido[0]);
    nombre[0]= toupper(nombre[0]);

    strcat(apellido," ");
    strcat(apellido, nombre);



    printf("\n%s", apellido);


    return 0;
}
