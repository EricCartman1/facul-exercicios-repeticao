#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um número para seu fatorial ser calculado!");
	printf("\nNÚMERO: ");
	
	int numfat, resfat = 1, contador;
	
	scanf("%d", &numfat);
	
	printf("%d! = ", numfat);
	
	/*
	for (contador = numfat; contador > 1; contador--) {
		printf("%d * ", numfat);
		
		resfat = resfat * numfat;
		
		numfat -= 1;
	}
	*/
	

	/*
	while (numfat > 1) {
		
		printf("%d * ", numfat);
		
		resfat = resfat * numfat;
		
		numfat -= 1;
	}
	*/
	
	do {
		
		printf("%d * ", numfat);
		
		resfat = resfat * numfat;
		
		numfat -= 1;
		
	} while (numfat > 1);
	
	printf("1 = %d\n", resfat);
	
	return 0;
}

