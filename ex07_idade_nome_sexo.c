#include <stdio.h>
#include <locale.h>

//Programa vai ler o nome, a idade e o sexo de um n�mero x de pessoas e ir� informar o n�mero de mulheres e a idade m�dia das pessoas
//O programa terminar� quando a idade for negativa!

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char nome [50];
	int idade, sexo;
	
	int CountPes = 1;
	
	int CountF = 0;// Estava come�ando com 1 no meu!
	
	int CountIdade, somaidades;
	
	/*
	while (idade >= 0) {
		
		printf("=========== CADASTRO DA %d� PESSOA! ===========", CountPes);
		
		printf("\n---> Digite seu primeiro nome: ");
		scanf("%s", &nome);
		
		printf("---> Digite a sua idade: ");
		scanf("%d", &idade);
		
		if (idade < 0)	{
			break;
		}
		
		somaidades = somaidades + idade;
		
		printf("---> Digite seu g�nero:\n[1] - Homem;\n[2] - Mulher.");
		printf("\nG�NERO: ");
		scanf("%d", &sexo);
		
		if (sexo == 2) {
			CountF += 1;
		}	
		
		CountIdade += 1;
		CountPes += 1;
	}
	*/
	
	do {
		
		printf("=========== CADASTRO DA %d� PESSOA! ===========", CountPes);
		
		printf("\n---> Digite seu primeiro nome: ");
		scanf("%s", &nome);
		
		printf("---> Digite a sua idade: ");
		scanf("%d", &idade);
		
		if (idade < 0)	{
			break;
		}
		
		somaidades = somaidades + idade;
		
		printf("---> Digite seu g�nero:\n[1] - Homem;\n[2] - Mulher.");
		printf("\nG�NERO: ");
		scanf("%d", &sexo);
		
		if (sexo == 2) {
			CountF += 1;
		}	
		
		CountIdade += 1;
		CountPes += 1;
		
	} while (idade >= 0);
	
	float mediaidade = somaidades / (float)CountIdade;
	
	printf("\n---> N�mero de Mulheres: %d!", CountF);
	printf("\n---> Idade m�dia das pessoas: %.2f!", mediaidade);
	
	printf("\n=========== FIM DO ALGORITMO! ===========\n");
	
	return 0;
}
