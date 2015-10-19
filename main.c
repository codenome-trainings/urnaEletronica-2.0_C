/*
* Programa: Urna Eletrônica
* Autor:    Thiago Cunha
*/
//////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
/////////////////////FUNÇÕES/////////////////////////
int menu();
void iniciarVotacao();
void escolheCandidato(int votacao);
int decisao();
void imprimeVotacao();
//////////////////////GLOBAIS////////////////////////
int aecio = 0;
int dilma = 0;
int eduardo = 0;
int eymael = 0;
int levy = 0;
int luciana = 0;
int marina = 0;
int mauro = 0;
int pastor = 0;
int rui = 0;
int ze = 0;
int nulo = 0;
int branco = 0;
//////////////////////////////////////////////////////
int main() {
	int escolha;

	while(escolha >= 0) {
		escolha = menu();
	}

}
//////////////////////////////////////////////////////
void bemvindo() {
	printf("///////////////////////////////////////////////////////////\r\n");
	printf("//////////////////////URNA ELETRÔNICA//////////////////////\r\n");
	printf("///////////////////////////////////////////////////////////\r\n\r\n");
}

int menu() {
	system("clear");
	bemvindo();
	int escolha;
	printf("[1] Iniciar votação. \r\n");
	printf("[2] Apresentar os resultados da votação. \r\n\r\n\r\n");
	printf("[0] Sair\r\n");
	printf("Digite um opção.");
	scanf("%d", &escolha);
	switch(escolha) {
		case 1:
		system("clear");
		iniciarVotacao();
		break;

		case 2:
		system("clear");
		imprimeVotacao();
		break;

		case 0:
		system("clear");
		return -1;
		break;

		default:
		system("clear");
		printf("Opção inválida. Tente novamente!\r\n");
	}
}

void iniciarVotacao() {
	int votacao;
	system("clear");
	printf("[45] Aécio Neves\r\n");
	printf("[13] Dilma Rousseff\r\n");
	printf("[43] Eduardo Jorge\r\n");
	printf("[27] Eymael\r\n");
	printf("[28] Levy Fidelix\r\n");
	printf("[50] Luciana Genro\r\n");
	printf("[40] Marina Silva\r\n");
	printf("[21] Mauro Iasi\r\n");
	printf("[20] Pastor Everaldo\r\n");
	printf("[29] Rui Costa Pimenta\r\n");
	printf("[16] Zé Maria\r\n");
	printf("[0] Voto nulo\r\n");
	printf("[1] Voto branco\r\n");

	printf("Escolha uma opção: ");
	scanf("%d", &votacao);

	escolheCandidato(votacao);
}

void escolheCandidato(int votacao) {
	system("clear");
	switch(votacao) {
		case 45:
		printf("Você escolheu Aécio neves. \r\n");
		aecio += decisao();
		break;

		case 13:
		printf("Você escolheu Dilma Rousseff. \r\n");
		dilma += decisao();
		break;

		case 43:
		printf("Você escolheu Eduardo Jorge. \r\n");
		eduardo += decisao();
		break;

		case 27:
		printf("Você escolheu Eymael. \r\n");
		eymael += decisao();
		break;

		case 28:
		printf("Você escolheu Levy Fidelix. \r\n");
		levy += decisao();
		break;

		case 50:
		printf("Você escolheu Luciana Genro. \r\n");
		luciana += decisao();
		break;

		case 40:
		printf("Você escolheu Marina Silva. \r\n");
		marina += decisao();
		break;

		case 21:
		printf("Você escolheu Mauro Iasi. \r\n");
		mauro += decisao();
		break;

		case 20:
		printf("Você escolheu Pastor Everaldo. \r\n");
		pastor += decisao();
		break;

		case 29:
		printf("Você escolheu Rui Costa Pimenta. \r\n");
		rui += decisao();
		break;

		case 16:
		printf("Você escolheu Zé Maria. \r\n");
		ze += decisao();
		break;

		case 0:
		printf("Você escolheu Voto nulo. \r\n");
		nulo += decisao();
		break;

		case 1:
		printf("Você escolheu Voto branco. \r\n");
		branco += decisao();
		break;

		default:
		printf("Opção inválida. Tente novamente!\r\n");
	}
}

int decisao() {
	printf("Você está certo disso?");
	printf("[1] SIM | [2] NÃO");
	int decisao;
	scanf("%d", &decisao);
	if(decisao == 1) {
		printf("Parabéns! Seu voto foi realizado com sucesso! \r\n");
		return 1;
	} else {
		printf("Tudo bem! Selecione uma opção novamente! \r\n");
		return 0;
	}
}

void imprimeVotacao() {
	system("clear");

	printf("Aécio Neves: %d\r\n", aecio);
	printf("Dilma Rousseff: %d\r\n", dilma);
	printf("Eduardo Jorge: %d\r\n", eduardo);
	printf("Eymael: %d\r\n", eymael);
	printf("Levy Fidelix: %d\r\n", levy);
	printf("Luciana Genro: %d\r\n", luciana);
	printf("Marina Silva: %d\r\n", marina);
	printf("Mauro Iasi: %d\r\n", mauro);
	printf("Pastor Everaldo: %d\r\n", pastor);
	printf("Rui Costa Pimenta: %d\r\n", rui);
	printf("Zé Maria: %d\r\n", ze);
	printf("Voto nulo: %d\r\n", nulo);
	printf("Voto branco: %d\r\n", branco);
}
