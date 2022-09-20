#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	float kg, h, imc;
	
	printf("Digite o seu peso em KG: \n");
	scanf("%f", &kg);
	
	printf("Digite a sua altura: <ex: 1.90> \n");
	scanf("%f", &h);
	
	
	imc = kg / (h * h);
	
	if (imc < 18.5 ) {
		
		printf("SEU IMC DEU %.2f (ABAIXO DE 18 ABAIXO DO PESO) ENTAO VOCE ESTA ABAIXO DO PESO /n", imc);
	}
	
	else if (imc > 18.5 && imc < 25.5) {
		
		printf("SEU IMC DEU %.2f (ENTRE 18.5 E 25.5 NORMAL) ENTAO SEU PESO ESTA NORMAL", imc);
	}
	
	else if (imc > 25 && imc < 30) {
		
		printf("SEU IMC DEU %.2f (ENTRE 25 E 30 ACIMA DO PESO) ENTAO VOCE ESTA ACIMA DO PESO", imc);
	}
	
	else {
		
		printf("SEU IMC DEU %.2f (ACIMA DE 30 OBESO) ENTAO VOCE ESTA OBESO", imc);
		
	}


	return 0;
}