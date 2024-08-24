/*Leer dos números enteros presentar por pantalla el promedio de ellos. */
#include <stdio.h>

int A,B;
int main (){
  printf("ingrese 2 numeros:\n");
  scanf("%d",&A);
  scanf("%d",&B);
  printf("el promedio de los 2 numeros es: %d\n", (A + B)/ 2);
  return 0;
}