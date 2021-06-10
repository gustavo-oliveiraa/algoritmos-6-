/*7. Escreva um programa que transforme o computador em uma urna eletrônica para eleição do melhor
jogador de futebol de todos os tempos. O número 25 é do candidato Pelé e o 33 do candidato Maradona.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int voto, votosPele=0, votosMaradona=0; 
	char opcao, opcaoRepetir;
	
	do{	
		printf("Bem vindo a eleição do melhor jogador de futebol de todos os tempos!!!\n");
		printf("Para contabilizar os votos use os códigos abaixo para a votação:\n");
		printf("|25| - Péle \t |33| - Maradona.\n");
		do{
			printf("\nDigite seu voto e participe da maior decição de todas:");
			scanf("%d", &voto);
			fflush(stdin);
		if(voto == 25){
			votosPele++;
		}
		else if(voto == 33){
			votosMaradona++;
		}
		else{
			printf("Essa opção não é válida.\n");
		}	
		
	}while(voto != 25 && voto != 33);
	
	system("cls");

	printf("Seu voto foi computado com sucesso, agradecemos por sua ajuda nessa importante decisão.\n");
	printf("Se houver mais algum participante dessa eleição digite |S| - sim |N| - não:");
	scanf("%c", &opcaoRepetir);
	fflush(stdin);
	
	opcaoRepetir = toupper(opcaoRepetir);
	
	system("cls");
	
	}while(opcaoRepetir != 'N');
	
	system("cls");

	printf("Os votos contabilizados para o Péle foram %d.\n", votosPele);
	printf("Os votos contabilizados para o Maradona foram %d.\n", votosMaradona);
	
	if(votosPele > votosMaradona){
		printf("\nO ganhador e melhor jogador de todos os tempos é o grande Péle!\n");
	}
	else if(votosMaradona > votosPele){
		printf("\nO ganhador e melhor jogador de todos os tempos é o grande Maradona!\n");
	}
	else{
		printf("\nHouve um empate entre os grandes jogadores, os melhores de todos os tempos!.\n");
	}




	system("pause");
    return 0;	
}
