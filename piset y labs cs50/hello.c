#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string nombre1 = get_string("ingrese su primer nombre: ");

    printf("hello, %s\n", nombre1);

    printf("%s", nombre1);

    return 0;
}