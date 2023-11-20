#include <stdio.h>
#include <stdlib.h>

// Déclarer et afficher les élément d'un tableau

int main () {
	int i, arr[10];
	for (i=0; i<10; i++) {
		arr[i]=i+1;
	}
	
	printf("\tMes entiers sont: ");
	
	for (i=0; i<10; i++) {
		printf("%4i", arr[i]);
	}
	
	return 0;
}

