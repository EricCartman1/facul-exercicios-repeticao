#include <stdio.h>
#include <locale.h>

//Exercício que mostra quantos torcedores do SÃO PAULO existem!

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int time, sp, entrevistados;
	
	/*
	for (entrevistados = 1; entrevistados <= 10; entrevistados++) {
		printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		printf("\nDigite para qual time você torçe de acordo com a tabela abaixo: ");
		printf("\n---------------------------------------------------------------\n");
		printf("\n1 - Flamengo;\n2 - Fluminense;\n3 - Botafogo;\n4 - São Paulo;\n5 - Vasco.");
		printf("\nOBS: O código terminará quando -1 for digitado!");
		printf("\n---> Seu time: ");
		scanf("%i", &time);
		
		if (time < 0 && time != -1 || time > 5) {
			
			
			printf("TIME INVÁLIDO!\nTENTE DIGITAR SEU TIME NOVAMENTE!\n");
		}
		
		if (time == 4) {
			sp += 1;
		}
	}
	*/
	
	/*
	while (time != -1) {
		
		printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		printf("\nDigite para qual time você torçe de acordo com a tabela abaixo: ");
		printf("\n---------------------------------------------------------------\n");
		printf("\n1 - Flamengo;\n2 - Fluminense;\n3 - Botafogo;\n4 - São Paulo;\n5 - Vasco.");
		printf("\nOBS: O código terminará quando -1 for digitado!");
		printf("\n---> Seu time: ");
		scanf("%d", &time);
		
		if (time < 0 && time != -1 || time > 5) {
			
			
			printf("TIME INVÁLIDO!\nTENTE DIGITAR SEU TIME NOVAMENTE!\n");
		}
		
		
		if (time == 4) {
			
			sp += 1;
			
		}
		
	}
	*/
	
	do {
		
		printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		printf("\nDigite para qual time você torçe de acordo com a tabela abaixo: ");
		printf("\n---------------------------------------------------------------\n");
		printf("\n1 - Flamengo;\n2 - Fluminense;\n3 - Botafogo;\n4 - São Paulo;\n5 - Vasco.");
		printf("\nOBS: O código terminará quando -1 for digitado!");
		printf("\n---> Seu time: ");
		scanf("%d", &time);
		
		if (time < 0 && time != -1 || time > 5) {
			
			
			printf("TIME INVÁLIDO!\nTENTE DIGITAR SEU TIME NOVAMENTE!\n");
		}
		
		
		if (time == 4) {
			
			sp += 1;
			
		}
		
	} while (time != -1);
	
	
	
	if (sp == 0) {
		
		printf("\n---> NÃO HÁ TORCEDORES DO SÃO PAULO!");
		
	}
	else {
		
		printf("---> Dentre as pessoas que digitaram seus times à partir da tabela dada, existe(m) %d torcedor(es) do SÃO PAULO!", sp);
		
	}
	
	printf("\n=-=-=-=-=-=-= FIM DO ALGORITMO! =-=-=-=-=-=-=\n");
	
	return 0;
}
