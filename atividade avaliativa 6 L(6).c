/*6. Elabore um programa que identifique o número de algarismos de um valor inteiro positivo informado
pelo usuário.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int tamanho;
	char opcao, numeroDigitado[100];
	
	do{
		do{
			printf("Digite um número inteiro positivo, que gostaria de saber quantos algarismos possuem:");
			scanf("%s", &numeroDigitado);
			fflush(stdin);
	
			if(numeroDigitado<=0)
				printf("Apenas números inteiros positivos!\n");
				
			system("cls");	

		}while(numeroDigitado<=0);
	
		tamanho = strlen(numeroDigitado);
	
		system("cls");
	
		printf("O número escolhido foi %s.\n", numeroDigitado);
		printf("\nPossue %d algarismos.\n", tamanho);
	
		printf("\nDeseja descobrir a quantidade de algorismos de mais algum número |S|-sim |N|-não:");
		scanf("%c", &opcao);
		fflush(stdin);
		
		opcao = toupper(opcao);
		
		system("cls");
	
	}while(opcao != 'N');
	
	printf("Obrigado por utilizar este programa.\n");
	
	
	
	system("pause");
    return 0;	
}
