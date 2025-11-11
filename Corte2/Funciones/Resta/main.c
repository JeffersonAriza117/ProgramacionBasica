#include <stdio.h>


int enterValue() {
	
    int value;
    
    printf("Ingrese un valor: ");
    
    scanf("%d", &value);
    
    return value;
    
}

int subtract(int a, int b) {
	
    int r = a - b;
    
    return r;
    
}

void showResult(int r) {
	
    printf("Resultado de la resta = %d\n", r);
    
}


void main() {
	
    int operand1;
    
    int operand2;
    
    int result;
    
    printf("=== RESTA ===\n");
    
    operand1 = enterValue();
    
    operand2 = enterValue();
    
    result = subtract(operand1, operand2);
    
    showResult(result);
    
}
