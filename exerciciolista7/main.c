#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sex;
	float h, pesoid;
	
	printf("1 - MASCULINO \n");
	printf("2 - FEMININO \n");
	printf("DIGITE SUA OPÇAO: ");
	scanf("%d", &sex);
	
	printf("Informe a sua altura em METROS: <ex: 1.50> ");
	scanf("%f", &h);
	
	
  	switch (sex) {
  		
  		case 1: 
  			pesoid = (72.7 * h) - 58;
			printf("Seu peso ideal e: %.2f ", pesoid);
		break;
		
		case 2:
			pesoid = (62.1 * h) - 44.7;
			printf("Seu peso ideal e: %.2f ", pesoid);
		break;
		
		default:
				printf("Opçao Inexistente!");		
			   
	  }
		
	return 0;
}