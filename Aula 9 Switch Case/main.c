#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int numero;//variavel global


int main(int argc, char *argv[]) {
	//Switch Case
	printf("Sistemas\n\n");
	printf("1- Windons\n");
	printf("2- Linux\n");
	
	printf("Escolha a opçao desejada: \n");
	scanf("%d", &numero);
	system("cls");
	switch (numero){
		case 1:
			printf("Windons\n");
		break;
		case 2:
			printf("Linux\n");
		break;
		default:
			printf("outro\n");
		break;
	};
	
	
	
	
	//codigo base
	/*
	switch (variável)
	{
	   case constante1:
	     Instruções;
	   break;
	
	   case constante2:
	     Instruções;
	   break;
	
	   default
	     Instruções;
	}
	*/
	return 0;
}
