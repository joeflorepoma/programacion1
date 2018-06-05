
typedef struct
{
    int codigoLibro;
    char tituloLibro[51];
    int codigoAutor;
    int stock;
    int estado;

}eLibro;

int getInt(char mensaje[]);
float getFloat(char mensaje[]);
char getChar(char mensaje[]);
void getString(char mensaje[], char dato[]);
int esNumericoFlotante(char str[]);
int esTelefono(char str[]);

int getStringLetras(char mensaje[], char letras[]);
int getStringNumeros(char mensaje[], char dato[]);
int getStringLetrasyNumeros(char mensaje[], char letras[]);
int getStringNumerosFlotantes(char mensaje[],char input[]);
int getStringTelefono(char mensaje[],char input[]);

void inicializar( eLibro book[], int cantidad);
void mostrarDocumento(eLibro lib);
int buscarEspacioLibre(eLibro book[], int cantidad);
int buscarPorCodigo(eLibro book[], int cantidad, int codigo);
