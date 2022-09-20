#include <stdio.h>
#include <stdlib.h>

/* Faça um algoritmo que leia uma variável e some 5 caso seja par ou some 8 caso seja ímpar,imprimir o resultado desta operação. */

int main(int argc, char *argv[]) {
	
		int num, soma;
		
		
		printf("Caso seja par o numero que voce escolheu sera somado com mais 5, caso seja impar sera somado com mais 8! \n");
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		if((num%2)==0) {
			
			soma = num + 5;
			
			printf("O resultado e igual a: %d",soma);
			
		}
	
		else{
			
			soma = num + 8;
			
			printf("O resultado e igual a: %d", soma);
		}
	
	
	
	return 0;
}