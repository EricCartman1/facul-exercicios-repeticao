#include <stdio.h>
#include <locale.h>

//Exerc�cio que mostra quantos torcedores do S�O PAULO existem!

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int time, sp, entrevistados;
	
	/*
	for (entrevistados = 1; entrevistados <= 10; entrevistados++) {
		printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		printf("\nDigite para qual time voc� tor�e de acordo com a tabela abaixo: ");
		printf("\n---------------------------------------------------------------\n");
		printf("\n1 - Flamengo;\n2 - Fluminense;\n3 - Botafogo;\n4 - S�o Paulo;\n5 - Vasco.");
		printf("\nOBS: O c�digo terminar� quando -1 for digitado!");
		printf("\n---> Seu time: ");
		scanf("%i", &time);
		
		if (time < 0 && time != -1 || time > 5) {
			
			
			printf("TIME INV�LIDO!\nTENTE DIGITAR SEU TIME NOVAMENTE!\n");
		}
		
		if (time == 4) {
			sp += 1;
		}
	}
	*/
	
	/*
	while (time != -1) {
		
		printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		printf("\nDigite para qual time voc� tor�e de acordo com a tabela abaixo: ");
		printf("\n---------------------------------------------------------------\n");
		printf("\n1 - Flamengo;\n2 - Fluminense;\n3 - Botafogo;\n4 - S�o Paulo;\n5 - Vasco.");
		printf("\nOBS: O c�digo terminar� quando -1 for digitado!");
		printf("\n---> Seu time: ");
		scanf("%d", &time);
		
		if (time < 0 && time != -1 || time > 5) {
			
			
			printf("TIME INV�LIDO!\nTENTE DIGITAR SEU TIME NOVAMENTE!\n");
		}
		
		
		if (time == 4) {
			
			sp += 1;
			
		}
		
	}
	*/
	
	do {
		
		printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		printf("\nDigite para qual time voc� tor�e de acordo com a tabela abaixo: ");
		printf("\n---------------------------------------------------------------\n");
		printf("\n1 - Flamengo;\n2 - Fluminense;\n3 - Botafogo;\n4 - S�o Paulo;\n5 - Vasco.");
		printf("\nOBS: O c�digo terminar� quando -1 for digitado!");
		printf("\n---> Seu time: ");
		scanf("%d", &time);
		
		if (time < 0 && time != -1 || time > 5) {
			
			
			printf("TIME INV�LIDO!\nTENTE DIGITAR SEU TIME NOVAMENTE!\n");
		}
		
		
		if (time == 4) {
			
			sp += 1;
			
		}
		
	} while (time != -1);
	
	
	
	if (sp == 0) {
		
		printf("\n---> N�O H� TORCEDORES DO S�O PAULO!");
		
	}
	else {
		
		printf("---> Dentre as pessoas que digitaram seus times � partir da tabela dada, existe(m) %d torcedor(es) do S�O PAULO!", sp);
		
	}
	
	printf("\n=-=-=-=-=-=-= FIM DO ALGORITMO! =-=-=-=-=-=-=\n");
	
	return 0;
}
