#include <stdio.h>
/* Busqueda secuencial en arreglos ordenados en forma creciente. */

const int MAX=100;

void Lectura(int, int);             /* Prototipos de funciones. */
int Busca(int *, int, int);

int main (void)
{
    int RES, ELE, TAM, VEC[MAX];
    do
    {
        printf("Ingrese el tama�o del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM > MAX || TAM < 1);
    /* Se verifica que el tama�o del arreglo sea correcto. */
    Lectura(VEC, TAM);
    printf("\nIngrese el elemento a buscar:");
    scanf("&d", &ELE);
    RES = Busca(VEC, TAM, ELE); /*Se llama a la funcion que busca en el arreglo. */
    if (RES)
        /* Si RES tiene un valor verdadero -diferente de 0-, se escribe la posicion
        en la que se encontro al elemento. */
        printf("\nEl elemento no se encuentra en la posicion: %d",RES);
    else
        printf("\nEl elemento no se encuebtra en el arreglo");
}

void Lectura(int A[], int T)
/* La funcion Lectura se utiliza para leer un arreglo unidimensional de T
elemntos de un tipo entero. */
{
    int I;
    for (I=0; i<T; I++)
    {
        printf("Ingrese el elemento %d: ", I+1);
        scanf("%d", &A[I]);
    }
}
