/*4. Foi feita uma pesquisa para determinar o índice de mortalidade infantil em um certo período. Fazer um
programa que:
-leia o número de crianças nascidas no período;
-leia um número indeterminado de linhas com as informações das crianças que morreram, contendo,
cada uma, o sexo da criança (m -masc., f- fem.) e o número de meses de vida da criança. A última linha,
que não entrará nos cálculos, contém no lugar do sexo o caractere v (vazio). Determine e escreva:
a) porcentagem de crianças mortas no período;
b) porcentagem de crianças masculinas mortas no período;
c) porcentagem de crianças que viveram 24 meses ou menos no período*/

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
	
	printf("Digite a quantidade de crianças nascidas no período pesquisado:");
	scanf("%d", &nascidas);
	fflush(stdin);
	
	printf("Digite a quantidade de crianças que vieram a falecer:");
	scanf("%d", &falecimentos);
	fflush(stdin);
	
	for(contador=1; contador<=falecimentos; contador++){
		do{
		printf("Digite o sexo da criança %d |M|-masculino, |F|-feminino, que veio a falecer:", contador);
		scanf("%c", &sexo);
		fflush(stdin);
		}while(sexo != 'f' && sexo != 'F' && sexo != 'm' && sexo != 'M' && sexo != 'v' && sexo != 'V');
	
		sexo = toupper(sexo);
		
		printf("Digite quantos meses de vida a criança %d possuia:", contador);
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
	
	printf("A porcentagem de crianças mortas no período calculado é de %.2f%%.\n", porcentagemMortos);
	printf("A porcentagem de crianças masculinas mortas no período calculado é de %.2f%%.\n", porcentagemMasculinos);
	printf("A porcentagem de crianças que morreram com idade prematura calculado é de %.2f%%.\n", porcentagem24meses);
		
	system("pause");
    return 0;	
}
