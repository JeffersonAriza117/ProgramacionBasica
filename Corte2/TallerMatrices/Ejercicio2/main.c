#include <stdio.h>

int main() {
    int matriz[4][4];
    
    int sumaPares = 0, sumaImpares = 0;
    
    int sumaPosicionPar = 0, sumaPosicionImpar = 0;
    
    int contPares = 0, contImpares = 0;
    
    int contPosPar = 0, contPosImpar = 0;
    
    printf("Ingrese los 16 elementos de la matriz 4x4:\n");
    
    for(int i = 0; i < 4; i++) {
    	
        for(int j = 0; j < 4; j++) {
        	
            scanf("%d", &matriz[i][j]);
            
            if(matriz[i][j] % 2 == 0) {
            	
                sumaPares += matriz[i][j];
                
                contPares++;
                
            } else {
            	
                sumaImpares += matriz[i][j];
                
                contImpares++;
            }
            
            if((i + j) % 2 == 0) {
            	
                sumaPosicionPar += matriz[i][j];
                
                contPosPar++;
                
            } else {
            	
                sumaPosicionImpar += matriz[i][j];
                
                contPosImpar++;
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
    
    printf("\nNumeros pares: Suma = %d, Media = %.2f\n", sumaPares, (float)sumaPares/contPares);
    
    printf("Numeros impares: Suma = %d, Media = %.2f\n", sumaImpares, (float)sumaImpares/contImpares);
    
    printf("Posiciones pares: Suma = %d, Media = %.2f\n", sumaPosicionPar, (float)sumaPosicionPar/contPosPar);
    
    printf("Posiciones impares: Suma = %d, Media = %.2f\n", sumaPosicionImpar, (float)sumaPosicionImpar/contPosImpar);
    
    return 0;
}
