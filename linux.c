#include <stdio.h>
#include <stdlib.h>
#define CLEAR system("clear");
typedef struct{
    char nombre[40];
    char apellido[40];
    int legajo;
}eAgenda;
void systemPause(void);
void clean_stdin(void);
int main()
{
    char opcion;
    do
    {
        printf("1-ALTA\n2-BAJA\n3-MODIFICAR\n4-IMPRIMIR\n5-SALIR\n");
        scanf(" %c", &opcion);
        clean_stdin();
        CLEAR;
        switch(opcion)
        {
            case '1':
                printf("ENTRO 1\n");
                systemPause();
                CLEAR;
                break;
            case '2':
                printf("ENTRO 2\n");
                systemPause();
                CLEAR;
                break;
            case '3':
                printf("ENTRO 3\n");
                systemPause();
                CLEAR;
                break;
            case '4':
                printf("ENTRO 4\n");
                systemPause();
                CLEAR;
                break;
        }
    }while(opcion != '5');
    return 0;
}

void systemPause(void)
{
    printf("Press enter to continue...\n");
    getchar();
}


void clean_stdin(void)
{
    int c;
    do
    {
        c = getchar();
    } while (c != '\n' && c != EOF);
}
