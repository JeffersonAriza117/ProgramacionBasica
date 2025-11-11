#include <stdio.h>

int main() {
	
    float matriz[4][4];
    
    float sumaFilas[4];
    
    float sumaColumnas[4];
    
    for(int i = 0; i < 4; i++) {
    	
        sumaFilas[i] = 0;
        
        sumaColumnas[i] = 0;
    }
    
    printf("Ingrese los 16 elementos de la matriz 4x4:\n");
    
    for(int i = 0; i < 4; i++) {
    	
        for(int j = 0; j < 4; j++) {
        	
            scanf("%f", &matriz[i][j]);
            
            sumaFilas[i] += matriz[i][j];
            
            sumaColumnas[j] += matriz[i][j];
        }
    }
    
    printf("\nMatriz original:\n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%6.1f ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatriz con sumas:\n\n");
    
    for(int i = 0; i < 4; i++) {
    	
        for(int j = 0; j < 4; j++) {
        	
            printf("%6.1f ", matriz[i][j]);
        }
        printf(" = %.1f\n", sumaFilas[i]);
    }
    
    printf("\n");
    
    for(int j = 0; j < 4; j++) {
    	
        printf("%6.1f ", sumaColumnas[j]);
    }
    printf("\n");
    
    return 0;
}
