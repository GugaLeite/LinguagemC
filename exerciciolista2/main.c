#include <stdio.h>
#include <stdlib.h>

/* Faça um algoritmo para receber um número qualquer e informar na tela se é par ou ímpar. */

int main(int argc, char *argv[]) {
	
	
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);

	
	if((num%2)==0){
		printf("O numero %d e par!", num);
	}
	
	else{
		printf("O numero %d nao e par!", num);
	}



	return 0;
}