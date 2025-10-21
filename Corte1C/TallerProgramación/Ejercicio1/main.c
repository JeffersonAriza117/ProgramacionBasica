#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcion, continuar;
    float lado, base, altura, radio, area, perimetro;
    float lado1, lado2, lado3;
    float pi = 3.14159;
    
    continuar = 1;
    
    while (continuar == 1) {
        printf("\n=== CALCULADORA DE AREAS Y PERIMETROS ===\n");
        printf("1. Cuadrado\n");
        printf("2. Rectangulo\n");
        printf("3. Triangulo\n");
        printf("4. Circulo\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        
        if (opcion == 1) {
            printf("\nCUADRADO\n");
            printf("Ingrese el lado: ");
            scanf("%f", &lado);
            
            area = lado * lado;
            perimetro = 4 * lado;
            
            printf("Area: %.2f\n", area);
            printf("Perimetro: %.2f\n", perimetro);
            
        } else if (opcion == 2) {
            printf("\nRECTANGULO\n");
            printf("Ingrese la base: ");
            scanf("%f", &base);
            printf("Ingrese la altura: ");
            scanf("%f", &altura);
            
            area = base * altura;
            perimetro = 2 * (base + altura);
            
            printf("Area: %.2f\n", area);
            printf("Perimetro: %.2f\n", perimetro);
            
        } else if (opcion == 3) {
            printf("\nTRIANGULO\n");
            printf("Ingrese la base: ");
            scanf("%f", &base);
            printf("Ingrese la altura: ");
            scanf("%f", &altura);
            printf("Ingrese el lado 1: ");
            scanf("%f", &lado1);
            printf("Ingrese el lado 2: ");
            scanf("%f", &lado2);
            printf("Ingrese el lado 3: ");
            scanf("%f", &lado3);
            
            area = (base * altura) / 2;
            perimetro = lado1 + lado2 + lado3;
            
            printf("Area: %.2f\n", area);
            printf("Perimetro: %.2f\n", perimetro);
            
        } else if (opcion == 4) {
            printf("\nCIRCULO\n");
            printf("Ingrese el radio: ");
            scanf("%f", &radio);
            
            area = pi * radio * radio;
            perimetro = 2 * pi * radio;
            
            printf("Area: %.2f\n", area);
            printf("Perimetro (circunferencia): %.2f\n", perimetro);
            
        } else {
            printf("Opcion invalida\n");
        }
        
        printf("\n¿Desea calcular otra figura? (1=Si, 0=No): ");
        scanf("%d", &continuar);
    }
    
    printf("\nPrograma finalizado.\n");
    
    return 0;
}
