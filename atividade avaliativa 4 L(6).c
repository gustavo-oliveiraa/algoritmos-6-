/*4. Foi feita uma pesquisa para determinar o �ndice de mortalidade infantil em um certo per�odo. Fazer um
programa que:
-leia o n�mero de crian�as nascidas no per�odo;
-leia um n�mero indeterminado de linhas com as informa��es das crian�as que morreram, contendo,
cada uma, o sexo da crian�a (m -masc., f- fem.) e o n�mero de meses de vida da crian�a. A �ltima linha,
que n�o entrar� nos c�lculos, cont�m no lugar do sexo o caractere v (vazio). Determine e escreva:
a) porcentagem de crian�as mortas no per�odo;
b) porcentagem de crian�as masculinas mortas no per�odo;
c) porcentagem de crian�as que viveram 24 meses ou menos no per�odo*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int contador, falecimentos, nascidas, meses, meses24=0, meninos=0;
	float porcentagemMortos=0, porcentagemMasculinos=0, porcentagem24meses=0;
	char sexo;
	
	printf("Digite a quantidade de crian�as nascidas no per�odo pesquisado:");
	scanf("%d", &nascidas);
	fflush(stdin);
	
	printf("Digite a quantidade de crian�as que vieram a falecer:");
	scanf("%d", &falecimentos);
	fflush(stdin);
	
	for(contador=1; contador<=falecimentos; contador++){
		do{
		printf("Digite o sexo da crian�a %d |M|-masculino, |F|-feminino, que veio a falecer:", contador);
		scanf("%c", &sexo);
		fflush(stdin);
		}while(sexo != 'f' && sexo != 'F' && sexo != 'm' && sexo != 'M' && sexo != 'v' && sexo != 'V');
	
		sexo = toupper(sexo);
		
		printf("Digite quantos meses de vida a crian�a %d possuia:", contador);
		scanf("%d", &meses);
		fflush(stdin);
		
		system("cls");
		
		if(sexo=='M')
		meninos++;
		
		if(meses>=1 && meses<=24)
		meses24++;
	}
	
	porcentagemMortos = (falecimentos * 100) / nascidas;
	porcentagemMasculinos = (meninos * 100) / nascidas;
	porcentagem24meses = (meses24 * 100) / nascidas;
	
	system("cls");
	
	printf("A porcentagem de crian�as mortas no per�odo calculado � de %.2f%%.\n", porcentagemMortos);
	printf("A porcentagem de crian�as masculinas mortas no per�odo calculado � de %.2f%%.\n", porcentagemMasculinos);
	printf("A porcentagem de crian�as que morreram com idade prematura calculado � de %.2f%%.\n", porcentagem24meses);
		
	system("pause");
    return 0;	
}
