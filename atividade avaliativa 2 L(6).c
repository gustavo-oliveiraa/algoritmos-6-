/*2. O fatorial de um valor inteiro, consiste no produto de todos os inteiros entre um e o valor fatorial. O
fatorial de 5 é 1*2*3*4*5 = 120. Fazer um programa para desenvolver este cálculo (fatorial) usando o while.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int fatorial=1, numero;
	
	printf("Digite o número que deseja obter o fatorial:");
	scanf("%d", &numero);
	fflush(stdin);
	
	while(numero != 0){
		fatorial = fatorial * numero;
		
		numero--;
	}
	
	printf("O fatorial do número escolhido é %d.\n", fatorial);

	system("pause");
    return 0;	
}
