struct a{
char nombre[10];
int edad;
};
void main (void)
{
FILE *bin;
struct a pers;
bin=fopen("bin.dat","wb");
printf("\nIngrese el nombre: ");
gets(pers.nombre);
printf("Ingrese la edad: ");
scanf("%d",&pers.edad);
fflush(stdin);
fwrite(&pers,sizeof(pers),1,bin);
fclose(bin);
}
