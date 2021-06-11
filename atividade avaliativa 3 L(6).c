/*3. Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino) de at� 10 pessoas. Fazer
um programa que calcule e escreva: a maior e a menor altura do grupo; a m�dia da altura das mulheres;
o n�mero de homens. Usar os tr�s comandos de repeti��o na solu��o do problema.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int contador, altura, maiorAltura=0, menorAltura=0, alturaMulheres=0, homens=0, mulheres=0, quantidadePessoas;
	float mediaAlturaMulher=0;
	char sexo;	
	
	do{
		printf("Quantas pessoas (M�ximo 10) ir�o fazer a pesquisa:");
		scanf("%d", &quantidadePessoas);
		fflush(stdin);
		if(quantidadePessoas<1 || quantidadePessoas>10)
		printf("Digite um valor v�lido!\n");		
	}while(quantidadePessoas<1 || quantidadePessoas>10);
		
	for(contador=1; contador<=quantidadePessoas; contador++){	
		printf("Digite o sexo (|M|-masculino |F|-feminino) da pessoa %d:", contador);
		scanf("%c", &sexo);
		fflush(stdin);
		
		sexo = toupper(sexo);
		
		printf("Digite a altura da pessoa %d, em cent�metros:", contador);
		scanf("%d", &altura);
		fflush(stdin);
		
		if(contador==1)
		maiorAltura = altura;
		if(maiorAltura < altura)
		maiorAltura = altura;
		
		if(contador==1)
		menorAltura = altura;
		if(menorAltura > altura)
		menorAltura = altura;
		
		if(sexo=='F'){
		mulheres++;
		alturaMulheres = alturaMulheres + altura;
		}
		if(sexo=='M')
		homens++;
		
	}
	
	system("cls");
	
	mediaAlturaMulher = alturaMulheres/mulheres;
	
	printf("A maior altura do grupo � %d cent�metros.\n", maiorAltura);
	printf("A menor altura do grupo � %d cent�metros.\n", menorAltura);
	printf("A m�dia da altura das mulheres � %.1f.\n", mediaAlturaMulher);
	printf("O n�mero de homens nesse grupo � %d.\n", homens);
		
	system("pause");
    return 0;
}
