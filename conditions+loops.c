#include <stdio.h>

int main() {
	int x, y=4, z=4;
	
	if (y+z==8) {
		printf ("%d+%d=%d", y, z, y+z);
	}
	
	printf ("\n");
	
	for (x=0; x<=4; x++) {
		printf ("%d", x);
	}
	
	printf("\n");
	
 	while (y>=0) {
 		printf("%d", y);
 		y--;
	}
	
	printf("\n");
	
	do {
		printf("%d", z);
		z--;
	} while (z>=0);

	return 0;
}
