#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;
    
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    
    if (num1 > num2) {
        printf("El mayor es: %d\n", num1);
    } else if (num2 > num1) {
        printf("El mayor es: %d\n", num2);
    } else {
        printf("Los dos numeros son iguales\n");
    }
    
    return 0;
}
