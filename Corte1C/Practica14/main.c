#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int myNumbers[] = {10, 25, 50, 75, 100}; // se declara el Array
	
	int length = sizeof(myNumbers) / sizeof(myNumbers[0]); // formula para hallar la cantidad de numeros en el Array

	printf("%d", length);  // Length = Cantidad de elementos del Array
	
	return 0;
}
