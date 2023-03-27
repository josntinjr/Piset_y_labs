#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int mario = 0; // variable mario
    int lili = 0;  // variable mario

    do
    {
        mario = get_int("Ingrese un numero del 1 al 8: \n"); // ingresar numero deseado
    }
    while (1 > mario || mario > 8);

    // printf("S %i \n", mario);

    // mario = mario;

    lili = mario;

    for (int i = 0; i < lili; i++)
     {
        for (int j = 0; j < i+1; j++)
         {
             printf(""#"");
         }
         printf("\n");
     }
    return 0;
}