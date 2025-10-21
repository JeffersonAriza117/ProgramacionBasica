#include <stdio.h>
#include <stdlib.h>

int main() {
    int dia, mes;
    
    printf("=== SIGNO ZODIACAL ===\n\n");
    
    printf("Ingrese el dia de nacimiento (1-31): ");
    scanf("%d", &dia);
    
    printf("Ingrese el mes de nacimiento (1-12): ");
    scanf("%d", &mes);
    
    printf("\nTu signo zodiacal es: ");
    
    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19)) {
        printf("ARIES\n");
    } else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20)) {
        printf("TAURO\n");
    } else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) {
        printf("GEMINIS\n");
    } else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22)) {
        printf("CANCER\n");
    } else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22)) {
        printf("LEO\n");
    } else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) {
        printf("VIRGO\n");
    } else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) {
        printf("LIBRA\n");
    } else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) {
        printf("ESCORPIO\n");
    } else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) {
        printf("SAGITARIO\n");
    } else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19)) {
        printf("CAPRICORNIO\n");
    } else if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18)) {
        printf("ACUARIO\n");
    } else if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20)) {
        printf("PISCIS\n");
    }
    
    return 0;
}
