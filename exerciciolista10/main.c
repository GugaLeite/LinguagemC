#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int id;
	float n1, n2, n3;
	float medex, medapro;
	
	
	printf("Digite seu numero de identificacao: \n");
	scanf("%d", &id);
	
	printf("Digite sua primeira nota: \n");
	scanf("%f", &n1);	
	
	printf("Digite sua primeira nota: \n");
	scanf("%f", &n2);
	
	printf("Digite sua primeira nota: \n");
	scanf("%f", &n3);
	
	
	medex = (n1 + n2 + n3) / 3;
	
	medapro = (n1 + n2 * 2 + n3 * 3 + medex) / 7;
	
	
	if (medapro >= 9.0) {
	
	printf("Sua identificacao: |  %d  |\n", id);
	printf("Suas notas sao: |  %.2f  |  %.2f  | %.2f  |\n", n1, n2, n3);
	printf("Sua media dos exercicios e: |  %f  |\n", medex);
	printf("Sua media de aproveitaamente e: |  %.2f  |\n", medapro);
	printf("Seu conceito e: A\n");
	printf("Parabens! Voce foi aprovado! =)");
}

	else if (medapro >= 7.5 && medapro < 9.0) {
		
	printf("Sua identificacao: |  %d  |\n", id);
	printf("Suas notas sao: |  %.2f  |  %.2f  | %.2f  |\n", n1, n2, n3);
	printf("Sua media dos exercicios e: |  %.2f  |\n", medex);
	printf("Sua media de aproveitaamente e: |  %.2f  |\n", medapro);
	printf("Seu conceito e: B\n");
	printf("Parabens! Voce foi aprovado! =)");
}

	else if (medapro >= 6.0 && medapro < 7.5) {
		
	printf("Sua identificacao: |  %d  |\n", id);
	printf("Suas notas sao: |  %.2f  |  %.2f  |  %.2f  |\n", n1, n2, n3);
	printf("Sua media dos exercicios e: |  %.2f  |\n", medex);
	printf("Sua media de aproveitaamente e: |  %.2f  |\n", medapro);
	printf("Seu conceito e: C\n");
	printf("Parabens! Voce foi aprovado! =)");
}

	else if (medapro >= 4.0 && medapro < 6.0) {
		
	printf("Sua identificacao: |  %d  |\n", id);
	printf("Suas notas sao: |  %.2f  | %.2f  | %.2f  |\n", n1, n2, n3);
	printf("Sua media dos exercicios e |  %.2f  |\n", medex);
	printf("Sua media de aproveitaamente e: |  %.2f  |\n", medapro);
	printf("Seu conceito e: D\n");
	printf("Parabens! Voce foi aprovado! =)");
}

	else {
	

		
	printf("Sua identificacao: |  %d  |\n", id);
	printf("Suas notas sao: |  %.2f  |  %.2f  | %.2f  |\n", n1, n2, n3);
	printf("Sua media dos exercicios e: |  %.2f  |\n", medex);
	printf("Sua media de aproveitaamente e: |  %.2f  |\n", medapro);
	printf("Seu conceito e: B\n");
	printf("Que pena! Voce foi reprovado! =(");
}

	return 0;
}