
typedef struct
{

    int dia, mes, anio;

} eFecha;

typedef struct
{

    char nombre[31];
    float salario;
    int legajo;
    eFecha fn;

} eEmpleado;

void alta(eEmpleado[], int);
void lista(eEmpleado[], int);



