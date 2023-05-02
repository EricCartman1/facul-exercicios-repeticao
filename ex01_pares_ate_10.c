#include <stdio.h>

//Exercício para escrever os pares até 10 (usando os 3 laços)

int main() {

	int i = 0;

	/*
	for (i = 0; i <= 10; i += 2) {
		printf("%d --> ", i);
		
	}
	*/
	
	/*
	while(i <= 10) {
		printf("%d --> ", i);
		i += 2;
	}
	*/
	
	do {
		
		printf("%d --> ", i);
		i += 2;
		
	} while (i <= 10);

	printf("FIM!\n");
	
	return 0;
}

