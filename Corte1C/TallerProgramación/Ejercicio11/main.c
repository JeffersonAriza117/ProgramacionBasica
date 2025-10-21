#include <stdio.h>
#include <stdlib.h>

int main() {
    int contrasenaCorrecta, contrasenaIngresada;
    int intentos, i, acerto;
    
    printf("=== SISTEMA DE VALIDACION DE CONTRASENA ===\n\n");
    
    contrasenaCorrecta = 1234;
    intentos = 0;
    acerto = 0;
    
    for (i = 0; i < 3; i = i + 1) {
        intentos = intentos + 1;
        
        printf("Intento %d/3\n", intentos);
        printf("Ingrese la contrasena: ");
        scanf("%d", &contrasenaIngresada);
        
        if (contrasenaIngresada == contrasenaCorrecta) {
            printf("\nContrasena Correcta\n");
            acerto = 1;
            i = 3;
        } else {
            printf("Contrasena incorrecta\n");
            if (intentos < 3) {
                printf("Intentos restantes: %d\n\n", 3 - intentos);
            }
        }
    }
    
    if (acerto == 0) {
        printf("\nLo siento, contrasena equivocada\n");
    }
    
    return 0;
}
