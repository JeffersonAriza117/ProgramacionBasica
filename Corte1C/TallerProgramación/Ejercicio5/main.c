#include <stdio.h>
#include <stdlib.h>

int main() {
    float cantidadApostada, resultado;
    int moneda;
    
    printf("=== JUEGO: DOBLE O NADA ===\n\n");
    
    printf("Ingrese la cantidad a apostar: ");
    scanf("%f", &cantidadApostada);
    
    printf("Lanzando la moneda...\n");
    printf("Ingrese resultado (0=Cruz, 1=Cara): ");
    scanf("%d", &moneda);
    
    if (moneda == 1) {
        resultado = cantidadApostada * 2;
        printf("\nResultado: CARA\n");
        printf("¡Felicidades! Has ganado: %.2f\n", resultado);
    } else {
        resultado = 0;
        printf("\nResultado: CRUZ\n");
        printf("Lo siento, has perdido todo.\n");
        printf("Resultado final: %.2f\n", resultado);
    }
    
    return 0;
}
