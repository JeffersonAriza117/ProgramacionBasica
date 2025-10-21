#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int myNumbers[] = {25, 50, 75, 100}; // valores de la cadena establecidos como enteros
	
	int i; // establecer i como entero
	
	for (i = 0; i < 4; i++) { // loop para imprimir cada valor de la cadena. i++ se encarga de cambiar el valor de i para imprimir el siguiente valr
		
	  printf("%d\n", myNumbers[i]); //imprime con espacio
	  
	}
	
	return 0;
	
}
