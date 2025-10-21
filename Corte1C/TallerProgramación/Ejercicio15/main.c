#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, i, esPrimo;
    
    printf("=== VERIFICADOR DE NUMERO PRIMO ===\n\n");
    
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    
    if (numero <= 1) {
        esPrimo = 0;
    } else {
        esPrimo = 1;
        
        for (i = 2; i < numero; i = i + 1) {
            if (numero % i == 0) {
                esPrimo = 0;
            }
        }
    }
    
    if (esPrimo == 1) {
        printf("\nEl numero %d ES PRIMO\n", numero);
    } else {
        printf("\nEl numero %d NO ES PRIMO\n", numero);
    }
    
    return 0;
}
