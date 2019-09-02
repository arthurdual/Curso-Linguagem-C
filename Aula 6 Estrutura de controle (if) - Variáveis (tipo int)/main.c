#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Estrutura de controle (if) - Variáveis (tipo int)
	
	int idade;
	printf("Digite a sua idade: ");
	scanf("%d", &idade);//le o que foi digitado e armazena na variavel
	printf("idade: %d", idade);
	
	
	if (idade<18){
		
		printf("\nmenor de idade\n");
		
	}
	if (idade>=18){
		
		printf("\nMaior de idade\n");
		
	}
	
	
		
	
	
	
	
	
	system("pause");
	return 0;
}
