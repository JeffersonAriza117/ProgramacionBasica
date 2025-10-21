#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, i, resultado;
    
    printf("=== TABLA DE MULTIPLICAR ===\n\n");
    
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    
    printf("\nTabla del %d:\n\n", numero);
    
    for (i = 1; i <= 10; i = i + 1) {
        resultado = numero * i;
        printf("%d x %d = %d\n", numero, i, resultado);
    }
    
    return 0;
}
