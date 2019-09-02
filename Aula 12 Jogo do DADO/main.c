#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("Jogo do dado \n");
	srand(time(NULL));
	printf("face: %d\n",rand()%6);
	system("pause");
	return 0;
}
