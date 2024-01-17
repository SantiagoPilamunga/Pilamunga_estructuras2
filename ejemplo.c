//programa que permite al usuario el ingreso y la presentacion de n alumnos
#include <stdio.h>
#include <string.h>
struct alumno   //estructura que se va a utilizar anteriormente realizada
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
    
    struct alumno a[100];   //tiene como numero maximo de estudiantes 100
    do                                                      //se utiliza la funcion switch para el ingreso y presentacion de los datos
    {                                                       // y el do while para que se repita hasta que el usuario ya no lo necesite
        printf("Ingrese una opcion \n");
        printf("Opcion 1:Ingresar nuevo alumno \n");
        printf("Opcion 2:mostrar el listado de alumnos \n");
        printf("Opcion 3:Salir del programa \n");
        scanf("%d", &i);
        switch (i)
        {
        case 1:                                         //en el primer caso se realiza el ingreso de datos de un nuevo alumno
            printf("Ingresar un nuevo alumno\n");
            printf("Ingrese la matricula \n");          //se utiliza a[h] para que se guarden los datos de los alumnos
            scanf("%d", &a[h].matricula);               //el scanf se utiliza en los datos que sean tipo float o int
            fflush(stdin);                              //esta funcion se utiliza despues de un scanf
            printf("Ingrese el nombre \n");
            gets(a[h].nombre);                          //funcion gets se utiliza para las cadenas de caracteres y cumple casi la misma funcion que el scanf
            printf("Ingrese la direccion \n");
            gets(a[h].direccion);
            printf("Ingrese la materia \n");
            gets(a[h].materia);
            printf("Ingrese la nota \n");
            scanf("%f", &a[h].nota);
            fflush(stdin);
            h++;                                        //se aumenta h para que se guarde los datos del siguiente alumno si es necesario
            break;
        case 2:                                         //se realiza la presentacion de los datos
            for (int i = 0; i < h; i++)
            {                                           //se utiliza un for para imprimir los datos de cada alumno que ha sido ingresado
                printf("Alumno %d \n",i+1);
                printf("Matricula: \n");                //se utiliza printf para datos tipo int y float
                printf("%d \n", a[i].matricula);
                printf("Nombre: \n");
                puts(a[i].nombre);                      //para las cadenas de caracteres se utiliza puts que es como un printf
                printf("Direccion: \n");
                puts(a[i].direccion);
                printf("Materia: \n");
                puts(a[i].materia);
                printf("Nota: \n");
                printf("%f \n", a[i].nota);
            }
            break;    
        case 3:                                         //se usa para salir del programa
            printf("Gracias por usar el programa \n");
            break;
        default:                                        //si no se digita una opcion que existe
            printf("No existe esa opcion \n");
            break;
        }
    } while (i!=3);
    
        
    return 0;
}
