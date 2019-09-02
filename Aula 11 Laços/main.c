#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	//while
	/********
	int contador = 1; //declarando e inicializando a variável de controle
	  
	while (contador <= 10){ // Testando a condição
	
	printf("%d ", contador); //Executando um comando dentro do laço  
	contador++; //atualizando a variável de controle
	
	}  
	***********/
	//do while
	/***********
	float nota1=0,nota2=0,media=0;
	int resp;
	  
	do{
		printf("Digite a primeira nota: ");
		scanf("%f",&nota1);
		printf("Digite a segunda nota: ");
		scanf("%f",&nota2);
		    
		media = (nota1 + nota2)/2;
		printf("Media do aluno = %f\n",media);
		    
		printf("Digite 1 para continuar ou 2 para sair\n");
		scanf("%d", &resp);
	  
	}while (resp==1);
	*******/
	//for
	/******
	//Exemplo1: Programa usando loop for em C

	
	  int contador; //variável de controle do loop
	  
	  for(contador = 1; contador <= 10; contador++)
	  {
	    printf("%d ", contador);
	  }
	  
	  getch();
	*/
	
	  int numero;
	  int contador; //variável de controle do loop
	  int resp;
	  printf("Tabuada \n\n");
	  printf("Digite o numero da tabuada: ");
	  scanf("%d", &numero);
	  for(contador = 0; contador <= 10; contador++)
	  {
	  	resp = contador * numero;
	  	printf("%d x %d = %d\n", numero,contador,resp);

	  }
	  
	return 0;
}
