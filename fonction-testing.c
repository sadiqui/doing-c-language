#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* Fonction de soome */

int Somme(int x, int y) {
	printf("\t %d + %d = %d", x, y, x+y);
	return x+y;
}

int main() {
	
	int x=0, y=5;
	Somme(x,y);
	return 0;
}

