#include <stdio.h>
#include <string.h>
struct alumno
{
    int matricula;
    char nombre[50];
    char direccion[50];
    char materia[50];
    float nota;
};
int main()
{
    int i;
    int h=0;
    
    struct alumno a[100];
    do
    {
        printf("Ingrese una opcion \n");
        printf("Opcion 1:Ingresar nuevo alumno \n");
        printf("Opcion 2:mostrar el listado de alumnos \n");
        printf("Opcion 3:Salir del programa \n");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
            printf("Ingresar un nuevo alumno\n");
            printf("Ingrese la matricula \n");
            scanf("%d", &a[h].matricula);
            fflush(stdin);
            printf("Ingrese el nombre \n");
            gets(a[h].nombre);
            printf("Ingrese la direccion \n");
            gets(a[h].direccion);
            printf("Ingrese la materia \n");
            gets(a[h].materia);
            printf("Ingrese la nota \n");
            scanf("%f", &a[h].nota);
            fflush(stdin);
            h++;
            break;
        case 2:
        {
            printf("Alumno %d \n",i+1);
            printf("Matricula: \n");
            printf("%d \n", a[h].matricula);
            printf("Nombre: \n");
            puts(a[h].nombre);
            printf("Direccion: \n");
            puts(a[h].direccion);
            printf("Materia: \n");
            puts(a[h].materia);
            printf("Nota: \n");
            printf("%f \n", a[h].nota);
        }
            break;    
        case 3:
            printf("Gracias por usar el programa \n");
            break;
        default:
            printf("No existe esa opcion \n");
            break;
        }
    } while (i<3);
    
        
    return 0;
}
