#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"

int menu()
{
    int opcion;

    system("cls");
    printf("---ABM Productos---\n");

    opcion = getInt("\n\n1 - ALTA \n2 - MODIFICAR \n3 - BAJA\n4 - INFORMAR\n5 - ORDENAR\n6 - SALIR\n\n\nIndique opcion: ");

    return opcion;
}

int menu2()
{
    int opcion;

    system("cls");
    printf("---ABM Proveedores---\n");

    opcion = getInt("\n\n1 - ALTA \n6 - SALIR\n\n\nIndique opcion: ");

    return opcion;
}

int menuABM()
{
    int opcion;

    system("cls");

    opcion = getInt("\n\n1 - ABM PROVEEDORES \n2 - ABM PRODUCTOS \n6 - SALIR\n\n ");

    return opcion;
}


int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}

void getString(char mensaje[], char dato[])
{
    printf("%s",mensaje);

    scanf("%s", dato);
}

float getFloat(char mensaje[])
{
    float auxiliar;
    printf("%s",mensaje);
    scanf("%f",&auxiliar);
    return auxiliar;
}

int esNumericoFlotante(char str[])
{
    int i=0;
    int cantidadPuntos=0;
    while(str[i] != '\0')
    {
        if (str[i] == '.' && cantidadPuntos == 0)
        {
            cantidadPuntos++;
            i++;
            continue;

        }
        if(str[i] < '0' || str[i] > '9')
            return 0;
        i++;
    }
    return 1;
}

int getStringNumerosFlotantes(char mensaje[],char flotantes[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esNumericoFlotante(aux))
    {
        strcpy(flotantes,aux);
        return 1;
    }
    return 0;
}

int getStringLetras(char mensaje[], char letras[])
{
    int i;

    getString(mensaje, letras);

    for(i=0; i<strlen(letras); i++)
    {
        if(!(isalpha(letras[i])))
        {
            return 0;
        }
    }

    return 1;
}

int getStringNumeros(char mensaje[], char dato[])
{
    int i;

    getString(mensaje, dato);

    for(i=0; i<strlen(dato); i++)
    {
        if(!(isdigit(dato[i])))
        {

            return 0;

        }
    }

    return 1;
}

int getStringAlphaNumerico(char mensaje[], char dato[])
{
    int i;

    getString(mensaje, dato);

    for(i=0; i<strlen(dato); i++)
    {
        if(!(isalnum(dato[i])))
        {

            return 0;

        }
    }

    return 1;
}
