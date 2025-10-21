#include <stdio.h>
#include <stdlib.h>

int main () {
	
	char Arr1[] = {'J', 'K', 'A', 'S', 'O'};
	
	int Lon1 = sizeof(Arr1) / sizeof(Arr1[0]);
	
	char Arr2[] = {'J', 'K', 'A', 'S','L'};
	
	int Lon2 = sizeof(Arr2) / sizeof(Arr2[0]);
	
	
	if (Lon1 != Lon2) {
		
		printf("LA LON. DE LAS MATRICES NO ES IGUAL");
		
		return 0;	
	}
	
	int equi = 1;
	
	int i;
	
	for (i = 0; i < Lon1; i++) {
	
	
		if (Arr1[i] !=Arr2[i]) {
			
			equi = 0;
			
			break;
		}
	}
	
	if(equi==1){
		
		printf("LAS MATRICES SON IGUALES");
	} else {
		
		printf("LAS MATRICES NO SON IGUALES");
		
	}
	return 0;
}
