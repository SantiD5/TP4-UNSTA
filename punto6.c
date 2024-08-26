/*Ingresar los lados de un rectángulo, presentar por pantalla su perímetro y su superficie.*/

#include <stdio.h>

int main() {
    float A, B, perimetro, superficie;

    printf("Ingrese la longitud del primer lado del rectángulo en metros:\n");
    scanf("%f", &A);
    printf("Ingrese la longitud del segundo lado del rectángulo en metros:\n");
    scanf("%f", &B);

    perimetro = 2 * (A + B);
    superficie = A * B;

    printf("El perímetro del rectángulo es: %.2f metros\n", perimetro);
    printf("La superficie del rectángulo es: %.2f metros cuadrados\n", superficie);

    return 0;
}
