#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


	int a, b, c, soma;
	
	
	printf("Digite um numero: ");
	scanf("%d", &a);
	printf("Digite outro numero: ");
	scanf("%d", &b);
	printf("Digite outro numero: ");
	scanf("%d", &c);
	
	soma = a + b;
	
	if(soma < c)
	{
		printf("A soma de %d + %d e menor que %d.",a,b,c );
	}
	
	


	return 0;
}