#include <stdio.h>

int enterValue() {
	
    int value;
    
    printf("Ingrese un valor: ");
    
    scanf("%d", &value);
    
    return value;
}

int add(int a, int b) {
	
    int r = a + b;
    
    return r;
}

void showResult(int r) {
	
    printf("Resultado de la suma = %d\n", r);
}

void main() {
	
    int operand1;
    
    int operand2;
    
    int result;
    
    printf("=== SUMA ===\n");
    
    operand1 = enterValue();
    
    operand2 = enterValue();
    
    result = add(operand1, operand2);
    
    showResult(result);
}
