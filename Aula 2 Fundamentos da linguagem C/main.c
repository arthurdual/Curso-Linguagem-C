#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");//coloca os carcteres em portugues
	//alinha abaixo muda a cor do texto
	system("color 0A");//primeira letra é a cor do fundo e a sugunda é a cor da letra
	/*
	0 – preto
	1 – azul
	2 – verde
	3 – verde água
	4 – vermelho
	5 – roxo
	6 – amarelo
	7 – branco
	8 – cinza
	9 – azul claro
	A – verde claro
	B – verde água claro
	C – vermelho claro
	D – lilás
	E – amarelo claro
	F – branco brilhante
	
	*/
	printf("olá mundo\n");
	system("Pause");
	system("cls");//limpa a tela
	printf("olá mundo\n");
	system("pause");
	system("cls");//limpa a tela
	return 0;
}
