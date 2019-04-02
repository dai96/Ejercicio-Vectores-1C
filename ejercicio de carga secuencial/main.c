#include <stdio.h>
#include <stdlib.h>
#define T 5


int numero [T], indice, i, buscado;


int main()
{
    cargaSecuencial(numero,T);
    mostrarvector(numero,T);
    printf("\nEl numero maximo es: %d",buscarMax(numero,T));
    printf("\nEl numero minimo es: %d",buscarMin(numero,T));

    printf("\n\n---------Busca un numero en el vector---------\n\n");
    printf("ingrese un numero: ");
    scanf("%d", &indice);

    buscado=buscarInt(numero,T,indice);
    if (buscado==-1)
    {
        printf("No se encontro su numero en el array");
    }
    else
    {
        printf("Su numero se encuentra en la posicion: %d",buscado);

    }

    return 0;
}

