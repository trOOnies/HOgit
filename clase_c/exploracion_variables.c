/* Sumar dos variables */

#include <stdio.h>

int main(void) {
    double x,y,resultado;
    char usuario[21];

    /* Usuario  */
    printf(" Ingrese nombre de usuario: ");
    scanf (" %s", &usuario);
    printf("\n");
    printf(" Bienvenido %s.\n\n", usuario);

    /* Sumandos */
    printf(" Ingrese un valor para x: ");
    scanf (" %lf", &x);
    printf(" Ingrese un valor para y: ");
    scanf (" %lf", &y);
    printf("\n");

    /* Resultado */
    resultado = x + y;
    printf(" La suma de %lf y %lf es:\n", x, y);
    printf(" %lf", resultado);

    return 0;
}
