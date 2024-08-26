/*Ingresar tres valores positivos, indicar si son lados de un triángulo rectángulo.*/
#include <stdio.h>
#include <math.h>

int main() {
    int A, B, C;
    
     do {
        printf("Ingrese un valor positivo para A:\n");
        scanf("%d", &A);
        if (A <= 0) {
            printf("Error: Por favor, ingrese un valor positivo.\n");
        }
    } while (A <= 0);
    do {
        printf("Ingrese un valor positivo para B:\n");
        scanf("%d", &A);
        if (A <= 0) {
            printf("Error: Por favor, ingrese un valor positivo.\n");
        }
    } while (A <= 0);

    do {
        printf("Ingrese un valor positivo para C\n");
        scanf("%d", &A);
        if (A <= 0) {
            printf("Error: Por favor, ingrese un valor positivo.\n");
        }
    } while (A <= 0);


    if ((A * A == B * B + C * C) || 
        (B * B == A * A + C * C) || 
        (C * C == A * A + B * B)) {
        printf("Es un triángulo rectángulo\n");
    } else {
        printf("No es un triángulo rectángulo\n");
    }
    
    return 0;
}