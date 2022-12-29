#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <windows.h>
#include "fights.c"




int lunulaDeSangue(){
    int portaMain, auxiliarPorta, auxBau, auxEscolha, contadorDeFases, batalha, auxiliarLutaMob, decisaoEquipe, aMorte, auxITEM, aux;
    espadaLunula();
    cajadoLunula();
    adagasLunula();
    coracaoLunula();
    pocaoLunula();

        FILE *save;

        save = fopen("C:/Users/Luan/Desktop/C Aventura RPG/saves.txt", "w");
        

        Sleep(3000);
        system("cls");
    printf("Chegando em Lunula de Sangue...\n");
        Sleep(3000);
        system("cls");
    printf("Antes de tudo voce precisa tomar uma decisao:\n");
        while (decisaoEquipe != 1 && decisaoEquipe != 2){
            printf(" 1- Ficar com a equipe.\n 2- Ficar sozinho.\n\n");
            printf("Digite: ");
                scanf("%d", &decisaoEquipe);
            if (decisaoEquipe == 1){
                printf("Voce ficara sozinho, pois ninguem quis ficar com voce.\n");
                    Sleep(3000);
                    system("cls");
            }else if(decisaoEquipe == 2){
                printf("Voce ficara sozinho.\n");
                    Sleep(3000);
                    system("cls");
            }else{
                printf("Voce quis brincar entao ficara sozinho.\n");
                    Sleep(3000);
                    system("cls");
            }
        }
        
    int continuar;
    contadorDeFases = 1;
        while(portaMain != 1 && portaMain != 2 && portaMain != 3 || contadorDeFases <= 4){
        system("cls");
        printf("\nEsta e a %d Fase.", contadorDeFases);
        printf("\nEscolha uma das portas.\n");
            printf(" 1- Porta\n");
            printf(" 2- Porta\n");
            printf(" 3- Porta\n");
        fflush(stdin);
        printf("\nDigite: ");
        scanf("%d", &portaMain);
        printf("\nVoce escolheu a porta numero %d\n", portaMain);
            Sleep(3000);
            system("cls");

            srand( (unsigned)time(NULL) );
            auxiliarPorta = rand() % 3;
            if(portaMain == 1 || portaMain == 2 || portaMain == 3){
                fprintf(save, "Voce escolher a porta %d.\n", portaMain);
                if(auxiliarPorta == 0){
                        printf("Parabens voce encontrou um bau.\n");
                                if(contadorDeFases == 1){
                                    printf("O BAU dropou 2 itens\n 1- Espada Sedenta por Sangue\n 2- Poti poti\n\nEspada Sedenta e um item lendario, Ja o Poti poti e um fragmento de pocoes.\n");
                                    printf("\nEspada Sedenta por Sangue");
                                    printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: 1/%d\n\n",espadaSedenta.VIDA, espadaSedenta.ARMADURA, espadaSedenta.ATK, espadaSedenta.ATKSPEED, espadaSedenta.CRITICO);
                                    printf("Seus atributos base aumentaram\n");
                                    fprintf(save, "Parabens, voce achou um bau com uma Sedenta por Sangue e um Poti Poti.\n", portaMain);
                                }else if(contadorDeFases == 2){
                                    printf("O BAU dropou 2 itens\n 1- Cajado de Bloody Mary\n 2- Perna de pau\nBloody Mary e um item lendario, Ja Perna de pau e um fragmento de pocoes.\n");
                                    printf("\nCajado de Bloody Mary");
                                    printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: 1/%d\n\n",cajadoDeBloody.VIDA, cajadoDeBloody.ARMADURA, cajadoDeBloody.ATK, cajadoDeBloody.ATKSPEED, cajadoDeBloody.CRITICO);
                                    printf("Seus atributos base aumentaram\n");
                                    fprintf(save, "Parabens, voce achou um bau com um Cajado de Bloody Mary e uma Perna de Pau.\n", portaMain);
                                }else if(contadorDeFases == 3){
                                    printf("O BAU dropou 2 itens\n 1- Adagas de Dalia\n 2- Olho de Vidro\nAdagas de Dalia e um item lendario, Ja o Olho de Vidro e um fragmento de pocoes.\n");
                                    printf("\nAdagas de Dalia");
                                    printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: 1/%d\n\n",adagasDeDalia.VIDA, adagasDeDalia.ARMADURA, adagasDeDalia.ATK, adagasDeDalia.ATKSPEED, adagasDeDalia.CRITICO);                
                                    printf("Seus atributos base aumentaram\n");
                                    fprintf(save, "Parabens, voce achou um bau com uma Adagas de Dalis e um olho de vidro.\n", portaMain);
                                }else if(contadorDeFases == 4){
                                    printf("O BAU dropou 2 itens\n 1- Coracao Flamejante\n 2- Nariz de Pica-Pau\nNariz e um item lendario, Ja Nariz de Pica-Pau e um fragmento de pocoes.\n");
                                    printf("\nCoracao Flamejante");
                                    printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: 1/%d\n\n",coracaoFlamejante.VIDA, coracaoFlamejante.ARMADURA, coracaoFlamejante.ATK, coracaoFlamejante.ATKSPEED, coracaoFlamejante.CRITICO);                
                                    printf("Seus atributos base aumentaram\n");
                                    fprintf(save, "Parabens, voce achou um bau com um Coracao Flamejante e um Nariz de Pica Pau.\n", portaMain);
                                }
                            printf("Digite qualquer coisa para continuar... : ");
                            scanf("%d", &aux);
                        contadorDeFases +=1;
                }else if(auxiliarPorta > 0){
                    printf("\nOpsssss! esta porta tem um ");
                                if(contadorDeFases == 1){
                                        printf("Zombie ");
                                    while(aMorte != 1){ 
                                        printf("Lute contra eleee!\n");
                                            mapa1_zombie();
                                            printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: 1/%d\n\nDigite qualquer letra para Continuar... : ",zombie.VIDA, zombie.ARMADURA, zombie.ATK, zombie.ATKSPEED, zombie.CRITICO);
                                            scanf("%d", &auxiliarLutaMob);
                                        printf("Aguarde a batalha ja ira comecar.\n\n");
                                        Sleep(1000);

                                        lutaZumbi();
                                        
                                        system("cls");   
                                            if(Guerreiro.VIDA <= 0 || Mago.VIDA <= 0 || Assassino.VIDA <= 0){
                                                aMorte = 2;
                                            fprintf(save, "Voce morreu para o Zombie.\n", portaMain);
                                            }else{
                                                aMorte = 1;
                                            fprintf(save, "Parabens, voce derrotou o Zombie.\n", portaMain);
                                            }
                                }
                                aMorte = 2;
                                }else if(contadorDeFases == 2){
                                        printf("Mago do Vampirismo ");
                                    while(aMorte != 1){
                                        printf("Lute contra eleee!\n");
                                            mapa1_Vampirico();
                                            printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: 1/%d\n\nDigite qualquer letra para Continuar... : ",Vampirico.VIDA, Vampirico.ARMADURA, Vampirico.ATK, Vampirico.ATKSPEED, Vampirico.CRITICO);
                                            scanf("%d", &auxiliarLutaMob);
                                        printf("Aguarde a batalha ja ira comecar.\n\n");
                                        Sleep(1000);
                                        lutaVampirico();
                                        system("cls");
                                            if(Guerreiro.VIDA <= 0 || Mago.VIDA <= 0 || Assassino.VIDA <= 0){
                                                aMorte = 2;
                                            fprintf(save, "Voce morreu para o Vampirico.\n", portaMain);
                                            }else{
                                                aMorte = 1;
                                            fprintf(save, "Parabens, voce derrotou o Vampirico.\n", portaMain);
                                            }
                                    }
                                aMorte = 2;
                                }else if(contadorDeFases == 3){
                                        printf("Bruxa de Sangue ");
                                    while(aMorte != 1){
                                        printf("Lute contra eleee!\n");
                                            mapa1_bruxaDeSangue();
                                            printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: 1/%d\n\nDigite qualquer letra para Continuar... : ",bruxaDeSangue.VIDA, bruxaDeSangue.ARMADURA, bruxaDeSangue.ATK, bruxaDeSangue.ATKSPEED, bruxaDeSangue.CRITICO);
                                            scanf("%d", &auxiliarLutaMob);
                                        printf("Aguarde a batalha ja ira comecar.\n\n");
                                        Sleep(1000);
                                        lutaBruxaDeSangue();
                                        system("cls");
                                            if(Guerreiro.VIDA <= 0 || Mago.VIDA <= 0 || Assassino.VIDA <= 0){
                                            fprintf(save, "Voce morreu para a Bruxa de Sangue.\n", portaMain);
                                                aMorte = 2;
                                            }else{
                                                aMorte = 1;
                                            fprintf(save, "Parabens, voce derrotou a Bruxa de Sangue.\n", portaMain);
                                            }
                                    }  
                                aMorte = 2;
                                }else if(contadorDeFases == 4){
                                        printf("Chupa cabra ");
                                    while(aMorte != 1){   
                                        printf("Lute contra eleee!\n");
                                            mapa1_chupaCabra();
                                            printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: 1/%d\n\nDigite qualquer letra para Continuar... : ",chupaCabra.VIDA, chupaCabra.ARMADURA, chupaCabra.ATK, chupaCabra.ATKSPEED, chupaCabra.CRITICO);
                                            scanf("%d", &auxiliarLutaMob);
                                        printf("Aguarde a batalha ja ira comecar.\n\n");
                                        Sleep(1000);
                                        lutaChupaCabra();
                                        system("cls");
                                           if(Guerreiro.VIDA <= 0 || Mago.VIDA <= 0 || Assassino.VIDA <= 0){
                                                aMorte = 2;
                                            fprintf(save, "Voce morreu para o Chupa Cabra.\n", portaMain);
                                            }else{
                                                aMorte = 1;
                                            fprintf(save, "Parabens, voce derrotou o Chupa Cabra.\n", portaMain);
                                            }
                                    } 
                                aMorte = 2;
                                    
                                }
                                
                        contadorDeFases += 1;
                    

                }
            }else{
                printf("Esta porta nao existe, tente outra.");
            }
    }
    while(aMorte != 1){
    system("cls");
        printf("\nBOSS Final, DRACULA ");
        printf("Lute contra eleee!\n");
            mapa1_dracula();
            printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: 1/%d\n\nDigite qualquer letra para Continuar... : ",dracula.VIDA, dracula.ARMADURA, dracula.ATK, dracula.ATKSPEED, dracula.CRITICO);
            scanf("%d", &auxiliarLutaMob);
        printf("Aguarde a batalha ja ira comecar.\n\n");
        Sleep(1000);
        lutaDracula();
            if(Guerreiro.VIDA <= 0 || Mago.VIDA <= 0 || Assassino.VIDA <= 0){
                aMorte = 2;
                fprintf(save, "Voce morreu para o Dracula.\n", portaMain);
            }else{
                aMorte = 1;
            fprintf(save, "Parabens, voce derrotou o Dracula.\n", portaMain);
            }
    }
    aMorte = 2;
}