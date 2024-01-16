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
    int h;
    
    struct alumno alumnos[h];
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
            h=1;
            printf("Ingresar un nuevo alumno");
            scanf("%d", &alumnos[h].matricula);
            gets(alumnos[h].nombre);
            gets(alumnos[h].direccion);
            gets(alumnos[h].materia);
            h++;
            break;
        case 2:
            printf("Mostrar el listado de los alumnos");
            puts(alumnos[h].matricula);
            break;    
        case 3:
            puts("gracias por usar el programa");
            break;
        default:
            printf("No existe esa opcion");
            break;
        }
    } while (i==3);
    
        
    return 0;
}
