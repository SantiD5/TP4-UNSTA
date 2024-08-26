/*Convertir temperatura en grados Fahrenheit a grados centígrados. Presentar por
pantalla ambos valores con sus unidades.
TC = 5/9 (TF - 32)*/
#include <stdio.h>

float A,Centigrados;

int main (){
  printf("ingrese una temperatura en grados Fahrenheit:\n");
  scanf("%f",&A);
  Centigrados = (5.0/9.0*(A - 32));
  printf("La temperatura en grados centigrados es: %.2f°C\n", Centigrados);
  return 0;
}