#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, contadorPositivos, contadorNegativos;
    
    printf("=== CONTADOR DE POSITIVOS Y NEGATIVOS ===\n");
    printf("Ingrese numeros (0 para terminar)\n\n");
    
    contadorPositivos = 0;
    contadorNegativos = 0;
    numero = 1;
    
    while (numero != 0) {
        printf("Ingrese numero: ");
        scanf("%d", &numero);
        
        if (numero > 0) {
            contadorPositivos = contadorPositivos + 1;
        } else if (numero < 0) {
            contadorNegativos = contadorNegativos + 1;
        }
    }
    
    printf("\n=== RESULTADOS ===\n");
    printf("Numeros POSITIVOS: %d\n", contadorPositivos);
    printf("Numeros NEGATIVOS: %d\n", contadorNegativos);
    
    return 0;
}
