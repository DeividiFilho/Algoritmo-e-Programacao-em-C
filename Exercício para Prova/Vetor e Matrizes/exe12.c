
#include <stdio.h>

main () {
	int A[6] = { 1, 0, 5, -2, -5, 7};
	int soma = A[0] + A[1] + A[5];
	int i;
	
	printf("Soma: %d\n", soma);
	
	A[4] = 100;
	
	for (i=0; i < 6; i++) {
		printf("\n%d", A[i]); 
	}
}
