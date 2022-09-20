#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b,c;
	
	printf("Digite um numero: ");
	scanf("%d", &a);
	
	printf("Digite outro numero: ");
	scanf("%d", &b);
	
	
	if(a==b) {
		
		c=a+b;
		
		printf("A soma de %d + %d e igual a: %d", a,b,c);
	}
	
	else{
		
		c=a*b;
		
		printf("A multiplicaçao de %d x %d e igual a: %d", a,b,c);
	}
	
	
	
	return 0;
}