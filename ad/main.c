#include <stdio.h>
#include <stdlib.h>

void mostrarCadena(char*);

int main()
{
    char cad[] = "hola";
    mostrarCadena(cad);

    return 0;
}

void mostrarCadena(char *punteroCadena)
{
    while(*punteroCadena != '\0')
    {
        printf("%c", *punteroCadena);
        punteroCadena++;
    }
}
