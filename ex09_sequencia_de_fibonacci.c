#include <stdio.h>
#include <locale.h>

// 10 primeiros números da série de Fibonacci!

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int f1 = 0, f2 = 1, f3;
	
	printf("%d --> %d --> ", f1, f2);
	
	int i = 1;
	
	/*
	for (i = 1; i <= 8; i++) {
		
		f3 = f2 + f1;
		
		printf("%d --> ", f3);
		
		f1 = f2;
		f2 = f3;
		
	}
	*/
	
	/*
	while (i <= 8) {
		
		f3 = f2 + f1;
		
		printf("%d --> ", f3);
		
		f1 = f2;
		f2 = f3;
		
		i += 1;
	}
	*/
	
	do {
		
		f3 = f2 + f1;
		
		printf("%d --> ", f3);
		
		f1 = f2;
		f2 = f3;
		
		i += 1;
		
	} while (i <= 8);
	
	
	printf("FIM!\n");
	
	printf("\n=-=-=-=-=-=-=-=-=-=-=-= FIM DO ALGORITMO! =-=-=-=-=-=-=-=-=-=-=-=\n");
	
	return 0;
}
