/*Ingresar tres números enteros, determinar si están ordenados en forma ascendente o
descendente, y si son consecutivos. Presentar por pantalla el mensaje correspondiente*/
#include <stdio.h>
int main(){
  int A,B,C;

  printf("ingrese un numero entero:\n");
  scanf("%d",&A);
  printf("ingrese un segundo numero entero:\n");
  scanf("%d",&B);
  printf("ingrese un tercer numero entero:\n");
  scanf("%d",&C);

  if(A < B && B < C){
    if(A + 1 == B && B + 1 == C){
    printf("Están ordenados de forma ascendente y son consecutivos.\n");
    }else{
    printf("Están ordenados de forma ascendente pero no son consecutivos.\n");
  }
  }else if(A > B && B > C){
    if(A - 1 == B && B - 1 == C){
    printf("esta ordenado en forma descendente y son consecutivos");
    }else{
    printf("Están ordenados de forma descendente pero no son consecutivos.\n");
    }
  }else{
      printf("No están ordenados ni ascendentemente ni descendentemente.\n");
  }
}
