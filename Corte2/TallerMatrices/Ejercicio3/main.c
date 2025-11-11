#include <stdio.h>

int main() {
	
    int matriz[4][4];
    
    int maximo, minimo, suma = 0;
    
    printf("Ingrese los 16 elementos de la matriz 4x4:\n");
    
    for(int i = 0; i < 4; i++) {
    	
        for(int j = 0; j < 4; j++) {
        	
            scanf("%d", &matriz[i][j]);
            
            if(i == 0 && j == 0) {
            	
                maximo = matriz[i][j];
                
                minimo = matriz[i][j];
                
            } else {
            	
                if(matriz[i][j] > maximo) {
                	
                    maximo = matriz[i][j];
                    
                }
                if(matriz[i][j] < minimo) {
                	
                    minimo = matriz[i][j];
                    
                }
            }
            
            suma += matriz[i][j];
        }
    }
    
    printf("\nMatriz ingresada:\n");
    
    for(int i = 0; i < 4; i++) {
    	
        for(int j = 0; j < 4; j++) {
        	
            printf("%4d ", matriz[i][j]);
            
        }
        
        printf("\n");
        
    }
    
    printf("\nValor maximo: %d\n", maximo);
    
    printf("Valor minimo: %d\n", minimo);
    
    printf("Media de todos los elementos: %.2f\n", (float)suma/16);
    
    return 0;
}
