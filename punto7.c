/*Ingresar el radio de un círculo, presentar por pantalla el diámetro, el perímetro y el área
del círculo.*/

#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846
int main() {
    float radio,diametro, perimetro, area;

    printf("Ingrese el radio de un circulo:\n");
    scanf("%f", &radio);
    diametro = radio * 2;
    perimetro = 2 * PI * radio;
    area = PI *(radio*radio);
     printf("El diámetro del círculo es: %.2f metros\n", diametro);
    printf("El perímetro del círculo es: %.2f metros\n", perimetro);
    printf("El área del círculo es: %.2f metros cuadrados\n", area);

    return 0;
}
