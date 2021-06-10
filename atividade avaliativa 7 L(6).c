/*7. Escreva um programa que transforme o computador em uma urna eletr�nica para elei��o do melhor
jogador de futebol de todos os tempos. O n�mero 25 � do candidato Pel� e o 33 do candidato Maradona.*/

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
		printf("Bem vindo a elei��o do melhor jogador de futebol de todos os tempos!!!\n");
		printf("Para contabilizar os votos use os c�digos abaixo para a vota��o:\n");
		printf("|25| - P�le \t |33| - Maradona.\n");
		do{
			printf("\nDigite seu voto e participe da maior deci��o de todas:");
			scanf("%d", &voto);
			fflush(stdin);
		if(voto == 25){
			votosPele++;
		}
		else if(voto == 33){
			votosMaradona++;
		}
		else{
			printf("Essa op��o n�o � v�lida.\n");
		}	
		
	}while(voto != 25 && voto != 33);
	
	system("cls");

	printf("Seu voto foi computado com sucesso, agradecemos por sua ajuda nessa importante decis�o.\n");
	printf("Se houver mais algum participante dessa elei��o digite |S| - sim |N| - n�o:");
	scanf("%c", &opcaoRepetir);
	fflush(stdin);
	
	opcaoRepetir = toupper(opcaoRepetir);
	
	system("cls");
	
	}while(opcaoRepetir != 'N');
	
	system("cls");

	printf("Os votos contabilizados para o P�le foram %d.\n", votosPele);
	printf("Os votos contabilizados para o Maradona foram %d.\n", votosMaradona);
	
	if(votosPele > votosMaradona){
		printf("\nO ganhador e melhor jogador de todos os tempos � o grande P�le!\n");
	}
	else if(votosMaradona > votosPele){
		printf("\nO ganhador e melhor jogador de todos os tempos � o grande Maradona!\n");
	}
	else{
		printf("\nHouve um empate entre os grandes jogadores, os melhores de todos os tempos!.\n");
	}




	system("pause");
    return 0;	
}
