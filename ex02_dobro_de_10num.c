#include <stdio.h>
#include <locale.h>

//Exerc�cio para imprimir o DOBRO de 10 n�meros

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num, Countnum = 1;
	
	/*
	for (Countnum = 1; Countnum <= 10; Countnum++) {
	
		printf("\n============== N�MERO %d de 10 ==============", Countnum);
		printf("\nDigite um n�mero inteiro para ver seu dobro: ");
		scanf("%d", &num);
		
		int dobro = num * 2;
		
		printf("---> O dobro de %d � %d!\n", num, dobro);
		
	}
	*/
	
	/*
	while (Countnum <= 10) {
		
		printf("\n============== N�MERO %d de 10 ==============", Countnum);
		printf("\nDigite um n�mero inteiro para ver seu dobro: ");
		scanf("%d", &num);
		
		int dobro = num * 2;
		
		printf("---> O dobro de %d � %d!\n", num, dobro);
		
		Countnum += 1;
	}
	*/
	
	do {
		
		printf("\n============== N�MERO %d de 10 ==============", Countnum);
		printf("\nDigite um n�mero inteiro para ver seu dobro: ");
		scanf("%d", &num);
		
		int dobro = num * 2;
		
		printf("---> O dobro de %d � %d!\n", num, dobro);
		
		Countnum += 1;
		
	} while (Countnum <= 10);
	
	printf("----------------------------------------------\n");
	
	return 0;
}
