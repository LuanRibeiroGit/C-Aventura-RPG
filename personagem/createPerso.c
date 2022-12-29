#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <windows.h>

    int escolhaTraje;
	int escolhaClasse, classeFlag, confirmarClasse, escolhaTraje;
    char nickName[100];



int createPersonagem (){
    printf("Digite o seu nick.\n");
    fflush(stdin);
    printf("Digite: ");
    gets(nickName);
			
		
		do{
			system("cls");
			printf("Escolha a sua classe:\n");
			printf("\n");
			printf("1 | Guerreiro | ");
			printf("\n");
			printf("2 |   Mago    | ");
			printf("\n");
			printf("3 | Assassino | ");
			printf("\n");
			
			fflush(stdin);
			printf("\nDigite a sua classe: ");	
			scanf("%d", &escolhaClasse);

			switch (escolhaClasse){
				
				case 1:
					baseGuerreiro();
					printf("\nA Classe escolhida foi: Guerreiro");
					printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: %d\n", Guerreiro.VIDA, Guerreiro.ARMADURA, Guerreiro.ATK, Guerreiro.ATKSPEED, Guerreiro.CRITICO);
					
					fflush(stdin);
					printf("\n 1. Confirmar");
					printf("\n 2. Voltar\n");
					printf("\nDigite: ");
					scanf("%d", &confirmarClasse);
					if(confirmarClasse == 1){
						printf("\nA Classe escolhida foi: Guerreiro");
						classeFlag = 1;
					} else if (confirmarClasse == 2){
						printf("\nVoltando...");
						classeFlag = 0;
					} else {
						printf("\nOpcao invalida");
						classeFlag = 0;
					}
					
					break;
					
				case 2:
					baseMago();
					printf("\nA Classe escohida foi: Mago");
					printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: %d\n", Mago.VIDA, Mago.ARMADURA, Mago.ATK, Mago.ATKSPEED, Mago.CRITICO);
					
					fflush(stdin);
					printf("\n 1. Confirmar");
					printf("\n 2. Voltar\n");
					printf("\nDigite: ");
					scanf("%d", &confirmarClasse);
					if(confirmarClasse == 1){
						printf("\nA Classe escolhida foi: Mago");
						classeFlag = 1;
					} else if (confirmarClasse == 2){
						printf("\nVoltando...");
						classeFlag = 0;
					} else {
						printf("\nOpcao invalida");
						classeFlag = 0;
					}
					
					break;
					
				case 3:
					baseAssassino();
					printf("\nA Classe escohida foi: Assassino");
					printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: %d\n", Assassino.VIDA, Assassino.ARMADURA, Assassino.ATK, Assassino.ATKSPEED, Assassino.CRITICO);
					
					fflush(stdin);
					printf("\n 1. Confirmar");
					printf("\n 2. Voltar\n");
					printf("\nDigite: ");
					scanf("%d", &confirmarClasse);
					if(confirmarClasse == 1){
						printf("\nA Classe escolhida foi: Assassino");
						classeFlag = 1;
					} else if (confirmarClasse == 2){
						printf("\nVoltando...");
						classeFlag = 0;
					} else {
						printf("\nOpcao invalida");
						classeFlag = 0;
					}
					
					break;
					
				default:
				printf("\nCodigo incorreto, digite novamente\n");		
			}
		} while (classeFlag == 0);
	system("cls");
    printf("\n 1. Traje Demonio Carmesim");
    printf("\n 2. Traje Rei Corvo");
    printf("\n Escolha seu traje: ");
    scanf("%d", &escolhaTraje);
		
}

