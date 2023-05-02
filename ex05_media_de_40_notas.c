#include <stdio.h>
#include <locale.h>

//Exercício que vê 3 notas de 40 alunos e mostra suas médias!

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int Countal = 1;
	
	/*
	for(Countal = 1; Countal <= 40; Countal++) {
		
		float nt1, nt2, nt3;
		
		printf("=-=-=-=-=-=-= %dº aluno =-=-=-=-=-=-=", Countal);
		printf("\nDigite as notas desse aluno: ");
		printf("\n* PRIMEIRA NOTA: ");
		scanf("%f", &nt1);
		printf("* SEGUNDA NOTA: ");
		scanf("%f", &nt2);
		printf("* TERCEIRA NOTA: ");
		scanf("%f", &nt3);
		
		float media = (nt1 + nt2 + nt3) / 3;
		
		printf("A média final desse aluno foi de %.2f!\n\n", media);
		
	}
	*/
	
	/*
	while (Countal <= 40) {
		
		float nt1, nt2, nt3;
		
		printf("=-=-=-=-=-=-= %dº aluno =-=-=-=-=-=-=", Countal);
		printf("\nDigite as notas desse aluno: ");
		printf("\n* PRIMEIRA NOTA: ");
		scanf("%f", &nt1);
		printf("* SEGUNDA NOTA: ");
		scanf("%f", &nt2);
		printf("* TERCEIRA NOTA: ");
		scanf("%f", &nt3);
		
		float media = (nt1 + nt2 + nt3) / 3;
		
		printf("A média final desse aluno foi de %.2f!\n\n", media);
		
		Countal += 1;
		
	}
	*/
	do {
		
		float nt1, nt2, nt3;
		
		printf("=-=-=-=-=-=-= %dº aluno =-=-=-=-=-=-=", Countal);
		printf("\nDigite as notas desse aluno: ");
		printf("\n* PRIMEIRA NOTA: ");
		scanf("%f", &nt1);
		printf("* SEGUNDA NOTA: ");
		scanf("%f", &nt2);
		printf("* TERCEIRA NOTA: ");
		scanf("%f", &nt3);
		
		float media = (nt1 + nt2 + nt3) / 3;
		
		printf("A média final desse aluno foi de %.2f!\n\n", media);
		
		Countal += 1;
		
	} while (Countal <= 40);
	
	printf("=-=-=-=-=-=-= FIM DO ALGORITMO! =-=-=-=-=-=-=\n");
	
	return 0;
}
