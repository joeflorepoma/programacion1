#include <stdio.h>
#include <stdlib.h>
int GetIntEntreMinMax(char mensaje[],int maximo, int minimo,int *respuesta);
int getInt(char mensaje[],char mensajeError[],int intentos, int maximo, int minimo,int *respuesta);
void saludar(void);
int cambiar(int *dato);
int main()
{
    /*
    int respuesta;
    int sueldo;
    respuesta=GetIntEntreMinMax("ingrese sueldo",9000,3000,&sueldo);
    if(respuesta==0)
    {
        printf("sueldo correcto :%d",sueldo);
    }else{
        if(respuesta<0)
        {
            printf("te falto");
        }else
        {
            printf("te pasaste");
        }
    }*/

    int numero=3;
    cambiar(&numero);
    printf("\n main numero: %d",numero);


    return 0;
}
int GetIntEntreMinMax(char mensaje[],int maximo, int minimo,int *respuesta)
{
    int retorno=0;
    int ingresoAux;
    printf("%s",mensaje);
    scanf("%d",&ingresoAux);
    if(ingresoAux<minimo)
    {
        retorno=-1;
    }else{
        if(ingresoAux>maximo)
        {
           retorno= 1;
        }else
        {
            *respuesta=ingresoAux;
           retorno= 0;
        }

    }

    return retorno;
}
int cambiar(int  *dato)
{

    printf("ingrese dato:");
    scanf("%d",dato);
    printf(" \n en cambiar: %d",*dato);

   //*dato=666;
     return 0;
}
void saludar(void)
{
     printf("Hola UTNFRA!\n");
}

/** \brief
 * getint()
 * \param mensaje[] char mensaje de pedido de datos
 * \param mensajeError[] char mesaje de error
 * \param intentos int cantidad de posibilidades
 * \param maximo int el maximo numero posible
 * \param minimo int el minimo numero posible
 * \return int numero entero si se pudo y el error
 *
 */
int getInt(char mensaje[],char mensajeError[],int intentos, int maximo, int minimo, int *respuesta)
{
    int retorno=0;
    do{
        printf("%s",mensaje);
        scanf("%d",&respuesta);
        scanf("%d",*respuesta);
      //  scanf("%d",respuesta);
        if(retorno<=maximo&& retorno>=minimo)
        {
            retorno=0;
            break;
        }else{
            if(respuesta<minimo)
            {
                retorno=-1;
            }else{
                retorno=1;
            }
        }
        printf("%s",mensajeError);
       intentos--;
    }while(intentos>0);
    return retorno;
}//fin getInt














