/*Ingresar dos números enteros y presentar por pantalla la media geométrica.*/

#include <stdio.h>
#include <math.h>

int A,B,RESULT;


int main (){
  printf("ingrese 2 numeros:\n");
  scanf("%d",&A);
  scanf("%d",&B);
  RESULT = sqrt(A * B);
  printf("la media geometrica de los 2 numeros es: %d\n", RESULT);
  return 0;
}