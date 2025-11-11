#include <stdio.h>

int enterValue() {
	
    int value;
    
    printf("Ingrese un valor: ");
    
    scanf("%d", &value);
    
    return value;
    
}

float divide(int a, int b) {
	
    if (b == 0) {
    	
        printf("Error: No se puede dividir por cero\n");
        
        return 0;
        
    }
    float r = (float)a / b;
    
    return r;
    
}

void showResult(float r) {
	
    printf("Resultado de la division = %.2f\n", r);
    
}

void main() {
	
    int operand1;
    
    int operand2;
    
    float result;
    
    printf("=== DIVISION ===\n");
    
    operand1 = enterValue();
    
    operand2 = enterValue();
    
    result = divide(operand1, operand2);
    
    showResult(result);
    
}
