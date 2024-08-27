/*Ingresar la fecha de nacimiento de una persona con en el formato dd, mm y aaaa.
Mostrar por pantalla la edad.*/
#include <stdio.h>
#include <time.h>

int main() {
    int day, month, year;

    printf("Ingrese su fecha de nacimiento (dd mm aaaa): ");
    scanf("%d %d %d", &day, &month, &year);

    time_t t = time(NULL);
    struct tm *current_time = localtime(&t);

    int current_year = current_time->tm_year + 1900;
    int current_month = current_time->tm_mon + 1;
    int current_day = current_time->tm_mday;

    int age = current_year - year;

    // Adjust age if the birthday hasn't occurred yet this year
    if (current_month < month || (current_month == month && current_day < day)) {
        age--;
    }

    printf("Su edad es: %d años\n", age);

    return 0;
}
