#include <stdio.h>
#include <locale.h>

//Exercício para imprimir o DOBRO de 10 números

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num, Countnum = 1;
	
	/*
	for (Countnum = 1; Countnum <= 10; Countnum++) {
	
		printf("\n============== NÚMERO %d de 10 ==============", Countnum);
		printf("\nDigite um número inteiro para ver seu dobro: ");
		scanf("%d", &num);
		
		int dobro = num * 2;
		
		printf("---> O dobro de %d é %d!\n", num, dobro);
		
	}
	*/
	
	/*
	while (Countnum <= 10) {
		
		printf("\n============== NÚMERO %d de 10 ==============", Countnum);
		printf("\nDigite um número inteiro para ver seu dobro: ");
		scanf("%d", &num);
		
		int dobro = num * 2;
		
		printf("---> O dobro de %d é %d!\n", num, dobro);
		
		Countnum += 1;
	}
	*/
	
	do {
		
		printf("\n============== NÚMERO %d de 10 ==============", Countnum);
		printf("\nDigite um número inteiro para ver seu dobro: ");
		scanf("%d", &num);
		
		int dobro = num * 2;
		
		printf("---> O dobro de %d é %d!\n", num, dobro);
		
		Countnum += 1;
		
	} while (Countnum <= 10);
	
	printf("----------------------------------------------\n");
	
	return 0;
}
