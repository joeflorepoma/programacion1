#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alumno {
char nombre[20];
int nota;
};
int main(void)
{
struct alumno auxiliarAlumno;
struct alumno *punteroAlumno;

punteroAlumno = &auxiliarAlumno;

strcpy(punteroAlumno->nombre, "Ernesto");
punteroAlumno->nota = 10;

printf("%s  %d", punteroAlumno->nombre, punteroAlumno->nota);

return 0;
}

