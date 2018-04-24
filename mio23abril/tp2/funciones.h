
typedef struct{

    int codigo;
    char descrip[51];
    float importe;
    int cantidad;
    int estado; //0 inactivo 1 activo

} eProductos;

void inicializar(eProductos[], int);
