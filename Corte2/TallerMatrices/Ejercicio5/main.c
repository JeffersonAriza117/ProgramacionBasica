#include <stdio.h>

int main() {
    int matriz[4][4];
    
    int vectorMaximos[4];
    
    printf("Ingrese los 16 elementos de la matriz 4x4:\n");
    
    for(int i = 0; i < 4; i++) {
    	
        for(int j = 0; j < 4; j++) {
        	
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < 4; i++) {
    	
        vectorMaximos[i] = matriz[i][0];
        
        for(int j = 1; j < 4; j++) {
        	
            if(matriz[i][j] > vectorMaximos[i]) {
            	
                vectorMaximos[i] = matriz[i][j];
            }
        }
    }

    printf("\nMatriz original:\n");
    
    for(int i = 0; i < 4; i++) {
    	
        for(int j = 0; j < 4; j++) {
        	
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nVector de maximos: ");
    
    for(int i = 0; i < 4; i++) {
    	
        printf("%d ", vectorMaximos[i]);
    }
    printf("\n");
    
    return 0;
}
