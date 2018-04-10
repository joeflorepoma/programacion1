#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[31];
    //char nombre2[31];

    printf("Ingrese el nombre. ");
    setbuf(stdin, NULL);
    //scanf("%s", nombre);
    scanf("%[^\n]", nombre);

    //strcpy(nombre2, nombre);

    printf("%s ", nombre);

    return 0;
}
