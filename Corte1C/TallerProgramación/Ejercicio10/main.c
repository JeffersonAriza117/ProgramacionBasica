#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeroSecreto, intento, intentos;
    int semilla;
    
    printf("=== JUEGO: ADIVINA EL NUMERO ===\n");
    printf("Ingrese un numero para generar el juego: ");
    scanf("%d", &semilla);
    
    numeroSecreto = (semilla * 7 + 13) % 10 + 1;
    
    intentos = 0;
    intento = 0;
    
    printf("\nAdivina el numero entre 1 y 10\n\n");
    
    while (intento != numeroSecreto) {
        printf("Ingrese su intento: ");
        scanf("%d", &intento);
        intentos = intentos + 1;
        
        if (intento != numeroSecreto) {
            if (intento < numeroSecreto) {
                printf("Muy bajo! Intenta de nuevo.\n\n");
            } else {
                printf("Muy alto! Intenta de nuevo.\n\n");
            }
        }
    }
    
    printf("\n¡FELICIDADES! Adivinaste el numero en %d intentos\n", intentos);
    
    return 0;
}
