/*Ingresar dos puntos en el plano P1(x1, y1) y P2(x2, y2), estos corresponden, respec-
tivamente, a los vértices inferior izquierdo y superior derecho de un rectángulo. Indicar
el perímetro y la superficie del rectángulo.*/

#include <stdio.h>
#include <math.h>
int main() {
    float Ax,Ay,Bx,By, perimetro, superficie, Lx,Ly;

    printf("Ingrese el punto en el plano AX:\n");
    scanf("%f", &Ax);
    printf("Ingrese el punto en el plano AY:\n");
    scanf("%f", &Ay);
    printf("Ingrese el punto en el plano BX:\n");
    scanf("%f", &Bx);
    printf("Ingrese el punto en el plano BY:\n");
    scanf("%f", &By);
    Lx = fabs(Bx - Ax);
    Ly = fabs(By-Ay);
    perimetro = 2 *(Lx + Ly);
    superficie = Lx * Ly;

    printf("El perímetro del rectángulo es: %.2f metros\n", perimetro);
    printf("La superficie del rectángulo es: %.2f metros cuadrados\n", superficie);

    return 0;
}