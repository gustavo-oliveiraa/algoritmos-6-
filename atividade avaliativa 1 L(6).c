/*1. Elabore um programa em C que solicite um valor ao usuário e imprima todos os números pares do
número fornecido até 2000, em uma janela de execução. Caso o valor informado seja maior que 2000,
apresente no meio de uma tela limpa, somente o valor informado com uma mensagem dizendo que o
limite de cálculo foi excedido.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero, contador=1;
	
	do{
		printf("Esse programa irá mostrar todos números pares desde o número escolhido até o número 2000.\n");
		printf("Informe um número, até a quantidade 2000:");
		scanf("%d", &numero);
		fflush(stdin);
		
		system("cls");
	
		if(numero>2000){
			printf("%d o limite de cálculo foi excedido!\n", numero);
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
