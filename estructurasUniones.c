#include <stdio.h>

void Añadir();
void Borrar();
void Buscar();
void Eliminar();

#define TAMANIO 10
 /*Definicion de mi estructura*/
struct usuarios
{
    char nombre[20];
    char direccion[30];
    char telefonoFijo[10];
    char telefonoMovil[10];
    char direccionDeCorreo[15];
};
/*Definicion de mi funcion struct*/
struct usuarios [T];

int main()
{
    char option;
/*Defino mi ciclo de menu y trabajo*/
    while(option=='E')
    {
        printf("Elige que deseas hacer\n\nA) Añadir un usuario\nB) Eliminiar un usuario\nC) Buscar un usuario\nD) Eliminar un usuario por nombre\nE) Salir\n\n");

        switch (option)
        {
            case 'A':/*Añadir*/ Añadir();

            case 'B':/*Borrar*/Borrar();

            case 'C':/*Buscar*/ Buscar();

            case 'D':/*Eliminar una entrada por nombre*/ Eliminar();

        }
    }

    return 0;
}

void Añadir()
{
    int i;
    for(i=0;i<=T;i++)
    {
        printf("Nombre: ");
        scanf("%s",usuarios.nombre);
        printf("Direccion: ");
        scanf("%s",usuarios.direccion);
        printf("Telefono Fijo: ");
        scanf("%s",usuarios.telefonoFijo);
        printf("Telefono Movil: ");
        scanf("%s",usuarios.telefonoMovil);
        printf("Direccion de Correo: ");
        scanf("%s",usuarios.direccionDeCorreo);
    }

}

void Borrar()
{
    for(int i=0;i<=T;i++)
    {
        free(i);
    }
}

void Buscar()
{
    printf("Dame el nombre que buscas\n");
    scanf("%s",google[20]);

    for(i=0;i<T;i++)
    {
        if(google[20]==(usuarios.nombre || usuarios.direccion || usuarios.telefonoFijo || usuarios.telefonoMovil || usuarios.direccionDeCorreo)
        {
            printf(" %s si se encuentra",google[20]);
            printf("%s",usuarios.nombre);
            printf("%s",usuarios.direccion);           
            printf("%s",usuarios.telefonoFijo);
            printf("%s",usuarios.telefonoMovil);
            printf("%s",usuarios.direccionDeCorreo);                       
        }else
        {
            printf("No se encuentra %s", google[20]);
        }
        
    }

}

void Eliminar()
{
    int google[20]
     printf("Dame el nombre que deseas eliminar\n");
    scanf("%s",google[20]);

    for(i=0;i<T;i++)
    {
        if(google[20]==(usuarios.nombre || usuarios.direccion || usuarios.telefonoFijo || usuarios.telefonoMovil || usuarios.direccionDeCorreo)
        {
           free(usuarios.nombre);
           free(usuarios.direccion)                     
        }
    }

}
