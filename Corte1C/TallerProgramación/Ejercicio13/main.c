#include <stdio.h>
#include <stdlib.h>

int main() {
    float numero, suma, promedio;
    int contador;
    
    printf("=== CALCULO DE PROMEDIO ===\n");
    printf("Ingrese numeros positivos (numero negativo para terminar)\n\n");
    
    suma = 0;
    contador = 0;
    numero = 0;
    
    while (numero >= 0) {
        printf("Ingrese numero: ");
        scanf("%f", &numero);
        
        if (numero >= 0) {
            suma = suma + numero;
            contador = contador + 1;
        }
    }
    
    if (contador > 0) {
        promedio = suma / contador;
        printf("\nCantidad de numeros: %d\n", contador);
        printf("Suma total: %.2f\n", suma);
        printf("PROMEDIO: %.2f\n", promedio);
    } else {
        printf("\nNo se ingresaron numeros positivos\n");
    }
    
    return 0;
}
