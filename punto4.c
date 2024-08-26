/*Convertir una medida dada en metros a sus equivalentes en decímetros y centímetros.
Presentar por pantalla las tres magnitudes con sus respectivas unidades. */

#include <stdio.h>

int A,DECI,CENTI;

int main (){
  printf("ingrese una medida en metros:\n");
  scanf("%d",&A);
  DECI = (A * 10);
  CENTI = (A * 100);
  printf("La medida en metros es: %d\n", A);
  printf("La medida en decimetros es: %d\n", DECI);
  printf("la medida en decimetros es: %d\n", CENTI);
  return 0;
}