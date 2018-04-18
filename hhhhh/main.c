#include <stdio.h>
#include <string.h>

struct fecha
{
    int dia,mes,anio;
};

struct gente
{
    char nombre[20];
    struct fecha f_nacimiento;
};

int main(void)
{
    struct gente pers;
    struct fecha fn;
    printf("Ingrese nombre");
    scanf("%[^\n]", pers.nombre);

    printf("Ingrese dia de nacimiento");
    scanf("%d",&fn.dia);

    printf("Ingrese mes de nacimiento");
    scanf("%d",&fn.mes);

    printf("Ingrese a¤o de nacimiento");
    scanf("%d",&fn.anio);

    pers.f_nacimiento=fn;

    printf("Su nombre es %s y su fecha de nacimiento es: %d/%d/%d", pers.nombre, pers.f_nacimiento);

    return 0;
}
