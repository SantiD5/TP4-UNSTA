#include <stdio.h>

int main() {
    int A, B, C;
    printf("Ingrese un número:\n");
    scanf("%d", &A);
    printf("Ingrese el segundo número:\n");
    scanf("%d", &B);
    printf("Ingrese el tercer número:\n");
    scanf("%d", &C);
    if (A == B && B == C) {
        printf("Son iguales\n");
    } else {
        if (A > B) {
            int temp = A;
            A = B;
            B = temp;
        }
        if (A > C) {
            int temp = A;
            A = C;
            C = temp;
        }
        if (B > C) {
            int temp = B;
            B = C;
            C = temp;
        }
        printf("El orden es: %d %d %d\n", A, B, C);
    }
    return 0;
}
