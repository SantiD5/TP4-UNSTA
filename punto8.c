/*Dado el precio de un producto indicar, por pantalla, los impuestos que debe pagar. IVA
21%, Ingresos Brutos 2.5% e Impuesto Municipal 1.5%*/
#include <stdio.h>
int main() {
    float precio,IVA,ingBrutos,impMunicipal;

    printf("Ingrese el precio del producto:\n");
    scanf("%f", &precio);
    IVA = 0.21 * precio;
    ingBrutos = 0.025 * precio;
    impMunicipal = 0.015 * precio;
     printf("El IVA que hay que pagar es: %.2f$\n", IVA);
    printf("Ingresos brutos que hay que pagar es: %.2f$\n", ingBrutos);
    printf("El impuestos municipal que hay que pagar es: %.2f$\n", impMunicipal);

    return 0;
}
