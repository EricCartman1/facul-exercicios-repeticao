#include <stdio.h>
#include <locale.h>

//Algoritmo que mostra a média dos números positivos digitados e a quantidade de números negativos digitados!

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite vários valores aleatórios e inteiros!");
	printf("\nOBS: O programa parará quando o valor 0 for digitado!");
	
	int num = num != 0;
	
	int somapos, totpos = 0; // foi atribuído "0" a totpos porque ele estava assumindo o valor de 1!
	
	int totneg;
	
	int Countnums = 1;
	
	/*
	while (num != 0) {
		
		printf("\n%dº VALOR: ", Countnums);
		scanf("%d", &num);
		
		if (num == 0) {
			break;
		}
		
		else if (num > 0) {
			totpos += 1;
			somapos += num;
		}
		
		else {
			
			totneg += 1;
			
		}
		
		Countnums += 1;
		
	}
	*/
	
	do {
		
		printf("\n%dº VALOR: ", Countnums);
		scanf("%d", &num);
		
		if (num == 0) {
			break;
		}
		
		else if (num > 0) {
			totpos += 1;
			somapos += num;
		}
		
		else {
			
			totneg += 1;
			
		}
		
		Countnums += 1;
		
	} while (num != 0);
	
	float mediapos = somapos / (float)totpos;
	
	if (totpos == 0 && somapos == 0) {
		
		printf("---> NÃO HOUVERAM NÚMEROS POSITIVOS DIGITADOS E POR ISSO A MÉDIA DOS POSITIVOS FOI IGUAL A 0!\n");
		
	}
	
	else {
		
		printf("---> A média dos números positivos digitados é igual a %.2f!\n", mediapos);
		
	}
	
	
	printf("---> E o total de números negativos digitados é igual a %d!\n", totneg);
	
	printf("\n=-=-=-=-=-= FIM DO ALGORITMO! =-=-=-=-=-=\n");
	
	return 0;
}
