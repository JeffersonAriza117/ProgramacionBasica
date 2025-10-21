#include <stdio.h>
#include <stdlib.h>

int main() {
    char nombreProducto[50];
    float precioPorUnidad, precioTotal;
    int numUnidades;
    
    printf("=== SISTEMA DE VENTAS - SUPERMERCADO ===\n\n");
    
    printf("Ingrese el nombre del producto: ");
    scanf("%s", nombreProducto);
    
    printf("Ingrese el precio por unidad: ");
    scanf("%f", &precioPorUnidad);
    
    printf("Ingrese el numero de unidades: ");
    scanf("%d", &numUnidades);
    
    precioTotal = precioPorUnidad * numUnidades;
    
    printf("\n=== TICKET DE VENTA ===\n");
    printf("Producto: %s\n", nombreProducto);
    printf("Unidades vendidas: %d\n", numUnidades);
    printf("Precio por unidad: %.2f\n", precioPorUnidad);
    printf("PRECIO TOTAL: %.2f\n", precioTotal);
    
    return 0;
}
