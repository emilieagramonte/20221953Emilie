#include<stdio.h>
/* Frecuencia de calificaciones.
El programa, al recibir como datos las calificaciones de un grupo de 50
➥alumnos, obtiene la frecuencia de cada una de las calificaciones y además
➥escribe cuál es la frecuencia más alta. */

const int TAM = 50;

void Lectura(int *, int);
void Frecuencia(int, int, int, int);       /* Prototipos de funciones. */
void Impresion(int *, int);
void Mayor(int *, int);

void main(void)
{
    int CAL[TAM], FRE[6] = {0};       /* Declaración de los arreglos. */
    Lectura(CAL, TAM);                /* Se llama a la función Lectura. */
    Frecuencia(CAL, TAM, FRE, 6);
    /* Se llama a la función Frecuencia, se pasan ambos arreglos. */
    printf("\nFrecuencia de calificaciones\n");
    Impresion(FRE, 6);
    Mayor(FRE, 6);
}

void Lectura(int VEC[], int T)
/* La función Lectura se utiliza para leer el arreglo de calificaciones. */
int I;
for(I = 0; I < T; I++)
{
    printf("Ingrese la calificacion -0:5- del alumno %d: ", I + 1);
    scanf("%d", &VEC[I]);
}

void Impresion(int VEC[], int T)
/* La función Impresión se utiliza para imprimir el arreglo de frecuencias. */
{
    int I;
    for(I = 0; I < T; I++)
        if(MVAL < X[I])
    {
        MFRE = I;
        MVAL = X[I];
    }
    printf("\n\nMayor frecuencia de calificaciones: %d \t Valor: %d", MFRE, MVAL);
}
