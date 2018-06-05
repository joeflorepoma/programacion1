#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"

int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}

float getFloat(char mensaje[])
{
    float auxiliar;
    printf("%s",mensaje);
    scanf("%f",&auxiliar);
    return auxiliar;
}

char getChar(char mensaje[])
{
    char auxiliar;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&auxiliar);
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

int esTelefono(char str[])
{
   int i=0;
   int contadorGuiones=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] != '-') && (str[i] < '0' || str[i] > '9'))
           return 0;
       if(str[i] == '-')
            contadorGuiones++;
       i++;
   }
   if(contadorGuiones==1) // debe tener un guion
        return 1;

    return 0;
}

void getString(char mensaje[], char dato[])
{
    printf("%s",mensaje);

    scanf("%s", dato);
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

int getStringLetrasyNumeros(char mensaje[], char letras[])
{
    int i;

    getString(mensaje, letras);

    for(i=0; i<strlen(letras); i++)
    {
        if(!(isalnum(letras[i])))
        {
            return 0;
        }
    }

    return 1;
}

int getStringNumerosFlotantes(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esNumericoFlotante(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

int getStringTelefono(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esTelefono(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}
