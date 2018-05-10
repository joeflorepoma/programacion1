
typedef struct
{

    int codigoProv;
    char descripcionProv[51];


} eProveedor;

typedef struct
{

    eProveedor codigo;
    //eProveedor descripcion[51];
    int codigoProducto;
    char descripcionProducto[51];
    float importe;
    int cantidad;
    int estado;

} eProducto;

int getInt(char mensaje[]);
void getString(char mensaje[], char dato[]);
float getFloat(char mensaje[]);
int esNumericoFlotante(char str[]);
int getStringLetras(char mensaje[], char dato[]);
int getStringNumeros(char mensaje[], char dato[]);
int getStringAlphaNumerico(char mensaje[], char dato[]);
int getStringNumerosFlotantes(char mensaje[],char flotantes[]);

int menu();
int menu2();
int menuABM();

void mostrarProducto(eProducto prod);
void mostrarDocumentos(eProducto product[], int cantidad);

void inicializar(eProducto product[], int cantidad);
int buscarEspacioLibre(eProducto product[], int cantidad);
int buscarPorCodigo(eProducto product[], int cantidad, int cod);

void altaProductos(eProducto product[], int cantidad);
void modificarProductos(eProducto product[], int cantidad);
void bajaProducto(eProducto product[], int cantidad);

void altaProveedores(eProveedor provee[], int cantidad);

void informarSuperan(eProducto product[],int cantidad);
void informarNoSuperan(eProducto product[],int cantidad);

void stockMenos(eProducto product[],int cantidad);
