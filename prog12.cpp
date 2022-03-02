#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<locale.h>
#include<ctype.h> //para permitir usar função de aceitar Maiuscula e minuscula

void menu(); // procedimentos
void valorPago();


int main(){
	
	bool continua = true;
	char op;
	
	
	setlocale(LC_ALL, "Portuguese_brazil");
	
	while(continua){
		
		valorPago();
		
		printf("\nDeseja continuar (s/n):");
	 		scanf("%c" ,&op);
		if ((op != 's') && (op != toupper('s')))	 			 
			continua = false;
		system("cls");	   
		
	}
	
	system("pause");
	return 0;
}

//procedimentos - subprogramas

void menu(){
	
	printf("Tipo de Combustível\n");
	printf("\n1 - Gasolina\n");
	printf("\n2 - Etanol\n");
}

void valorPago(){
	
	float litros, valoraserpago, preco;
	int tipo;
	
	menu();
	
	printf("\nEscolha uma opção:");
	scanf("%d" ,&tipo);
		
	switch(tipo){
		
		case 1:
			printf("Quantos litros de abastecimento: ");
			scanf("%f" ,&litros);
			printf("\nQual o valor do combustivel: R$");
			scanf("%f" ,&preco);
			fflush(stdin);		
			if(litros < 25){	
				valoraserpago = preco*litros;
				valoraserpago = valoraserpago-0.07*valoraserpago;
				printf("Valor a ser pago: R$ %.2f\n" ,valoraserpago);
			}
			else{
				valoraserpago = preco*litros;
				valoraserpago = valoraserpago-0.09*valoraserpago;
				printf("Valor a ser pago: R$ %.2f\n" ,valoraserpago);
			}		
	break;
		case 2:
			printf("Quantos litros de abastecimento: ");
			scanf("%f" ,&litros);
			printf("\nQual o valor do combustivel: R$");
			scanf("%f" ,&preco);
			fflush(stdin);		
			if(litros < 25){	
				valoraserpago = preco*litros;
				valoraserpago = valoraserpago-0.05*valoraserpago;
				printf("Valor a ser pago: R$ %.2f\n" ,valoraserpago);
			}
			else{
				valoraserpago = preco*litros;
				valoraserpago = valoraserpago-0.075*valoraserpago;
				printf("Valor a ser pago: R$ %.2f\n" ,valoraserpago);
			}
	break;
	
        default:
		  	printf("\nTipo de combustível inválido!\n");

	}				
	
}









