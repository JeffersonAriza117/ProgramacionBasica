#include <stdio.h>

int main() {
	
    int matriz[4][4];
    
    int maximos[4];
    
    int sumaMaximos = 0;
    
    
    printf("Ingrese los 16 elementos de la matriz 4x4:\n");
    
    for(int i = 0; i < 4; i++) {
    	
        for(int j = 0; j < 4; j++) {
        	
            scanf("%d", &matriz[i][j]);
            
        }
    }
    
    for(int i = 0; i < 4; i++) {
    	
        maximos[i] = matriz[i][0];
        
        for(int j = 1; j < 4; j++) {
        	
            if(matriz[i][j] > maximos[i]) {
            	
                maximos[i] = matriz[i][j];
                
            }
        }
        
        sumaMaximos += maximos[i];
        
    }
    
    printf("\nMaximo\n");
    
    for(int i = 0; i < 4; i++) {
    	
        for(int j = 0; j < 4; j++) {
        	
            printf("%4d ", matriz[i][j]);
            
        }
        
        printf("      %d\n", maximos[i]);
        
    }
    
    printf("\nMedia de los maximos: %.2f\n", (float)sumaMaximos/4);
    
    return 0;
}
