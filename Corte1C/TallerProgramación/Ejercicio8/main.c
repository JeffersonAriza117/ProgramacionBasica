#include <stdio.h>
#include <stdlib.h>

int main() {
    int anio;
    int esBisiesto;
    
    printf("=== VERIFICADOR DE A�O BISIESTO ===\n\n");
    
    printf("Ingrese el a�o: ");
    scanf("%d", &anio);
    
    esBisiesto = 0;
    
    if (anio % 4 == 0) {
        if (anio % 100 == 0) {
            if (anio % 400 == 0) {
                esBisiesto = 1;
            }
        } else {
            esBisiesto = 1;
        }
    }
    
    if (esBisiesto == 1) {
        printf("El a�o %d ES BISIESTO\n", anio);
    } else {
        printf("El a�o %d NO ES BISIESTO\n", anio);
    }
    
    return 0;
}
