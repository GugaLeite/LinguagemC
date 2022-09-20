#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int op;
	float pagar, desc, parc, juros;
	
	printf("Informe o valor do produto que voce quer comprar: ");
	scanf("%f", &pagar);
	
	
	puts("1 - A vista em dinheiro ou chuque, recebe 10% de desconto.");
	puts("2 - A vista no cartao de credito, recebe 15% de desconto.");
	puts("3 - Em duas vezes, preco normal de etiqueta sem juros.");
	puts("4 - Em tres vezes, preco normal de eitqueta mais juros de 10%.");
	
	printf("Digite sua opcao:");
	scanf("%d", &op);
	
	
	
	switch (op) {
		
		case 1:
			
			desc = pagar * 0.1;
			pagar = pagar - desc;
			
			printf("Voce pagara: R$ %.2f", pagar);
			break; 	
	
		case 2:
		
			desc = pagar * 0.15;
			pagar = pagar - desc;
		
			printf("Voce pagara: R$ %.2f", pagar);
			break;
			
		case 3: 
		
			pagar = pagar / 2;
			
			printf("Voce pagara duas parcelas de: R$ %.2f", pagar);
			break;
			
		case 4:
	
			juros = pagar * 0.1;
			pagar = juros + pagar;
	
			printf("Voce pagara tres parcelas de: R$ %.2f", pagar);
			break;
	}
	

	
	return 0;
}