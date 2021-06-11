/*5. Uma companhia de teatro planeja dar uma série de espetáculos. A direção calcula que a R$15,00 o
ingresso, serão vendidos 120 ingressos, e as despesas montarão R$600,00. A uma diminuição de R$3,00
nos ingressos espera-se que haja um aumento de 26 ingressos vendidos. Fazer um programa que escreva
uma tabela de valores do lucro esperado em função do preço do ingresso, fazendo-o variar de R$15,00 a
R$3,00 de 3 em 3 reais. Escreva, ainda, o lucro máximo esperado, o preço e o número de ingressos
correspondentes.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("|___________________________________________________________|\n");
	printf("|                        Tabela de Lucros                   |\n");
	printf("|===========================================================|\n");
	printf("| Preço ingresso | Igressos Vendidos | Despezas | Lucros    |\n");
	printf("|===========================================================|\n");
	printf("|$15,00          |120 ingressos	 |$600,00       |$1200,00   |\n");
	printf("|$12,00	         |146 ingressos	 |$600,00	|$1152,00   |\n");
	printf("|$9,00	 	 |172 ingressos	 |$600,00	|$948,00    |\n");
	printf("|$6,00           |198 ingressos	 |$600,00	|$588,00    |\n");
	printf("|$3,00           |224 ingressos	 |$600,00	|$72,00	    |\n");
	printf("|===========================================================|\n");
	
	printf("|====================================================================================|\n");
	printf("|O lucro máximo esperado é de $1200,00 para 120 ingressos vendidos por 15 reais cada.|\n");
	printf("|====================================================================================|\n");	
	
	
	system("pause");
    return 0;	
}
