#include <stdlib.h>
#include <stdio.h>

int main()
{
	int op, a, b;
	
	printf("-- MINICURSO -- INTRODUCAO AO CONTROLE DE VERSAO C/ GIT -- \n\t -- CALCULADORA SIMPLES EM C -- ");
	
	printf("MENU -- \n\n\n 1 - SOMA \n 2 - SUBTRACAO \n DIGITE O NUMERO DA OPERACAO DESEJADA:  ");
	scanf("%d",&op);
	printf("Digite os numeros desejados: ");
	scanf("%d",&a);
	system("cls");
	printf("Digite os numeros desejados: ");
	scanf("%d",&b);
	system("cls");
	if(op == 1)
		op = a+b;
	else if(op == 2)
	 	op = a-b;
		
	printf("O resultado da operacao e: %d\n\n",op);
	
	system("pause");
}
