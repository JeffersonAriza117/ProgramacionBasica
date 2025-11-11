#include <stdio.h>

int main() {
	
    int matriz[4][4];
    
    int pares = 0;
    
    printf(" EJERCICIO 1 \n");
    
    printf("Contar numeros pares en una matriz 4x4\n\n");
    
    printf("Ingrese los elementos uno por uno (para continuar digitando presione espacio):\n");
    
    for(int i = 0; i < 4; i++) {
    	
        for(int j = 0; j < 4; j++) {
        	
            scanf("%d", &matriz[i][j]);
            
            if(matriz[i][j] % 2 == 0) {
            	
                pares++;
            }
        }
    }
    
    printf("\nMatriz ingresada:\n");
    
    for(int i = 0; i < 4; i++) {
    	
        for(int j = 0; j < 4; j++) {
        	
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\n RESULTADO \n");
    
    printf("El numero de valores pares es de: %d\n", pares);
    
    return 0;
}
