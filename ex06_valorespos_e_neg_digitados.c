#include <stdio.h>
#include <locale.h>

//Algoritmo que mostra a m�dia dos n�meros positivos digitados e a quantidade de n�meros negativos digitados!

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite v�rios valores aleat�rios e inteiros!");
	printf("\nOBS: O programa parar� quando o valor 0 for digitado!");
	
	int num = num != 0;
	
	int somapos, totpos = 0; // foi atribu�do "0" a totpos porque ele estava assumindo o valor de 1!
	
	int totneg;
	
	int Countnums = 1;
	
	/*
	while (num != 0) {
		
		printf("\n%d� VALOR: ", Countnums);
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
		
		printf("\n%d� VALOR: ", Countnums);
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
		
		printf("---> N�O HOUVERAM N�MEROS POSITIVOS DIGITADOS E POR ISSO A M�DIA DOS POSITIVOS FOI IGUAL A 0!\n");
		
	}
	
	else {
		
		printf("---> A m�dia dos n�meros positivos digitados � igual a %.2f!\n", mediapos);
		
	}
	
	
	printf("---> E o total de n�meros negativos digitados � igual a %d!\n", totneg);
	
	printf("\n=-=-=-=-=-= FIM DO ALGORITMO! =-=-=-=-=-=\n");
	
	return 0;
}
