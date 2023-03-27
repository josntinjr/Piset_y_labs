#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main ()

{
    int d;

    printf("Que operacion matematica desea realizar?\n 1.Potenciacion\n 2.Raiz cuadrada\n 3.Redondear\n 4.Extra\n");
    scanf("%d", &d);


    switch (d)
    {
        case 1:
        {
            float a= get_float("Ingrese el digito que desea potenciar: ");
            float b= get_float("Ingrese la potencia que se aplicara a su digito: ");
            float r= float powf(float a, float b);
            printf("Tu numero es", r);

        }
    }

}