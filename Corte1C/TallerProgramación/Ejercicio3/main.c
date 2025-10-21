#include <stdio.h>
#include <stdlib.h>

int main() {
    char nombreTrabajador[50];
    float horasTrabajadas, precioPorHora;
    float sueldoBruto, retencion, sueldoNeto;
    float porcentajeIRPF = 0.05;
    
    printf("=== SISTEMA DE NOMINA ===\n\n");
    
    printf("Ingrese el nombre del trabajador: ");
    scanf("%s", nombreTrabajador);
    
    printf("Ingrese las horas trabajadas: ");
    scanf("%f", &horasTrabajadas);
    
    printf("Ingrese el precio por hora: ");
    scanf("%f", &precioPorHora);
    
    sueldoBruto = horasTrabajadas * precioPorHora;
    retencion = sueldoBruto * porcentajeIRPF;
    sueldoNeto = sueldoBruto - retencion;
    
    printf("\n=== NOMINA DE %s ===\n", nombreTrabajador);
    printf("Horas trabajadas: %.2f\n", horasTrabajadas);
    printf("Precio por hora: %.2f\n", precioPorHora);
    printf("\nSueldo Bruto: %.2f\n", sueldoBruto);
    printf("Retencion IRPF (5%%): %.2f\n", retencion);
    printf("SUELDO NETO: %.2f\n", sueldoNeto);
    
    return 0;
}
