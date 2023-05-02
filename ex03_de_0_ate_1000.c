#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int count = 1, number, evenCounter = 0, oddCounter = 0, oddSum = 0;
	float oddMedia = 0;
	
	/*
	for (count = 1; count <= 1000; count++) {
		printf("\nDigite um número: \n");
		scanf("%i", &number);
		
		if (number % 2 == 0) {
			evenCounter++;
		} else {
			oddCounter++;
			oddSum += number;
		}
	}
	*/
	
	/*
	while (count <= 1000) {
		printf("\nDigite um número: \n");
		scanf("%i", &number);
		
		if (number % 2 == 0) {
			evenCounter++;
		} else {
			oddCounter++;
			oddSum += number;
		}
		count++;
	}
	*/	
	
	do {
		printf("\nDigite um número: \n");
		scanf("%i", &number);
		
		if (number % 2 == 0) {
			evenCounter++;
		} else {
			oddCounter++;
			oddSum += number;
		}
		count++;
	} while (count <= 1000);
	
	
	if (oddCounter != 0) {
		oddMedia = oddSum / oddCounter;	
	}
	
	printf("\nHá %i números pares\n", evenCounter);
	printf("A média dos números ímpares é: %.2f", oddMedia);
	
	return 0;
}
