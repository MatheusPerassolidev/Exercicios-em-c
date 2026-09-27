#include<stdio.h>

float saldo = 1000, deposito, saque;
int opcao;

int main(){
	
while(opcao !=4){
	printf("\n===============================\n");
	printf("      Caixa Eletronico\n\n");
	printf("1 - Consultar Saldo \n");
	printf("2 - Depositar \n");
	printf("3 - Sacar \n");
	printf("4 - Sair \n\n");
	
printf("- Escolha uma opcao: \n\n");
scanf("%i", &opcao);
	

	switch(opcao){
		
		case 1:
			printf("consultar saldo \n");
			printf("saldo atual %.2f\n\n", saldo);
	
		
		break;
			
		case 2:
			printf("Depositar \n");
			printf("valor do deposito: \n");
			scanf("%f", &deposito);
			saldo = deposito + saldo;
			printf("saldo atual: %.2f\n\n", saldo);
		
		break;
		
		case 3:
			printf("--- Saque ---\n");
			printf("valor do saque: R$\n");
			scanf("%f", &saque);
			if(saldo < saque){
			printf("saldo insuficiente \n\n");
		
		}
		else{
			saldo = saldo - saque;
			printf("saldo atual: %.2f \n\n", saldo);
		
		}
		break;
		
		case 4:
			printf("Sair");
		break;
		
		default:
			printf("opcao invalida \n");
			
			
	}

}
	
		return 0;	
}
