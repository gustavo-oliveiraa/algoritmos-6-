/*1. Elabore um programa em C que solicite um valor ao usu�rio e imprima todos os n�meros pares do
n�mero fornecido at� 2000, em uma janela de execu��o. Caso o valor informado seja maior que 2000,
apresente no meio de uma tela limpa, somente o valor informado com uma mensagem dizendo que o
limite de c�lculo foi excedido.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero, contador=1;
	
	do{
		printf("Esse programa ir� mostrar todos n�meros pares desde o n�mero escolhido at� o n�mero 2000.\n");
		printf("Informe um n�mero, at� a quantidade 2000:");
		scanf("%d", &numero);
		fflush(stdin);
		
		system("cls");
	
		if(numero>2000){
			printf("%d o limite de c�lculo foi excedido!\n", numero);
		}
	}while(numero>=2000);
	
	system("cls");
	
	if(numero % 2 != 0){
		printf("%d\n", numero);
		for(contador=numero; contador<2000; contador++){
			contador++;
			printf("%d\n", contador);
		}
	}
	else if(numero % 2 == 0){
		printf("%d\n", numero);
		for(contador=numero; contador<2000; contador++){
			contador++;
			printf("%d\n", contador + 1);
		}
	}
		
	system("pause");
    return 0;
}
