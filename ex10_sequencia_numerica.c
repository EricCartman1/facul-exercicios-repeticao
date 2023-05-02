#include <stdio.h>
#include <locale.h>

//Atividade sobre sequência numérica!

int main() {
	setlocale(LC_ALL, "Portuguese");

	printf("Supondo que uma sequência numérica seja: S = 1/1 + 1/2 + 1/3 + 1/4+ ... + 1/N, então :");	
	printf("\nDigite até onde deseja seguir com a sequência numérica: ");

	int numlim;
	int numatual = 1;

	int imc;

	float somatot = 1;

	printf("\nLIMITE: ");
	scanf("%d", &numlim);
	
	printf("---> S = ");
	/*
	for (numatual = 1; numatual <= numlim - 1;) {
		printf("1/%d + ", numatual);
		
		numatual++;

		imc = imc * numatual;
		
		somatot = somatot + 1 / (float)numatual;
	}
	*/
	
	/*
	while (numatual <= numlim - 1) {
		
		printf("1/%d + ", numatual);

		numatual++;
		
		imc = imc * numatual;
		
		somatot = somatot + 1 / (float)numatual;
	}
	*/
	
	do {
		
		printf("1/%d + ", numatual);

		numatual++;
		
		imc = imc * numatual;
		
		somatot = somatot + 1 / (float)numatual;
		
	} while (numatual <= numlim - 1);
	
	printf("1/%d = 1/%d ou %.2f!\n", numlim, imc, somatot);
	
	return 0;
}
