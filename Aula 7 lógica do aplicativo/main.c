#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int nota1;
	int nota2;
	int media;
	
	printf("Digite sua Primeira nota: ");
	scanf("%d", &nota1);
	
	printf("Digite sua Segunda nota: ");
	scanf("%d", &nota2);
	
	media = (nota1 + nota2)/2;
	
	printf("Sua nota foi: %d\n ",media);
	
	system("pause");

	//Declaração das variáveis
	/*
	  float nota1, nota2, media;
	  
	  //Entrada de dados
	  printf("Digite a primeira nota do aluno: ");
	  scanf("%f",&nota1);
	  
	  printf("Digite a segunda nota do aluno: ");
	  scanf("%f",&nota2);
	  
	  //Processamento
	  media = (nota1 + nota2) / 2;
	  
	  //Saída
	  printf("Media do aluno = %.1f\n",media);
	  
	  system("pause");//pausa da tela somente para Windows
	  */
	  return 0;//retorno da função main  
}
