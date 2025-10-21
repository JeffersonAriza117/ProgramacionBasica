#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, i, contador;
    int paresEncontrados[3];
    
    printf("=== BUSCAR TRES NUMEROS PARES ===\n\n");
    
    printf("Ingrese el primer numero (N): ");
    scanf("%d", &n);
    
    printf("Ingrese el segundo numero (M): ");
    scanf("%d", &m);
    
    if (n <= m) {
        printf("\nERROR: El primer numero debe ser MAYOR que el segundo\n");
    } else {
        printf("\nBuscando numeros pares entre %d y %d...\n\n", m, n);
        
        contador = 0;
        
        for (i = m + 1; i < n; i = i + 1) {
            if (i % 2 == 0 && contador < 3) {
                paresEncontrados[contador] = i;
                contador = contador + 1;
            }
        }
        
        if (contador >= 3) {
            printf("Tres numeros pares encontrados:\n");
            printf("1. %d\n", paresEncontrados[0]);
            printf("2. %d\n", paresEncontrados[1]);
            printf("3. %d\n", paresEncontrados[2]);
        } else {
            printf("No hay tres numeros pares entre los valores ingresados\n");
        }
    }
    
    return 0;
}
