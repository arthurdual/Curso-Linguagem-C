#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int numero;//variavel global


int main(int argc, char *argv[]) {
	//Switch Case
	printf("Sistemas\n\n");
	printf("1- Windons\n");
	printf("2- Linux\n");
	
	printf("Escolha a op�ao desejada: \n");
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
	switch (vari�vel)
	{
	   case constante1:
	     Instru��es;
	   break;
	
	   case constante2:
	     Instru��es;
	   break;
	
	   default
	     Instru��es;
	}
	*/
	return 0;
}
