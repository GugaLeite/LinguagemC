#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b,c;
	
	printf("Digite 3 valores diferentes! \n");
	
	printf("Digite um numero: ");
	scanf("%d", &a);
	
		
	printf("Digite outro numero: ");
	scanf("%d", &b);
	
		
	printf("Digite outro numero: ");
	scanf("%d", &c);
	
	
	if(a>b && b>c) {
		
		printf("A ordem decrescente dos numeros digitados e: %d, %d, %d", a, b, c);
	}
	
	else if(a>b && b<c) {
		
		printf("A ordem decrescente dos numeros digitados e: %d, %d, %d", a, c, b);
		
	}
	
		else if(b>a && a>c) {
		
		printf("A ordem decrescente dos numeros digitados e: %d, %d, %d", b, a, c);
		
	}
	
		else if(b>c && c>a) {
		
		printf("A ordem decrescente dos numeros digitados e: %d, %d, %d", b, c, a);
		
	}
	
	else if(c>a && a>b) {
		
		printf("A ordem decrescente dos numeros digitados e: %d, %d, %d", c, a, b);
		
	}
	
	else if(c>b && b>a) {
		
		printf("A ordem decrescente dos numeros digitados e: %d, %d, %d", c, b, a);
		
	}
	
		else {
			printf("Os numeros ecolhidos tem que ser distintos!");
		}
		
	
	
	return 0;
}