#include <stdio.h>
#include <stdlib.h>

int main()
{
    // malloc calloc realloc free sizeof
    // en malloc sino encuentra la cantidad de memoria solicitada devuleve NULL
    // mayormente solo se usa calloc o malloc mayormente malloc

    /**
        typedef struct
        {
            char nom[20];
            int edad;
        }ePersona;

        ePersona *ptrPer; *ptrPerAux;
        ptr = (ePersona*) malloc(sizeof(ePersona));

        ptrPer ->nombre;
        ptrPer ->edad;

        ptrPerAux = (ePersona*)realloc(ptrrPer, sizeof(ePersona)*20); devuelve null sino encuentra los 20 que pido

        if(ptrPerAux != NULL)
        {
            ptrPer = ptrPerAux;
        }


    **/

    int *a;
    a=(int*)malloc(10*sizeof(int));

    printf("%d", a);

    *a = 3;

    return 0;
}
