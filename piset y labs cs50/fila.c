#include <stdio.h>
#include <cs50.h>

int main ()

{
    int filas = get_int("ingrese las filas: ");

     for(int i =1;i<filas;i++)
     printf("#");
    {
        for(int j=0;j<filas;j++)
        {
            printf("#");
        }
        printf("\n");
    }

}