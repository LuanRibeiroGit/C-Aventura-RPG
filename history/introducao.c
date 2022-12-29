#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <windows.h>

int inicio;

int introducaoHistory(){
        system("cls");
    fflush(stdin);
    printf("Digite algo para comecar... : ");
    scanf("%d", &inicio);
        Sleep(3000);
        system("cls");
    printf("BOM JOGOOO. ");
        Sleep(3000);
        system("cls");
    printf("CARREGANDO...  ");
        printf("1  ");
        Sleep(1000);
        system("cls");
    printf("CARREGANDO...  ");
        printf("2  ");
        Sleep(1000);
        system("cls");
    printf("CARREGANDO...  ");
        printf("3  ");
        Sleep(1000);
        system("cls");
    printf("CARREGANDO...  ");
        printf("4  ");
        Sleep(1000);
        system("cls");
    printf("CARREGANDO...  ");
        printf("5  ");
        Sleep(1000);
        system("cls");
    printf("CARREGANDO...  ");
        printf("Jaaaa");
        Sleep(1000);
        system("cls");

    printf("\n\nEm uma noite fria e chuvosa...\n");
        Sleep(3000);
        system("cls");
    printf("\n\nHa uma taverna no fundo de Zaun chamada The Last Drop.\n");
        Sleep(3000);
        system("cls");
    printf("\n\nOnde tres imigrantes, um Guerreiro, um Mago e um Assassino,\n");
        Sleep(3000);
        system("cls");
    printf("\n\nTres amigos de infacia, que tiveram seu reino devastado quando criancas,\n");
        Sleep(3000);
        system("cls");
    printf("\n\nSe reencontram e criam uma alianca chamada Trinity Force,\n");
        Sleep(3000);
        system("cls");
    printf("\n\nUma alianca que pode mudar o rumo de suas vidas.\n");
        Sleep(3000);
        system("cls");
    printf("\n\nE agora voce sera um deles.\n");
}

int history_introPerso(){

        printf("\n\nTeve sua vila devastada e seus familiares mortos por guerreiros do sangue,\n");
            Sleep(3000);
            system("cls");
        printf("\n\nE agora ja adulto ele busca por sua VINGANCA.\n");
            Sleep(4000);
            system("cls");
        printf("\n\nPor isso ele reencontra os seus antigos amigos e criam a...\n");
            Sleep(3000);
            system("cls");
        printf("\n\nTrinity Force.\n");
            Sleep(3000);
            system("cls");
}



int decisao1(){
    Sleep(5000);
    system("cls");
    printf("Depois da derrota de Dracula, voce precisa decidir o que ira fazer.\n");
    printf("\nDecisao final...");
    printf("\n 1- Ir embora do reino e voltar com a sua vida.\n 2- Dar a louca e matar todo mundo.\n 3- Roubar a coroa e se alto declarar Rei.\n 4- Decisao da Trinity Force.\n 5- Servir ao reino.\n\nDigite: ");
    scanf("%d", &aux);
            Sleep(3000);
            system("cls");

        if(aux == 1){
            printf("Voce foi embora e decidiu morar no campo solitario para todo o sempre.\n");
        }else if(aux == 2){
            printf("Voce decide matar todo mundo.\n");
            Sleep(3000);
            printf("Entao voce saca pocao da Madame LaLaurie e toma a sua ultima gota.\n");
            Sleep(3000);
            printf("Mas voce nao esperava que ao tomar a ultima gota, Voce morreria por cirrose.\nPela pocao ter alto teor de alcool.\n");
        }else if(aux == 3){
            printf("Entao voce rouba a cora para se declarar rei.\n");
            Sleep(3000);
            printf("Mas ao colocar a coroa em sua cabeca voce morre, pela coroa ter sido envenenada.\n");
        }else if(aux == 4){
            printf("Entao a Trinity Force deiciu declarar voce Rei\nMas voce nega e fica louco\n");
            Sleep(3000);
            printf("Mas ao colocar a coroa em sua cabeca voce morre, pela coroa ter sido envenenada.\n");
            Sleep(3000);
            printf("Voce decide matar todo mundo.\n");
            Sleep(3000);
            printf("voce saca pocao da Madame LaLaurie e toma a sua ultima gota.\n");
            Sleep(3000);
            printf("Mas voce nao esperava que ao tomar a ultima gota, Voce morreria por cirrose.\nPela pocao ter alto teor de alcool.\n");
        }else if(aux == 5){
            printf("Voce decide servir para sempre o reino.\n");
            Sleep(3000);
            printf("Mas entao uma flesha de um dos membros do Dracula atinge seu peito\n");
            Sleep(3000);
           printf("e voce cai morto no chao.\n");
        }
    Sleep(5000);
    system("cls");
    printf("FIIIIMMM\n\n\n\n\n");
}
