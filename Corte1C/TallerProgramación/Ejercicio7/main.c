#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota;
    
    printf("=== SISTEMA DE CALIFICACIONES ===\n\n");
    
    printf("Ingrese la nota del examen (0-10): ");
    scanf("%f", &nota);
    
    if (nota < 0 || nota > 10) {
        printf("Error: La nota debe estar entre 0 y 10\n");
    } else if (nota < 5) {
        printf("Calificacion: REPROBADO\n");
    } else if (nota >= 5 && nota < 7) {
        printf("Calificacion: APROBADO\n");
    } else if (nota >= 7 && nota < 9) {
        printf("Calificacion: NOTABLE\n");
    } else if (nota >= 9 && nota < 10) {
        printf("Calificacion: SOBRESALIENTE\n");
    } else if (nota == 10) {
        printf("Calificacion: MATRICULA DE HONOR\n");
    }
    
    return 0;
}
