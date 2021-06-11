/*3. Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino) de até 10 pessoas. Fazer
um programa que calcule e escreva: a maior e a menor altura do grupo; a média da altura das mulheres;
o número de homens. Usar os três comandos de repetição na solução do problema.*/

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
		printf("Quantas pessoas (Máximo 10) irão fazer a pesquisa:");
		scanf("%d", &quantidadePessoas);
		fflush(stdin);
		if(quantidadePessoas<1 || quantidadePessoas>10)
		printf("Digite um valor válido!\n");		
	}while(quantidadePessoas<1 || quantidadePessoas>10);
		
	for(contador=1; contador<=quantidadePessoas; contador++){	
		printf("Digite o sexo (|M|-masculino |F|-feminino) da pessoa %d:", contador);
		scanf("%c", &sexo);
		fflush(stdin);
		
		sexo = toupper(sexo);
		
		printf("Digite a altura da pessoa %d, em centímetros:", contador);
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
	
	printf("A maior altura do grupo é %d centímetros.\n", maiorAltura);
	printf("A menor altura do grupo é %d centímetros.\n", menorAltura);
	printf("A média da altura das mulheres é %.1f.\n", mediaAlturaMulher);
	printf("O número de homens nesse grupo é %d.\n", homens);
		
    system("pause");
    return 0;
}
