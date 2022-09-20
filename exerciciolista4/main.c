#include <stdio.h>
#include <stdlib.h>

/*  Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo,imprimindo o resultado */

int main(int argc, char *argv[]) {
	
	int num, dobro, triplo;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if(num>0) {
		
		dobro = num * 2;
		
		printf("O dobro de %d e igual a: %d", num, dobro);
	}
	
	else{
		
		triplo = num * 3;
		
		printf("O triplo de %d e igual a: %d", num, triplo); 
	}
	
	
	
	
	
	
	return 0;
}