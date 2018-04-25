typedef struct{

    int codigo;
    char descripcion[51];
    float importe;
    int cantidad;
    int estado; // 0 vacio 1 lleno

}eProducto;

void inicializar(eProducto[], int);
void alta(eProducto[], int);


int buscarEmpleado(eProducto[], int, int);
int buscarLibre(eProducto[], int);
void mostrarEmpleado(eProducto);


