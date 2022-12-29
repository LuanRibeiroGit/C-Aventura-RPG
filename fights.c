#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <windows.h>
#include "personagem/classes.c"
#include "personagem/monsters.c"
#include "personagem/itens.c"
#include "personagem/createPerso.c"

int EMORREU, estatistica, aux;

int lutaZumbi(){
int auxiliarCritico;
    baseGuerreiro();
    baseMago();
    baseAssassino();


    cajadoLunula();
    espadaLunula();
    adagasLunula();
    coracaoLunula();

    
    mapa1_zombie();

    Guerreiro.VIDA += Guerreiro.ARMADURA;
    Mago.VIDA += Mago.ARMADURA;
    Assassino.VIDA += Assassino.ARMADURA;
    
    zombie.VIDA += zombie.ARMADURA;

    if (escolhaClasse == 1){
        if(Guerreiro.ATKSPEED >= zombie.ATKSPEED){
            printf("\nVoce atacara primero.\n");
            Sleep(500);
            while (Guerreiro.VIDA > 0 && zombie.VIDA > 0){
                if (Guerreiro.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Guerreiro.CRITICO;
                    if (auxiliarCritico == 0){
                        zombie.VIDA = zombie.VIDA - Guerreiro.ATK - 5;
                        printf("Voce deu Criticooo, + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Zombie: %d\n", zombie.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        zombie.VIDA = zombie.VIDA - Guerreiro.ATK;
                        printf("Vida do Zombie: %d\n", zombie.VIDA);
                        Sleep(500);
                    }
                }
                if (zombie.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % zombie.CRITICO;
                    if (auxiliarCritico == 0){
                        Guerreiro.VIDA = Guerreiro.VIDA - zombie.ATK - 5;
                        printf("O Zombie deu Criticooo, voce tomou + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Guerreiro: %d\n", Guerreiro.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Guerreiro.VIDA = Guerreiro.VIDA - zombie.ATK;
                        printf("Vida do Guerreiro: %d\n", Guerreiro.VIDA);
                        Sleep(500);
                    }
                }
                Sleep(500);
            }

            if (Guerreiro.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);

            }else if (zombie.VIDA <= 0){
                printf("\nVoce derrotou o zombie");
                    Sleep(3000);
                    system("cls");
                printf("\nCom a sua vitoria voce encontrou um item.\n");
                printf("O zombie dropou 2 itens\n 1- Espada Sedenta por Sangue\n 2- Poti poti\n\nEspada Sedenta e um item lendario, Ja o Poti poti e um fragmento de pocoes.\n");
                printf("\nEspada Sedenta por Sangue");
                printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: -%d\n\n",espadaSedenta.VIDA, espadaSedenta.ARMADURA, espadaSedenta.ATK, espadaSedenta.ATKSPEED, espadaSedenta.CRITICO);
                printf("Seus atributos base aumentaram\n");
                    printf("Digite qualquer coisa para continuar... :");
                    scanf("%d", &aux);
                    system("cls");
                    printf("Pronto para seguir para a proxima Fase?");

            }
        }else if (Guerreiro.ATKSPEED < zombie.ATKSPEED){
            printf("O Zombie atacara primero.\n");
            Sleep(500);
            while (Guerreiro.VIDA > 0 && zombie.VIDA > 0){
                if (zombie.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % zombie.CRITICO;
                    if (auxiliarCritico == 0){
                        Guerreiro.VIDA = Guerreiro.VIDA - zombie.ATK - 5;
                        printf("O Zombie deu Criticooo, voce tomou + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Guerreiro: %d\n", Guerreiro.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Guerreiro.VIDA = Guerreiro.VIDA - zombie.ATK;
                        printf("Vida do Guerreiro: %d\n", Guerreiro.VIDA);
                        Sleep(500);
                    }
                }if (Guerreiro.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Guerreiro.CRITICO;
                    if (auxiliarCritico == 0){
                        zombie.VIDA = zombie.VIDA - Guerreiro.ATK - 5;
                        printf("Voce deu Criticooo, + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Zombie: %d\n", zombie.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        zombie.VIDA = zombie.VIDA - Guerreiro.ATK;
                        printf("Vida do Zombie: %d\n", zombie.VIDA);
                        Sleep(500);
                    }
                }
            }

            if (Guerreiro.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);
            }else if (zombie.VIDA <= 0){
                printf("\nVoce derrotou o zombie.\n");
                    Sleep(3000);
                    system("cls");
                printf("\nCom a sua vitoria voce encontrou um item.\n");
                printf("O zombie dropou 2 itens\n 1- Espada Sedenta por Sangue\n 2- Poti poti\n\nEspada Sedenta e um item lendario, Ja o Poti poti e um fragmento de pocoes.\n");
                printf("\nEspada Sedenta por Sangue");
                printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: -%d\n\n",espadaSedenta.VIDA, espadaSedenta.ARMADURA, espadaSedenta.ATK, espadaSedenta.ATKSPEED, espadaSedenta.CRITICO);
                printf("Seus atributos base aumentaram\n");
                    printf("Digite qualquer coisa para continuar... :");
                    scanf("%d", &aux);
                    system("cls");
                    printf("Pronto para seguir para a proxima Fase?");

            }
        }
    }
    else if (escolhaClasse == 2){
        if (Mago.ATKSPEED >= zombie.ATKSPEED){
            printf("\nVoce atacara primero.\n");
            Sleep(500);
            while (Mago.VIDA > 0 && zombie.VIDA > 0){
                if (Mago.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Mago.CRITICO;
                    if (auxiliarCritico == 0){
                        zombie.VIDA = zombie.VIDA - Mago.ATK - 5;
                        printf("Voce deu Criticooo, + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Zombie: %d\n", zombie.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        zombie.VIDA = zombie.VIDA - Mago.ATK;
                        printf("Vida do Zombie: %d\n", zombie.VIDA);
                        Sleep(500);
                    }
                }
                if (zombie.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % zombie.CRITICO;
                    if (auxiliarCritico == 0){
                        Mago.VIDA = Mago.VIDA - zombie.ATK - 5;
                        printf("O Zombie deu Criticooo, voce tomou + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Mago: %d\n", Mago.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Mago.VIDA = Mago.VIDA - zombie.ATK;
                        printf("Vida do Mago: %d\n", Mago.VIDA);
                        Sleep(500);
                    }
                }
                Sleep(500);
            }

            if (Mago.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);

            }else if (zombie.VIDA <= 0){
                printf("\nVoce derrotou o zombie");
                    Sleep(3000);
                    system("cls");
                printf("\nCom a sua vitoria voce encontrou um item.\n");
                printf("O zombie dropou 2 itens\n 1- Espada Sedenta por Sangue\n 2- Poti poti\n\nEspada Sedenta e um item lendario, Ja o Poti poti e um fragmento de pocoes.\n");
                printf("\nEspada Sedenta por Sangue");
                printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: -%d\n\n",espadaSedenta.VIDA, espadaSedenta.ARMADURA, espadaSedenta.ATK, espadaSedenta.ATKSPEED, espadaSedenta.CRITICO);
                printf("Seus atributos base aumentaram\n");
                    printf("Digite qualquer coisa para continuar... :");
                    scanf("%d", &aux);
                    system("cls");
                    printf("Pronto para seguir para a proxima Fase?");

            }
        }else if (Mago.ATKSPEED < zombie.ATKSPEED){
            printf("O Zombie atacara primero.\n");
            Sleep(500);
            while (Mago.VIDA > 0 && zombie.VIDA > 0){
                if (zombie.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % zombie.CRITICO;
                    if (auxiliarCritico == 0){
                        Mago.VIDA = Mago.VIDA - zombie.ATK - 5;
                        printf("O Zombie deu Criticooo, voce tomou + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Mago: %d\n", Mago.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Mago.VIDA = Mago.VIDA - zombie.ATK;
                        printf("Vida do Mago: %d\n", Mago.VIDA);
                        Sleep(500);
                    }
                }if (Mago.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Mago.CRITICO;
                    if (auxiliarCritico == 0){
                        zombie.VIDA = zombie.VIDA - Mago.ATK - 5;
                        printf("Voce deu Criticooo, + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Zombie: %d\n", zombie.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        zombie.VIDA = zombie.VIDA - Mago.ATK;
                        printf("Vida do Zombie: %d\n", zombie.VIDA);
                        Sleep(500);
                    }
                }
            }

            if (Mago.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);
            }else if (zombie.VIDA <= 0){
                printf("\nVoce derrotou o zombie.\n");
                    Sleep(3000);
                    system("cls");
                printf("\nCom a sua vitoria voce encontrou um item.\n");
                printf("O zombie dropou 2 itens\n 1- Espada Sedenta por Sangue\n 2- Poti poti\n\nEspada Sedenta e um item lendario, Ja o Poti poti e um fragmento de pocoes.\n");
                printf("\nEspada Sedenta por Sangue");
                printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: -%d\n\n",espadaSedenta.VIDA, espadaSedenta.ARMADURA, espadaSedenta.ATK, espadaSedenta.ATKSPEED, espadaSedenta.CRITICO);
                printf("Seus atributos base aumentaram\n");
                    printf("Digite qualquer coisa para continuar... :");
                    scanf("%d", &aux);
                    system("cls");
                    printf("Pronto para seguir para a proxima Fase?");

            }
        }
    }else if (escolhaClasse == 3){
            printf("\nVoce atacara primero.\n");
            Sleep(500);
            while (Assassino.VIDA > 0 && zombie.VIDA > 0){
                if (Assassino.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Assassino.CRITICO;
                    if (auxiliarCritico == 0){
                        zombie.VIDA = zombie.VIDA - Assassino.ATK - 5;
                        printf("Voce deu Criticooo, + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Zombie: %d\n", zombie.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        zombie.VIDA = zombie.VIDA - Assassino.ATK;
                        printf("Vida do Zombie: %d\n", zombie.VIDA);
                        Sleep(500);
                    }
                }
                if (zombie.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % zombie.CRITICO;
                    if (auxiliarCritico == 0){
                        Assassino.VIDA = Assassino.VIDA - zombie.ATK - 5;
                        printf("O Zombie deu Criticooo, voce tomou + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Assassino: %d\n", Assassino.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Assassino.VIDA = Assassino.VIDA - zombie.ATK;
                        printf("Vida do Assassino: %d\n", Assassino.VIDA);
                        Sleep(500);
                    }
                }
                Sleep(500);
            }

            if (Assassino.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);

            }else if (zombie.VIDA <= 0){
                printf("\nVoce derrotou o zombie");
                    Sleep(3000);
                    system("cls");
                printf("\nCom a sua vitoria voce encontrou um item.\n");
                printf("O zombie dropou 2 itens\n 1- Espada Sedenta por Sangue\n 2- Poti poti\n\nEspada Sedenta e um item lendario, Ja o Poti poti e um fragmento de pocoes.\n");
                printf("\nEspada Sedenta por Sangue");
                printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: -%d\n\n",espadaSedenta.VIDA, espadaSedenta.ARMADURA, espadaSedenta.ATK, espadaSedenta.ATKSPEED, espadaSedenta.CRITICO);
                printf("Seus atributos base aumentaram\n");
                
                    printf("Digite qualquer coisa para continuar... :");
                    scanf("%d", &aux);
                    system("cls");
                    printf("Pronto para seguir para a proxima Fase?");

            }
        }else if (Assassino.ATKSPEED < zombie.ATKSPEED){
            printf("O Zombie atacara primero.\n");
            Sleep(500);
            while (Assassino.VIDA > 0 && zombie.VIDA > 0){
                if (zombie.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % zombie.CRITICO;
                    if (auxiliarCritico == 0){
                        Assassino.VIDA = Assassino.VIDA - zombie.ATK - 5;
                        printf("O Zombie deu Criticooo, voce tomou + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Assassino: %d\n", Assassino.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Assassino.VIDA = Assassino.VIDA - zombie.ATK;
                        printf("Vida do Assassino: %d\n", Assassino.VIDA);
                        Sleep(500);
                    }
                }if (Assassino.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Assassino.CRITICO;
                    if (auxiliarCritico == 0){
                        zombie.VIDA = zombie.VIDA - Assassino.ATK - 5;
                        printf("Voce deu Criticooo, + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Zombie: %d\n", zombie.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        zombie.VIDA = zombie.VIDA - Assassino.ATK;
                        printf("Vida do Zombie: %d\n", zombie.VIDA);
                        Sleep(500);
                    }
                }
            }

            if (Assassino.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);
            }else if (zombie.VIDA <= 0){
                printf("\nVoce derrotou o zombie.\n");
                    Sleep(3000);
                    system("cls");
                printf("\nCom a sua vitoria voce encontrou um item.\n");
                printf("O zombie dropou 2 itens\n 1- Espada Sedenta por Sangue\n 2- Poti poti\n\nEspada Sedenta e um item lendario, Ja o Poti poti e um fragmento de pocoes.\n");
                printf("\nEspada Sedenta por Sangue");
                printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: -%d\n\n",espadaSedenta.VIDA, espadaSedenta.ARMADURA, espadaSedenta.ATK, espadaSedenta.ATKSPEED, espadaSedenta.CRITICO);
                printf("Seus atributos base aumentaram\n");
                
                    printf("Digite qualquer coisa para continuar... :");
                    scanf("%d", &aux);
                    system("cls");
                    printf("Pronto para seguir para a proxima Fase?");

            }
    }
}



int lutaVampirico(){
int auxiliarCritico;
    baseGuerreiro();
    baseMago();
    baseAssassino();


    cajadoLunula();
    espadaLunula();
    adagasLunula();
    coracaoLunula();

    
    mapa1_Vampirico();

    Guerreiro.VIDA += Guerreiro.ARMADURA + espadaSedenta.VIDA + espadaSedenta.ARMADURA;
    Guerreiro.ATK += espadaSedenta.ATK;
    Guerreiro.ATKSPEED += espadaSedenta.ATKSPEED;
    Guerreiro.CRITICO -= espadaSedenta.CRITICO;


    Mago.VIDA += Mago.ARMADURA + espadaSedenta.VIDA + espadaSedenta.ARMADURA;
    Mago.ATK += espadaSedenta.ATK;
    Mago.ATKSPEED += espadaSedenta.ATKSPEED;
    Mago.CRITICO -= espadaSedenta.CRITICO;

    
    Assassino.VIDA += Assassino.ARMADURA + espadaSedenta.VIDA + espadaSedenta.ARMADURA;
    Assassino.ATK += espadaSedenta.ATK;
    Assassino.ATKSPEED += espadaSedenta.ATKSPEED;
    Assassino.CRITICO -= espadaSedenta.CRITICO;
    

    Vampirico.VIDA += Vampirico.ARMADURA;

    if (escolhaClasse == 1){
        if(Guerreiro.ATKSPEED >= Vampirico.ATKSPEED){
            printf("\nVoce atacara primero.\n");
            Sleep(500);
            while (Guerreiro.VIDA > 0 && Vampirico.VIDA > 0){
                if (Guerreiro.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Guerreiro.CRITICO;
                    if (auxiliarCritico == 0){
                        Vampirico.VIDA = Vampirico.VIDA - Guerreiro.ATK - 5;
                        printf("Voce deu Criticooo, + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Vampirico: %d\n", Vampirico.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Vampirico.VIDA = Vampirico.VIDA - Guerreiro.ATK;
                        printf("Vida do Vampirico: %d\n", Vampirico.VIDA);
                        Sleep(500);
                    }
                }
                if (Vampirico.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Vampirico.CRITICO;
                    if (auxiliarCritico == 0){
                        Guerreiro.VIDA = Guerreiro.VIDA - Vampirico.ATK - 5;
                        printf("O Vampirico deu Criticooo, voce tomou + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Guerreiro: %d\n", Guerreiro.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Guerreiro.VIDA = Guerreiro.VIDA - Vampirico.ATK;
                        printf("Vida do Guerreiro: %d\n", Guerreiro.VIDA);
                        Sleep(500);
                    }
                }
                Sleep(500);
            }

            if (Guerreiro.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);

            }else if (Vampirico.VIDA <= 0){
                printf("\nVoce derrotou o Vampirico");
                    Sleep(3000);
                    system("cls");
                printf("\nCom a sua vitoria voce encontrou um item.\n");
                printf("O Vampirico dropou 2 itens\n 1- Cajado de Bloody Mary\n 2- Perna de pau\nBloody Mary e um item lendario, Ja Perna de pau e um fragmento de pocoes.\n");
                printf("\nCajado de Bloody Mary");
                printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: -%d\n\n",cajadoDeBloody.VIDA, cajadoDeBloody.ARMADURA, cajadoDeBloody.ATK, cajadoDeBloody.ATKSPEED, cajadoDeBloody.CRITICO);
                printf("Seus atributos base aumentaram\n");
                    printf("Digite qualquer coisa para continuar... :");
                    scanf("%d", &aux);
                    system("cls");
                    printf("Pronto para seguir para a proxima Fase?");

            }
        }else if (Guerreiro.ATKSPEED < Vampirico.ATKSPEED){
            printf("O Vampirico atacara primero.\n");
            Sleep(500);
            while (Guerreiro.VIDA > 0 && Vampirico.VIDA > 0){
                if (Vampirico.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Vampirico.CRITICO;
                    if (auxiliarCritico == 0){
                        Guerreiro.VIDA = Guerreiro.VIDA - Vampirico.ATK - 5;
                        printf("O Vampirico deu Criticooo, voce tomou + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Guerreiro: %d\n", Guerreiro.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Guerreiro.VIDA = Guerreiro.VIDA - Vampirico.ATK;
                        printf("Vida do Guerreiro: %d\n", Guerreiro.VIDA);
                        Sleep(500);
                    }
                }if (Guerreiro.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Guerreiro.CRITICO;
                    if (auxiliarCritico == 0){
                        Vampirico.VIDA = Vampirico.VIDA - Guerreiro.ATK - 5;
                        printf("Voce deu Criticooo, + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Vampirico: %d\n", Vampirico.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Vampirico.VIDA = Vampirico.VIDA - Guerreiro.ATK;
                        printf("Vida do Vampirico: %d\n", Vampirico.VIDA);
                        Sleep(500);
                    }
                }
            }

            if (Guerreiro.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);
            }else if (Vampirico.VIDA <= 0){
                printf("\nVoce derrotou o Vampirico");
                    Sleep(3000);
                    system("cls");
                printf("\nCom a sua vitoria voce encontrou um item.\n");
                printf("O Vampirico dropou 2 itens\n 1- Cajado de Bloody Mary\n 2- Perna de pau\nBloody Mary e um item lendario, Ja Perna de pau e um fragmento de pocoes.\n");
                printf("\nCajado de Bloody Mary");
                printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: -%d\n\n",cajadoDeBloody.VIDA, cajadoDeBloody.ARMADURA, cajadoDeBloody.ATK, cajadoDeBloody.ATKSPEED, cajadoDeBloody.CRITICO);
                printf("Seus atributos base aumentaram\n");
                    printf("Digite qualquer coisa para continuar... :");
                    scanf("%d", &aux);
                    system("cls");
                    printf("Pronto para seguir para a proxima Fase?");

            }
        }
    }
    else if (escolhaClasse == 2){
        if (Mago.ATKSPEED >= Vampirico.ATKSPEED){
            printf("\nVoce atacara primero.\n");
            Sleep(500);
            while (Mago.VIDA > 0 && Vampirico.VIDA > 0){
                if (Mago.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Mago.CRITICO;
                    if (auxiliarCritico == 0){
                        Vampirico.VIDA = Vampirico.VIDA - Mago.ATK - 5;
                        printf("Voce deu Criticooo, + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Vampirico: %d\n", Vampirico.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Vampirico.VIDA = Vampirico.VIDA - Mago.ATK;
                        printf("Vida do Vampirico: %d\n", Vampirico.VIDA);
                        Sleep(500);
                    }
                }
                if (Vampirico.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Vampirico.CRITICO;
                    if (auxiliarCritico == 0){
                        Mago.VIDA = Mago.VIDA - Vampirico.ATK - 5;
                        printf("O Vampirico deu Criticooo, voce tomou + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Mago: %d\n", Mago.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Mago.VIDA = Mago.VIDA - Vampirico.ATK;
                        printf("Vida do Mago: %d\n", Mago.VIDA);
                        Sleep(500);
                    }
                }
                Sleep(500);
            }

            if (Mago.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);

            }else if (Vampirico.VIDA <= 0){
                printf("\nVoce derrotou o Vampirico");
                    Sleep(3000);
                    system("cls");
                printf("\nCom a sua vitoria voce encontrou um item.\n");
                printf("O Vampirico dropou 2 itens\n 1- Cajado de Bloody Mary\n 2- Perna de pau\nBloody Mary e um item lendario, Ja Perna de pau e um fragmento de pocoes.\n");
                printf("\nCajado de Bloody Mary");
                printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: -%d\n\n",cajadoDeBloody.VIDA, cajadoDeBloody.ARMADURA, cajadoDeBloody.ATK, cajadoDeBloody.ATKSPEED, cajadoDeBloody.CRITICO);                
                printf("Seus atributos base aumentaram\n");
                printf("Digite qualquer coisa para continuar... :");
                scanf("%d", &aux);
                system("cls");
                printf("Pronto para seguir para a proxima Fase?");


            }
        }else if (Mago.ATKSPEED < Vampirico.ATKSPEED){
            printf("O Vampirico atacara primero.\n");
            Sleep(500);
            while (Mago.VIDA > 0 && Vampirico.VIDA > 0){
                if (Vampirico.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Vampirico.CRITICO;
                    if (auxiliarCritico == 0){
                        Mago.VIDA = Mago.VIDA - Vampirico.ATK - 5;
                        printf("O Vampirico deu Criticooo, voce tomou + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Mago: %d\n", Mago.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Mago.VIDA = Mago.VIDA - Vampirico.ATK;
                        printf("Vida do Mago: %d\n", Mago.VIDA);
                        Sleep(500);
                    }
                }if (Mago.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Mago.CRITICO;
                    if (auxiliarCritico == 0){
                        Vampirico.VIDA = Vampirico.VIDA - Mago.ATK - 5;
                        printf("Voce deu Criticooo, + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Vampirico: %d\n", Vampirico.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Vampirico.VIDA = Vampirico.VIDA - Mago.ATK;
                        printf("Vida do Vampirico: %d\n", Vampirico.VIDA);
                        Sleep(500);
                    }
                }
            }

            if (Mago.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);
            }else if (Vampirico.VIDA <= 0){
                printf("\nVoce derrotou o Vampirico");
                    Sleep(3000);
                    system("cls");
                printf("\nCom a sua vitoria voce encontrou um item.\n");
                printf("O Vampirico dropou 2 itens\n 1- Cajado de Bloody Mary\n 2- Perna de pau\nBloody Mary e um item lendario, Ja Perna de pau e um fragmento de pocoes.\n");
                printf("\nCajado de Bloody Mary");
                printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: -%d\n\n",cajadoDeBloody.VIDA, cajadoDeBloody.ARMADURA, cajadoDeBloody.ATK, cajadoDeBloody.ATKSPEED, cajadoDeBloody.CRITICO);                
                printf("Seus atributos base aumentaram\n");
                printf("Digite qualquer coisa para continuar... :");
                scanf("%d", &aux);
                system("cls");
                printf("Pronto para seguir para a proxima Fase?");


            }
        }
    }else if (escolhaClasse == 3){
            printf("\nVoce atacara primero.\n");
            Sleep(500);
            while (Assassino.VIDA > 0 && Vampirico.VIDA > 0){
                if (Assassino.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Assassino.CRITICO;
                    if (auxiliarCritico == 0){
                        Vampirico.VIDA = Vampirico.VIDA - Assassino.ATK - 5;
                        printf("Voce deu Criticooo, + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Vampirico: %d\n", Vampirico.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Vampirico.VIDA = Vampirico.VIDA - Assassino.ATK;
                        printf("Vida do Vampirico: %d\n", Vampirico.VIDA);
                        Sleep(500);
                    }
                }
                if (Vampirico.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Vampirico.CRITICO;
                    if (auxiliarCritico == 0){
                        Assassino.VIDA = Assassino.VIDA - Vampirico.ATK - 5;
                        printf("O Vampirico deu Criticooo, voce tomou + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Assassino: %d\n", Assassino.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Assassino.VIDA = Assassino.VIDA - Vampirico.ATK;
                        printf("Vida do Assassino: %d\n", Assassino.VIDA);
                        Sleep(500);
                    }
                }
                Sleep(500);
            }

            if (Assassino.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);

            }else if (Vampirico.VIDA <= 0){
                printf("\nVoce derrotou o Vampirico");
                    Sleep(3000);
                    system("cls");
                printf("\nCom a sua vitoria voce encontrou um item.\n");
                printf("O Vampirico dropou 2 itens\n 1- Cajado de Bloody Mary\n 2- Perna de pau\nBloody Mary e um item lendario, Ja Perna de pau e um fragmento de pocoes.\n");
                printf("\nCajado de Bloody Mary");
                printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: -%d\n\n",cajadoDeBloody.VIDA, cajadoDeBloody.ARMADURA, cajadoDeBloody.ATK, cajadoDeBloody.ATKSPEED, cajadoDeBloody.CRITICO);
                printf("Seus atributos base aumentaram\n");                
                printf("Digite qualquer coisa para continuar... :");
                scanf("%d", &aux);
                system("cls");
                printf("Pronto para seguir para a proxima Fase?");


            }
        }else if (Assassino.ATKSPEED < Vampirico.ATKSPEED){
            printf("O Vampirico atacara primero.\n");
            Sleep(500);
            while (Assassino.VIDA > 0 && Vampirico.VIDA > 0){
                if (Vampirico.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Vampirico.CRITICO;
                    if (auxiliarCritico == 0){
                        Assassino.VIDA = Assassino.VIDA - Vampirico.ATK - 5;
                        printf("O Vampirico deu Criticooo, voce tomou + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Assassino: %d\n", Assassino.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Assassino.VIDA = Assassino.VIDA - Vampirico.ATK;
                        printf("Vida do Assassino: %d\n", Assassino.VIDA);
                        Sleep(500);
                    }
                }if (Assassino.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Assassino.CRITICO;
                    if (auxiliarCritico == 0){
                        Vampirico.VIDA = Vampirico.VIDA - Assassino.ATK - 5;
                        printf("Voce deu Criticooo, + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Vampirico: %d\n", Vampirico.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Vampirico.VIDA = Vampirico.VIDA - Assassino.ATK;
                        printf("Vida do Vampirico: %d\n", Vampirico.VIDA);
                        Sleep(500);
                    }
                }
            }

            if (Assassino.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);
            }else if (Vampirico.VIDA <= 0){
                printf("\nVoce derrotou o Vampirico");
                    Sleep(3000);
                    system("cls");
                printf("\nCom a sua vitoria voce encontrou um item.\n");
                printf("O Vampirico dropou 2 itens\n 1- Cajado de Bloody Mary\n 2- Perna de pau\nBloody Mary e um item lendario, Ja Perna de pau e um fragmento de pocoes.\n");
                printf("\nCajado de Bloody Mary");
                printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: -%d\n\n",cajadoDeBloody.VIDA, cajadoDeBloody.ARMADURA, cajadoDeBloody.ATK, cajadoDeBloody.ATKSPEED, cajadoDeBloody.CRITICO);
                printf("Seus atributos base aumentaram\n");                
                printf("Digite qualquer coisa para continuar... :");
                scanf("%d", &aux);
                system("cls");
                printf("Pronto para seguir para a proxima Fase?");


            }
    }
}



int lutaBruxaDeSangue(){
int auxiliarCritico;
    baseGuerreiro();
    baseMago();
    baseAssassino();


    cajadoLunula();
    espadaLunula();
    adagasLunula();
    coracaoLunula();

    
    mapa1_bruxaDeSangue();

    Guerreiro.VIDA += Guerreiro.ARMADURA + espadaSedenta.VIDA + espadaSedenta.ARMADURA + cajadoDeBloody.VIDA + cajadoDeBloody.ARMADURA;
    Guerreiro.ATK += espadaSedenta.ATK + cajadoDeBloody.ATK;
    Guerreiro.ATKSPEED += espadaSedenta.ATKSPEED + cajadoDeBloody.ATKSPEED;
    Guerreiro.CRITICO -= espadaSedenta.CRITICO - cajadoDeBloody.CRITICO;


    Mago.VIDA += Mago.ARMADURA + espadaSedenta.VIDA + espadaSedenta.ARMADURA  + cajadoDeBloody.VIDA + cajadoDeBloody.ARMADURA;
    Mago.ATK += espadaSedenta.ATK + cajadoDeBloody.ATK;
    Mago.ATKSPEED += espadaSedenta.ATKSPEED + cajadoDeBloody.ATKSPEED;
    Mago.CRITICO -= espadaSedenta.CRITICO - cajadoDeBloody.CRITICO;

    
    Assassino.VIDA += Assassino.ARMADURA + espadaSedenta.VIDA + espadaSedenta.ARMADURA  + cajadoDeBloody.VIDA + cajadoDeBloody.ARMADURA;
    Assassino.ATK += espadaSedenta.ATK + cajadoDeBloody.ATK;
    Assassino.ATKSPEED += espadaSedenta.ATKSPEED + cajadoDeBloody.ATKSPEED;
    Assassino.CRITICO -= espadaSedenta.CRITICO - cajadoDeBloody.CRITICO;
    
    bruxaDeSangue.VIDA += bruxaDeSangue.ARMADURA;

    if (escolhaClasse == 1){
        if(Guerreiro.ATKSPEED >= bruxaDeSangue.ATKSPEED){
            printf("\nVoce atacara primero.\n");
            Sleep(500);
            while (Guerreiro.VIDA > 0 && bruxaDeSangue.VIDA > 0){
                if (Guerreiro.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Guerreiro.CRITICO;
                    if (auxiliarCritico == 0){
                        bruxaDeSangue.VIDA = bruxaDeSangue.VIDA - Guerreiro.ATK - 5;
                        printf("Voce deu Criticooo, + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida da Bruxa De Sangue: %d\n", bruxaDeSangue.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        bruxaDeSangue.VIDA = bruxaDeSangue.VIDA - Guerreiro.ATK;
                        printf("Vida da Bruxa De Sangue: %d\n", bruxaDeSangue.VIDA);
                        Sleep(500);
                    }
                }
                if (bruxaDeSangue.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % bruxaDeSangue.CRITICO;
                    if (auxiliarCritico == 0){
                        Guerreiro.VIDA = Guerreiro.VIDA - bruxaDeSangue.ATK - 5;
                        printf("A Bruxa de Sangue deu Criticooo, voce tomou + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Guerreiro: %d\n", Guerreiro.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Guerreiro.VIDA = Guerreiro.VIDA - bruxaDeSangue.ATK;
                        printf("Vida do Guerreiro: %d\n", Guerreiro.VIDA);
                        Sleep(500);
                    }
                }
                Sleep(500);
            }

            if (Guerreiro.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);

            }else if (bruxaDeSangue.VIDA <= 0){
                printf("\nVoce derrotou a Bruxa De Sangue");
                    Sleep(3000);
                    system("cls");
                printf("\nCom a sua vitoria voce encontrou um item.\n");
                printf("A Bruxa de Sangue dropou 2 itens\n 1- Adagas de Dalia\n 2- Olho de Vidro\nAdagas de Dalia e um item lendario, Ja o Olho de Vidro e um fragmento de pocoes.\n");
                printf("\nAdagas de Dalia");
                printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: -%d\n\n",adagasDeDalia.VIDA, adagasDeDalia.ARMADURA, adagasDeDalia.ATK, adagasDeDalia.ATKSPEED, adagasDeDalia.CRITICO);                
                printf("Seus atributos base aumentaram\n");
                printf("Digite qualquer coisa para continuar... :");
                scanf("%d", &aux);
                system("cls");
                printf("Pronto para seguir para a proxima Fase?");


            }
        }else if (Guerreiro.ATKSPEED < bruxaDeSangue.ATKSPEED){
            printf("A Bruxa De Sangue atacara primero.\n");
            Sleep(500);
            while (Guerreiro.VIDA > 0 && bruxaDeSangue.VIDA > 0){
                if (bruxaDeSangue.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % bruxaDeSangue.CRITICO;
                    if (auxiliarCritico == 0){
                        Guerreiro.VIDA = Guerreiro.VIDA - bruxaDeSangue.ATK - 5;
                        printf("A Bruxa De Sangue deu Criticooo, voce tomou + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Guerreiro: %d\n", Guerreiro.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Guerreiro.VIDA = Guerreiro.VIDA - bruxaDeSangue.ATK;
                        printf("Vida do Guerreiro: %d\n", Guerreiro.VIDA);
                        Sleep(500);
                    }
                }if (Guerreiro.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Guerreiro.CRITICO;
                    if (auxiliarCritico == 0){
                        bruxaDeSangue.VIDA = bruxaDeSangue.VIDA - Guerreiro.ATK - 5;
                        printf("Voce deu Criticooo, + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida da Bruxa De Sangue: %d\n", bruxaDeSangue.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        bruxaDeSangue.VIDA = bruxaDeSangue.VIDA - Guerreiro.ATK;
                        printf("Vida da Bruxa De Sangue: %d\n", bruxaDeSangue.VIDA);
                        Sleep(500);
                    }
                }
            }

            if (Guerreiro.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);
            }else if (bruxaDeSangue.VIDA <= 0){
                printf("\nVoce derrotou a Bruxa De Sangue");
                    Sleep(3000);
                    system("cls");
                printf("\nCom a sua vitoria voce encontrou um item.\n");
                printf("A Bruxa de Sangue dropou 2 itens\n 1- Adagas de Dalia\n 2- Olho de Vidro\nAdagas de Dalia e um item lendario, Ja o Olho de Vidro e um fragmento de pocoes.\n");
                printf("\nAdagas de Dalia");
                printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: -%d\n\n",adagasDeDalia.VIDA, adagasDeDalia.ARMADURA, adagasDeDalia.ATK, adagasDeDalia.ATKSPEED, adagasDeDalia.CRITICO);                
                printf("Seus atributos base aumentaram\n");
                printf("Digite qualquer coisa para continuar... :");
                scanf("%d", &aux);
                system("cls");
                printf("Pronto para seguir para a proxima Fase?");


            }
        }
    }
    else if (escolhaClasse == 2){
        if (Mago.ATKSPEED >= bruxaDeSangue.ATKSPEED){
            printf("\nVoce atacara primero.\n");
            Sleep(500);
            while (Mago.VIDA > 0 && bruxaDeSangue.VIDA > 0){
                if (Mago.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Mago.CRITICO;
                    if (auxiliarCritico == 0){
                        bruxaDeSangue.VIDA = bruxaDeSangue.VIDA - Mago.ATK - 5;
                        printf("Voce deu Criticooo, + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida da Bruxa De Sangue: %d\n", bruxaDeSangue.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        bruxaDeSangue.VIDA = bruxaDeSangue.VIDA - Mago.ATK;
                        printf("Vida da Bruxa De Sangue: %d\n", bruxaDeSangue.VIDA);
                        Sleep(500);
                    }
                }
                if (bruxaDeSangue.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % bruxaDeSangue.CRITICO;
                    if (auxiliarCritico == 0){
                        Mago.VIDA = Mago.VIDA - bruxaDeSangue.ATK - 5;
                        printf("A Bruxa De Sangue deu Criticooo, voce tomou + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Mago: %d\n", Mago.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Mago.VIDA = Mago.VIDA - bruxaDeSangue.ATK;
                        printf("Vida do Mago: %d\n", Mago.VIDA);
                        Sleep(500);
                    }
                }
                Sleep(500);
            }

            if (Mago.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);

            }else if (bruxaDeSangue.VIDA <= 0){
                printf("\nVoce derrotou a Bruxa De Sangue");
                    Sleep(3000);
                    system("cls");
                printf("\nCom a sua vitoria voce encontrou um item.\n");
                printf("A Bruxa de Sangue dropou 2 itens\n 1- Adagas de Dalia\n 2- Olho de Vidro\nAdagas de Dalia e um item lendario, Ja o Olho de Vidro e um fragmento de pocoes.\n");
                printf("\nAdagas de Dalia");
                printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: -%d\n\n",adagasDeDalia.VIDA, adagasDeDalia.ARMADURA, adagasDeDalia.ATK, adagasDeDalia.ATKSPEED, adagasDeDalia.CRITICO);                
                printf("Seus atributos base aumentaram\n");
                printf("Digite qualquer coisa para continuar... :");
                scanf("%d", &aux);
                system("cls");
                printf("Pronto para seguir para a proxima Fase?");


            }
        }else if (Mago.ATKSPEED < bruxaDeSangue.ATKSPEED){
            printf("A Bruxa De Sangue atacara primero.\n");
            Sleep(500);
            while (Mago.VIDA > 0 && bruxaDeSangue.VIDA > 0){
                if (bruxaDeSangue.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % bruxaDeSangue.CRITICO;
                    if (auxiliarCritico == 0){
                        Mago.VIDA = Mago.VIDA - bruxaDeSangue.ATK - 5;
                        printf("A bruxa De Sangue deu Criticooo, voce tomou + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Mago: %d\n", Mago.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Mago.VIDA = Mago.VIDA - bruxaDeSangue.ATK;
                        printf("Vida do Mago: %d\n", Mago.VIDA);
                        Sleep(500);
                    }
                }if (Mago.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Mago.CRITICO;
                    if (auxiliarCritico == 0){
                        bruxaDeSangue.VIDA = bruxaDeSangue.VIDA - Mago.ATK - 5;
                        printf("Voce deu Criticooo, + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida da Bruxa De Sangue: %d\n", bruxaDeSangue.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        bruxaDeSangue.VIDA = bruxaDeSangue.VIDA - Mago.ATK;
                        printf("Vida da Bruxa De Sangue: %d\n", bruxaDeSangue.VIDA);
                        Sleep(500);
                    }
                }
            }

            if (Mago.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);
            }else if (bruxaDeSangue.VIDA <= 0){
                printf("\nVoce derrotou a Bruxa De Sangue");
                    Sleep(3000);
                    system("cls");
                printf("\nCom a sua vitoria voce encontrou um item.\n");
                printf("A Bruxa de Sangue dropou 2 itens\n 1- Adagas de Dalia\n 2- Olho de Vidro\nAdagas de Dalia e um item lendario, Ja o Olho de Vidro e um fragmento de pocoes.\n");
                printf("\nAdagas de Dalia");
                printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: -%d\n\n",adagasDeDalia.VIDA, adagasDeDalia.ARMADURA, adagasDeDalia.ATK, adagasDeDalia.ATKSPEED, adagasDeDalia.CRITICO);                
                printf("Seus atributos base aumentaram\n");
                printf("Digite qualquer coisa para continuar... :");
                scanf("%d", &aux);
                system("cls");
                printf("Pronto para seguir para a proxima Fase?");


            }
        }
    }else if (escolhaClasse == 3){
            printf("\nVoce atacara primero.\n");
            Sleep(500);
            while (Assassino.VIDA > 0 && bruxaDeSangue.VIDA > 0){
                if (Assassino.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Assassino.CRITICO;
                    if (auxiliarCritico == 0){
                        bruxaDeSangue.VIDA = bruxaDeSangue.VIDA - Assassino.ATK - 5;
                        printf("Voce deu Criticooo, + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida da Bruxa De Sangue: %d\n", bruxaDeSangue.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        bruxaDeSangue.VIDA = bruxaDeSangue.VIDA - Assassino.ATK;
                        printf("Vida da Bruxa De Sangue: %d\n", bruxaDeSangue.VIDA);
                        Sleep(500);
                    }
                }
                if (bruxaDeSangue.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % bruxaDeSangue.CRITICO;
                    if (auxiliarCritico == 0){
                        Assassino.VIDA = Assassino.VIDA - bruxaDeSangue.ATK - 5;
                        printf("A Bruxa De Sangue deu Criticooo, voce tomou + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Assassino: %d\n", Assassino.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Assassino.VIDA = Assassino.VIDA - bruxaDeSangue.ATK;
                        printf("Vida do Assassino: %d\n", Assassino.VIDA);
                        Sleep(500);
                    }
                }
                Sleep(500);
            }

            if (Assassino.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);

            }else if (bruxaDeSangue.VIDA <= 0){
                printf("\nVoce derrotou a Bruxa De Sangue");
                    Sleep(3000);
                    system("cls");
                printf("\nCom a sua vitoria voce encontrou um item.\n");
                printf("A Bruxa de Sangue dropou 2 itens\n 1- Adagas de Dalia\n 2- Olho de Vidro\nAdagas de Dalia e um item lendario, Ja o Olho de Vidro e um fragmento de pocoes.\n");
                printf("\nAdagas de Dalia");
                printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: -%d\n\n",adagasDeDalia.VIDA, adagasDeDalia.ARMADURA, adagasDeDalia.ATK, adagasDeDalia.ATKSPEED, adagasDeDalia.CRITICO);
                printf("Seus atributos base aumentaram\n");                
                printf("Digite qualquer coisa para continuar... :");
                scanf("%d", &aux);
                system("cls");
                printf("Pronto para seguir para a proxima Fase?");


            }
        }else if (Assassino.ATKSPEED < bruxaDeSangue.ATKSPEED){
            printf("a Bruxa De Sangue atacara primero.\n");
            Sleep(500);
            while (Assassino.VIDA > 0 && bruxaDeSangue.VIDA > 0){
                if (bruxaDeSangue.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % bruxaDeSangue.CRITICO;
                    if (auxiliarCritico == 0){
                        Assassino.VIDA = Assassino.VIDA - bruxaDeSangue.ATK - 5;
                        printf("A Bruxa De Sangue deu Criticooo, voce tomou + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Assassino: %d\n", Assassino.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Assassino.VIDA = Assassino.VIDA - bruxaDeSangue.ATK;
                        printf("Vida do Assassino: %d\n", Assassino.VIDA);
                        Sleep(500);
                    }
                }if (Assassino.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Assassino.CRITICO;
                    if (auxiliarCritico == 0){
                        bruxaDeSangue.VIDA = bruxaDeSangue.VIDA - Assassino.ATK - 5;
                        printf("Voce deu Criticooo, + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida da Bruxa De Sangue: %d\n", bruxaDeSangue.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        bruxaDeSangue.VIDA = bruxaDeSangue.VIDA - Assassino.ATK;
                        printf("Vida da Bruxa De Sangue: %d\n", bruxaDeSangue.VIDA);
                        Sleep(500);
                    }
                }
            }

            if (Assassino.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);
            }else if (bruxaDeSangue.VIDA <= 0){
                printf("\nVoce derrotou a Bruxa De Sangue");
                    Sleep(3000);
                    system("cls");
                printf("\nCom a sua vitoria voce encontrou um item.\n");
                printf("A Bruxa de Sangue dropou 2 itens\n 1- Adagas de Dalia\n 2- Olho de Vidro\nAdagas de Dalia e um item lendario, Ja o Olho de Vidro e um fragmento de pocoes.\n");
                printf("\nAdagas de Dalia");
                printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: -%d\n\n",adagasDeDalia.VIDA, adagasDeDalia.ARMADURA, adagasDeDalia.ATK, adagasDeDalia.ATKSPEED, adagasDeDalia.CRITICO);
                printf("Seus atributos base aumentaram\n");                
                printf("Digite qualquer coisa para continuar... :");
                scanf("%d", &aux);
                system("cls");
                printf("Pronto para seguir para a proxima Fase?");


            }
    }
}



int lutaChupaCabra(){


int auxiliarCritico;
    baseGuerreiro();
    baseMago();
    baseAssassino();


    cajadoLunula();
    espadaLunula();
    adagasLunula();
    coracaoLunula();

    
    mapa1_chupaCabra();

    Guerreiro.VIDA += Guerreiro.ARMADURA + espadaSedenta.VIDA + espadaSedenta.ARMADURA + cajadoDeBloody.VIDA + cajadoDeBloody.ARMADURA + adagasDeDalia.VIDA + adagasDeDalia.ARMADURA;
    Guerreiro.ATK += espadaSedenta.ATK + cajadoDeBloody.ATK + adagasDeDalia.ATK;
    Guerreiro.ATKSPEED += espadaSedenta.ATKSPEED + cajadoDeBloody.ATKSPEED + adagasDeDalia.ATKSPEED;
    Guerreiro.CRITICO -= espadaSedenta.CRITICO - cajadoDeBloody.CRITICO - adagasDeDalia.CRITICO;


    Mago.VIDA += Mago.ARMADURA + espadaSedenta.VIDA + espadaSedenta.ARMADURA  + cajadoDeBloody.VIDA + cajadoDeBloody.ARMADURA + adagasDeDalia.VIDA + adagasDeDalia.ARMADURA;
    Mago.ATK += espadaSedenta.ATK + cajadoDeBloody.ATK + adagasDeDalia.ATK;
    Mago.ATKSPEED += espadaSedenta.ATKSPEED + cajadoDeBloody.ATKSPEED + adagasDeDalia.ATKSPEED;
    Mago.CRITICO -= espadaSedenta.CRITICO - cajadoDeBloody.CRITICO - adagasDeDalia.CRITICO;

    
    Assassino.VIDA += Assassino.ARMADURA + espadaSedenta.VIDA + espadaSedenta.ARMADURA  + cajadoDeBloody.VIDA + cajadoDeBloody.ARMADURA + adagasDeDalia.VIDA + adagasDeDalia.ARMADURA;
    Assassino.ATK += espadaSedenta.ATK + cajadoDeBloody.ATK + adagasDeDalia.ATK;
    Assassino.ATKSPEED += espadaSedenta.ATKSPEED + cajadoDeBloody.ATKSPEED + adagasDeDalia.ATKSPEED;
    Assassino.CRITICO -= espadaSedenta.CRITICO - cajadoDeBloody.CRITICO - adagasDeDalia.CRITICO;
    
    chupaCabra.VIDA += chupaCabra.ARMADURA;

    if (escolhaClasse == 1){
        if(Guerreiro.ATKSPEED >= chupaCabra.ATKSPEED){
            printf("\nVoce atacara primero.\n");
            Sleep(500);
            while (Guerreiro.VIDA > 0 && chupaCabra.VIDA > 0){
                if (Guerreiro.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Guerreiro.CRITICO;
                    if (auxiliarCritico == 0){
                        chupaCabra.VIDA = chupaCabra.VIDA - Guerreiro.ATK - 5;
                        printf("Voce deu Criticooo, + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Chupa Cabra: %d\n", chupaCabra.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        chupaCabra.VIDA = chupaCabra.VIDA - Guerreiro.ATK;
                        printf("Vida do Chupa Cabra: %d\n", chupaCabra.VIDA);
                        Sleep(500);
                    }
                }
                if (chupaCabra.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % chupaCabra.CRITICO;
                    if (auxiliarCritico == 0){
                        Guerreiro.VIDA = Guerreiro.VIDA - chupaCabra.ATK - 5;
                        printf("O Chupa Cabra deu Criticooo, voce tomou + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Guerreiro: %d\n", Guerreiro.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Guerreiro.VIDA = Guerreiro.VIDA - chupaCabra.ATK;
                        printf("Vida do Guerreiro: %d\n", Guerreiro.VIDA);
                        Sleep(500);
                    }
                }
                Sleep(500);
            }

            if (Guerreiro.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);

            }else if (chupaCabra.VIDA <= 0){
                printf("\nVoce derrotou O Chupa Cabra");
                    Sleep(3000);
                    system("cls");
                printf("\nCom a sua vitoria voce encontrou 2 itens.\n");
                printf("O Chupa Cabra dropou 2 itens\n 1- Coracao Flamejante\n 2- Nariz de Pica-Pau\nNariz e um item lendario, Ja Nariz de Pica-Pau e um fragmento de pocoes.\n");
                printf("\nCoracao Flamejante");
                printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: -%d\n\n",coracaoFlamejante.VIDA, coracaoFlamejante.ARMADURA, coracaoFlamejante.ATK, coracaoFlamejante.ATKSPEED, coracaoFlamejante.CRITICO);                
                printf("Seus atributos base aumentaram\n");
                printf("Digite qualquer coisa para continuar... :");
                scanf("%d", &aux);
                system("cls");
                printf("Pronto para seguir para a proxima Fase?");


            }
        }else if (Guerreiro.ATKSPEED < chupaCabra.ATKSPEED){
            printf("O Chupa Cabra atacara primero.\n");
            Sleep(500);
            while (Guerreiro.VIDA > 0 && chupaCabra.VIDA > 0){
                if (chupaCabra.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % chupaCabra.CRITICO;
                    if (auxiliarCritico == 0){
                        Guerreiro.VIDA = Guerreiro.VIDA - chupaCabra.ATK - 5;
                        printf("O Chupa Cabra deu Criticooo, voce tomou + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Guerreiro: %d\n", Guerreiro.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Guerreiro.VIDA = Guerreiro.VIDA - chupaCabra.ATK;
                        printf("Vida do Guerreiro: %d\n", Guerreiro.VIDA);
                        Sleep(500);
                    }
                }if (Guerreiro.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Guerreiro.CRITICO;
                    if (auxiliarCritico == 0){
                        chupaCabra.VIDA = chupaCabra.VIDA - Guerreiro.ATK - 5;
                        printf("Voce deu Criticooo, + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Chupa Cabra: %d\n", chupaCabra.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        chupaCabra.VIDA = chupaCabra.VIDA - Guerreiro.ATK;
                        printf("Vida do Chupa Cabra: %d\n", chupaCabra.VIDA);
                        Sleep(500);
                    }
                }
            }

            if (Guerreiro.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);
            }else if (chupaCabra.VIDA <= 0){
                printf("\nVoce derrotou O Chupa Cabra");
                    Sleep(3000);
                    system("cls");
                printf("\nCom a sua vitoria voce encontrou um item.\n");
                printf("O Chupa Cabra dropou 2 itens\n 1- Coracao Flamejante\n 2- Nariz de Pica-Pau\nNariz e um item lendario, Ja Nariz de Pica-Pau e um fragmento de pocoes.\n");
                printf("\nCoracao Flamejante");
                printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: -%d\n\n",coracaoFlamejante.VIDA, coracaoFlamejante.ARMADURA, coracaoFlamejante.ATK, coracaoFlamejante.ATKSPEED, coracaoFlamejante.CRITICO);                
                printf("Seus atributos base aumentaram\n");
                printf("Digite qualquer coisa para continuar... :");
                scanf("%d", &aux);
                system("cls");
                printf("Pronto para seguir para a proxima Fase?");


            }
        }
    }
    else if (escolhaClasse == 2){
        if (Mago.ATKSPEED >= chupaCabra.ATKSPEED){
            printf("\nVoce atacara primero.\n");
            Sleep(500);
            while (Mago.VIDA > 0 && chupaCabra.VIDA > 0){
                if (Mago.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Mago.CRITICO;
                    if (auxiliarCritico == 0){
                        chupaCabra.VIDA = chupaCabra.VIDA - Mago.ATK - 5;
                        printf("Voce deu Criticooo, + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Chupa Cabra: %d\n", chupaCabra.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        chupaCabra.VIDA = chupaCabra.VIDA - Mago.ATK;
                        printf("Vida do Chupa Cabra: %d\n", chupaCabra.VIDA);
                        Sleep(500);
                    }
                }
                if (chupaCabra.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % chupaCabra.CRITICO;
                    if (auxiliarCritico == 0){
                        Mago.VIDA = Mago.VIDA - chupaCabra.ATK - 5;
                        printf("O Chupa Cabra deu Criticooo, voce tomou + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Mago: %d\n", Mago.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Mago.VIDA = Mago.VIDA - chupaCabra.ATK;
                        printf("Vida do Mago: %d\n", Mago.VIDA);
                        Sleep(500);
                    }
                }
                Sleep(500);
            }

            if (Mago.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);

            }else if (chupaCabra.VIDA <= 0){
                printf("\nVoce derrotou O Chupa Cabra");
                    Sleep(3000);
                    system("cls");
                printf("\nCom a sua vitoria voce encontrou um item.\n");
                printf("O Chupa Cabra dropou 2 itens\n 1- Coracao Flamejante\n 2- Nariz de Pica-Pau\nNariz e um item lendario, Ja Nariz de Pica-Pau e um fragmento de pocoes.\n");
                printf("\nCoracao Flamejante");
                printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: -%d\n\n",coracaoFlamejante.VIDA, coracaoFlamejante.ARMADURA, coracaoFlamejante.ATK, coracaoFlamejante.ATKSPEED, coracaoFlamejante.CRITICO);                
                printf("Seus atributos base aumentaram\n");
                printf("Digite qualquer coisa para continuar... :");
                scanf("%d", &aux);
                system("cls");
                printf("Pronto para seguir para a proxima Fase?");


            }
        }else if (Mago.ATKSPEED < chupaCabra.ATKSPEED){
            printf("O Chupa Cabra atacara primero.\n");
            Sleep(500);
            while (Mago.VIDA > 0 && chupaCabra.VIDA > 0){
                if (chupaCabra.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % chupaCabra.CRITICO;
                    if (auxiliarCritico == 0){
                        Mago.VIDA = Mago.VIDA - chupaCabra.ATK - 5;
                        printf("O Chupa Cabra deu Criticooo, voce tomou + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Mago: %d\n", Mago.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Mago.VIDA = Mago.VIDA - chupaCabra.ATK;
                        printf("Vida do Mago: %d\n", Mago.VIDA);
                        Sleep(500);
                    }
                }if (Mago.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Mago.CRITICO;
                    if (auxiliarCritico == 0){
                        chupaCabra.VIDA = chupaCabra.VIDA - Mago.ATK - 5;
                        printf("Voce deu Criticooo, + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Chupa Cabra: %d\n", chupaCabra.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        chupaCabra.VIDA = chupaCabra.VIDA - Mago.ATK;
                        printf("Vida do Chupa Cabra: %d\n", chupaCabra.VIDA);
                        Sleep(500);
                    }
                }
            }

            if (Mago.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);
            }else if (chupaCabra.VIDA <= 0){
                printf("\nVoce derrotou O Chupa Cabra");
                    Sleep(3000);
                    system("cls");
                printf("\nCom a sua vitoria voce encontrou um item.\n");
                printf("O Chupa Cabra dropou 2 itens\n 1- Coracao Flamejante\n 2- Nariz de Pica-Pau\nNariz e um item lendario, Ja Nariz de Pica-Pau e um fragmento de pocoes.\n");
                printf("\nCoracao Flamejante");
                printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: -%d\n\n",coracaoFlamejante.VIDA, coracaoFlamejante.ARMADURA, coracaoFlamejante.ATK, coracaoFlamejante.ATKSPEED, coracaoFlamejante.CRITICO);                
                printf("Seus atributos base aumentaram\n");
                printf("Digite qualquer coisa para continuar... :");
                scanf("%d", &aux);
                system("cls");
                printf("Pronto para seguir para a proxima Fase?");


            }
        }
    }else if (escolhaClasse == 3){
            printf("\nVoce atacara primero.\n");
            Sleep(500);
            while (Assassino.VIDA > 0 && chupaCabra.VIDA > 0){
                if (Assassino.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Assassino.CRITICO;
                    if (auxiliarCritico == 0){
                        chupaCabra.VIDA = chupaCabra.VIDA - Assassino.ATK - 5;
                        printf("Voce deu Criticooo, + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Chupa Cabra: %d\n", chupaCabra.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        chupaCabra.VIDA = chupaCabra.VIDA - Assassino.ATK;
                        printf("Vida do Chupa Cabra: %d\n", chupaCabra.VIDA);
                        Sleep(500);
                    }
                }
                if (chupaCabra.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % chupaCabra.CRITICO;
                    if (auxiliarCritico == 0){
                        Assassino.VIDA = Assassino.VIDA - chupaCabra.ATK - 5;
                        printf("O Chupa Cabra deu Criticooo, voce tomou + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Assassino: %d\n", Assassino.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Assassino.VIDA = Assassino.VIDA - chupaCabra.ATK;
                        printf("Vida do Assassino: %d\n", Assassino.VIDA);
                        Sleep(500);
                    }
                }
                Sleep(500);
            }

            if (Assassino.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);

            }else if (chupaCabra.VIDA <= 0){
                printf("\nVoce derrotou O Chupa Cabra");
                    Sleep(3000);
                    system("cls");
                printf("\nCom a sua vitoria voce encontrou um item.\n");
                printf("O Chupa Cabra dropou 2 itens\n 1- Coracao Flamejante\n 2- Nariz de Pica-Pau\nNariz e um item lendario, Ja Nariz de Pica-Pau e um fragmento de pocoes.\n");
                printf("\nCoracao Flamejante");
                printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: -%d\n\n",coracaoFlamejante.VIDA, coracaoFlamejante.ARMADURA, coracaoFlamejante.ATK, coracaoFlamejante.ATKSPEED, coracaoFlamejante.CRITICO);
                printf("Seus atributos base aumentaram\n");                
                printf("Digite qualquer coisa para continuar... :");
                scanf("%d", &aux);
                system("cls");
                printf("Pronto para seguir para a proxima Fase?");


            }
        }else if (Assassino.ATKSPEED < chupaCabra.ATKSPEED){
            printf("O Chupa Cabra atacara primero.\n");
            Sleep(500);
            while (Assassino.VIDA > 0 && chupaCabra.VIDA > 0){
                if (chupaCabra.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % chupaCabra.CRITICO;
                    if (auxiliarCritico == 0){
                        Assassino.VIDA = Assassino.VIDA - chupaCabra.ATK - 5;
                        printf("O Chupa Cabra deu Criticooo, voce tomou + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Assassino: %d\n", Assassino.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Assassino.VIDA = Assassino.VIDA - chupaCabra.ATK;
                        printf("Vida do Assassino: %d\n", Assassino.VIDA);
                        Sleep(500);
                    }
                }if (Assassino.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Assassino.CRITICO;
                    if (auxiliarCritico == 0){
                        chupaCabra.VIDA = chupaCabra.VIDA - Assassino.ATK - 5;
                        printf("Voce deu Criticooo, + 5 de DANO\n");
                        Sleep(500);
                        printf("Vida do Chupa Cabra: %d\n", chupaCabra.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        chupaCabra.VIDA = chupaCabra.VIDA - Assassino.ATK;
                        printf("Vida do Chupa Cabra: %d\n", chupaCabra.VIDA);
                        Sleep(500);
                    }
                }
            }

            if (Assassino.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);
            }else if (chupaCabra.VIDA <= 0){
                printf("\nVoce derrotou O Chupa Cabra");
                    Sleep(3000);
                    system("cls");
                printf("\nCom a sua vitoria voce encontrou um item.\n");
                printf("O Chupa Cabra dropou 2 itens\n 1- Coracao Flamejante\n 2- Nariz de Pica-Pau\nNariz e um item lendario, Ja Nariz de Pica-Pau e um fragmento de pocoes.\n");
                printf("\nCoracao Flamejante");
                printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: -%d\n\n",coracaoFlamejante.VIDA, coracaoFlamejante.ARMADURA, coracaoFlamejante.ATK, coracaoFlamejante.ATKSPEED, coracaoFlamejante.CRITICO);
                printf("Seus atributos base aumentaram\n");                
                printf("Digite qualquer coisa para continuar... :");
                scanf("%d", &aux);
                system("cls");
                printf("Pronto para seguir para a proxima Fase?");


            }
    }
}



int lutaDracula(){
int auxiliarCritico;
    baseGuerreiro();
    baseMago();
    baseAssassino();


    cajadoLunula();
    espadaLunula();
    adagasLunula();
    coracaoLunula();
    pocaoLunula();

    
    mapa1_dracula();

    Guerreiro.VIDA += Guerreiro.ARMADURA;
    Mago.VIDA += Mago.ARMADURA;
    Assassino.VIDA += Assassino.ARMADURA;
    
    dracula.VIDA += dracula.ARMADURA;
    system("cls");
        printf("\nCriando a Pocao da Madame LaLaurie\n");
        Sleep(2000);
        printf("Poti Poti, ");
        Sleep(1000);
        printf("Perna De Pau, ");
        Sleep(1000);
        printf("Olho de Vidro, ");
        Sleep(1000);
        printf("Nariz de Pica Pau, ");
        Sleep(1000);
        printf("Mexendo...");
        Sleep(3000);
        printf("\nVida: %d - Armadura: %d - ATK: %d - ATKSPEED: %d - Critico: - %d\n\n",pocaoMadame.VIDA, pocaoMadame.ARMADURA, pocaoMadame.ATK, pocaoMadame.ATKSPEED, pocaoMadame.CRITICO);
        Sleep(3000);
        printf("Tomando a Pocao");
        Sleep(1000);
    if (escolhaClasse == 1){
        Guerreiro.VIDA += pocaoMadame.VIDA;
        Guerreiro.ARMADURA += pocaoMadame.ARMADURA;
        Guerreiro.ATK += pocaoMadame.ATK;
        Guerreiro.ATKSPEED += pocaoMadame.ATKSPEED;
        Guerreiro.CRITICO -= pocaoMadame.CRITICO;
        

        if(Guerreiro.ATKSPEED >= dracula.ATKSPEED){
            printf("\nVoce atacara primero.\n");
            Sleep(500);
            while (Guerreiro.VIDA > 0 && dracula.VIDA > 0){
                if (Guerreiro.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Guerreiro.CRITICO;
                    if (auxiliarCritico == 0){
                        dracula.VIDA = dracula.VIDA - Guerreiro.ATK - 50;
                        printf("Voce deu Criticooo, + 50 de DANO\n");
                        Sleep(500);
                        printf("Vida do Dracula: %d\n", dracula.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        dracula.VIDA = dracula.VIDA - Guerreiro.ATK;
                        printf("Vida do Dracula: %d\n", dracula.VIDA);
                        Sleep(500);
                    }
                }
                if (dracula.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % dracula.CRITICO;
                    if (auxiliarCritico == 0){
                        Guerreiro.VIDA = Guerreiro.VIDA - dracula.ATK - 200;
                        printf("O Dracula deu um SUPEER Criticooo, voce tomou + 200 de DANO\n");
                        Sleep(500);
                        printf("Vida do Guerreiro: %d\n", Guerreiro.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Guerreiro.VIDA = Guerreiro.VIDA - dracula.ATK;
                        printf("Vida do Guerreiro: %d\n", Guerreiro.VIDA);
                        Sleep(500);
                    }
                }
                Sleep(500);
            }

            if (Guerreiro.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);

            }else if (dracula.VIDA <= 0){
                printf("\nVoce derrotou O Dracula");
                printf("Com a sua vitoria voce encontrou 2 itens.");
        
            }
        }else if (Guerreiro.ATKSPEED < dracula.ATKSPEED){
            printf("\nO Dracula atacara primero.\n");
            Sleep(500);
            while (Guerreiro.VIDA > 0 && dracula.VIDA > 0){
                if (dracula.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % dracula.CRITICO;
                    if (auxiliarCritico == 0){
                        Guerreiro.VIDA = Guerreiro.VIDA - dracula.ATK - 200;
                        printf("O Dracula deu um SUPEER Criticooo, voce tomou + 200 de DANO\n");
                        Sleep(500);
                        printf("Vida do Guerreiro: %d\n", Guerreiro.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Guerreiro.VIDA = Guerreiro.VIDA - dracula.ATK;
                        printf("Vida do Guerreiro: %d\n", Guerreiro.VIDA);
                        Sleep(500);
                    }
                }if (Guerreiro.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Guerreiro.CRITICO;
                    if (auxiliarCritico == 0){
                        dracula.VIDA = dracula.VIDA - Guerreiro.ATK - 50;
                        printf("Voce deu Criticooo, + 50 de DANO\n");
                        Sleep(500);
                        printf("Vida do Dracula: %d\n", dracula.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        dracula.VIDA = dracula.VIDA - Guerreiro.ATK;
                        printf("Vida do Dracula: %d\n", dracula.VIDA);
                        Sleep(500);
                    }
                }
            }

            if (Guerreiro.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);
            }else if (dracula.VIDA <= 0){
                printf("\nVoce derrotou O Dracula.\n");
                printf("Com a sua vitoria voce encontrou 2 itens.");
        
            }
        }
    }
    else if (escolhaClasse == 2){
        Mago.VIDA += pocaoMadame.VIDA;
        Mago.ARMADURA += pocaoMadame.ARMADURA;
        Mago.ATK += pocaoMadame.ATK;
        Mago.ATKSPEED += pocaoMadame.ATKSPEED;
        Mago.CRITICO -= pocaoMadame.CRITICO;
        

        if (Mago.ATKSPEED >= dracula.ATKSPEED){
            printf("\nVoce atacara primero.\n");
            Sleep(500);
            while (Mago.VIDA > 0 && dracula.VIDA > 0){
                if (Mago.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Mago.CRITICO;
                    if (auxiliarCritico == 0){
                        dracula.VIDA = dracula.VIDA - Mago.ATK - 50;
                        printf("Voce deu Criticooo, + 50 de DANO\n");
                        Sleep(500);
                        printf("Vida do Dracula: %d\n", dracula.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        dracula.VIDA = dracula.VIDA - Mago.ATK;
                        printf("Vida do Dracula: %d\n", dracula.VIDA);
                        Sleep(500);
                    }
                }
                if (dracula.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % dracula.CRITICO;
                    if (auxiliarCritico == 0){
                        Mago.VIDA = Mago.VIDA - dracula.ATK - 200;
                        printf("O Dracula deu um SUPEER Criticooo, voce tomou + 200 de DANO\n");
                        Sleep(500);
                        printf("Vida do Mago: %d\n", Mago.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Mago.VIDA = Mago.VIDA - dracula.ATK;
                        printf("Vida do Mago: %d\n", Mago.VIDA);
                        Sleep(500);
                    }
                }
                Sleep(500);
            }

            if (Mago.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);

            }else if (dracula.VIDA <= 0){
                printf("\nVoce derrotou O Dracula");
                printf("Com a sua vitoria voce encontrou 2 itens.");
        
            }
        }else if (Mago.ATKSPEED < dracula.ATKSPEED){
            printf("\nO Dracula atacara primero.\n");
            Sleep(500);
            while (Mago.VIDA > 0 && dracula.VIDA > 0){
                if (dracula.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % dracula.CRITICO;
                    if (auxiliarCritico == 0){
                        Mago.VIDA = Mago.VIDA - dracula.ATK - 200;
                        printf("O Dracula deu um SUPEER Criticooo, voce tomou + 200 de DANO\n");
                        Sleep(500);
                        printf("Vida do Mago: %d\n", Mago.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Mago.VIDA = Mago.VIDA - dracula.ATK;
                        printf("Vida do Mago: %d\n", Mago.VIDA);
                        Sleep(500);
                    }
                }if (Mago.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Mago.CRITICO;
                    if (auxiliarCritico == 0){
                        dracula.VIDA = dracula.VIDA - Mago.ATK - 50;
                        printf("Voce deu Criticooo, + 50 de DANO\n");
                        Sleep(500);
                        printf("Vida do Dracula: %d\n", dracula.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        dracula.VIDA = dracula.VIDA - Mago.ATK;
                        printf("Vida do Dracula: %d\n", dracula.VIDA);
                        Sleep(500);
                    }
                }
            }

            if (Mago.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);
            }else if (dracula.VIDA <= 0){
                printf("\nVoce derrotou O Dracula.\n");
                printf("Com a sua vitoria voce encontrou 2 itens.");
        
            }
        }
    }else if (escolhaClasse == 3){
        Assassino.VIDA += pocaoMadame.VIDA;
        Assassino.ARMADURA += pocaoMadame.ARMADURA;
        Assassino.ATK += pocaoMadame.ATK;
        Assassino.ATKSPEED += pocaoMadame.ATKSPEED;
        Assassino.CRITICO -= pocaoMadame.CRITICO;
        


            printf("\nVoce atacara primero.\n");
            Sleep(500);
            while (Assassino.VIDA > 0 && dracula.VIDA > 0){
                if (Assassino.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Assassino.CRITICO;
                    if (auxiliarCritico == 0){
                        dracula.VIDA = dracula.VIDA - Assassino.ATK - 50;
                        printf("Voce deu Criticooo, + 50 de DANO\n");
                        Sleep(500);
                        printf("Vida do Dracula: %d\n", dracula.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        dracula.VIDA = dracula.VIDA - Assassino.ATK;
                        printf("Vida do Dracula: %d\n", dracula.VIDA);
                        Sleep(500);
                    }
                }
                if (dracula.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % dracula.CRITICO;
                    if (auxiliarCritico == 0){
                        Assassino.VIDA = Assassino.VIDA - dracula.ATK - 200;
                        printf("O Dracula deu um SUPEER Criticooo, voce tomou + 200 de DANO\n");
                        Sleep(500);
                        printf("Vida do Assassino: %d\n", Assassino.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Assassino.VIDA = Assassino.VIDA - dracula.ATK;
                        printf("Vida do Assassino: %d\n", Assassino.VIDA);
                        Sleep(500);
                    }
                }
                Sleep(500);
            }

            if (Assassino.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);

            }else if (dracula.VIDA <= 0){
                printf("\nVoce derrotou O Dracula");
                printf("Com a sua vitoria voce encontrou 2 itens.");
        
            }
        }else if (Assassino.ATKSPEED < dracula.ATKSPEED){
            printf("\nO Dracula atacara primero.\n");
            Sleep(500);
            while (Assassino.VIDA > 0 && dracula.VIDA > 0){
                if (dracula.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % dracula.CRITICO;
                    if (auxiliarCritico == 0){
                        Assassino.VIDA = Assassino.VIDA - dracula.ATK - 200;
                        printf("O Dracula deu um SUPEER Criticooo, voce tomou + 200 de DANO\n");
                        Sleep(500);
                        printf("Vida do Assassino: %d\n", Assassino.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        Assassino.VIDA = Assassino.VIDA - dracula.ATK;
                        printf("Vida do Assassino: %d\n", Assassino.VIDA);
                        Sleep(500);
                    }
                }if (Assassino.VIDA > 0){
                    srand((unsigned)time(NULL));
                    auxiliarCritico = rand() % Assassino.CRITICO;
                    if (auxiliarCritico == 0){
                        dracula.VIDA = dracula.VIDA - Assassino.ATK - 50;
                        printf("Voce deu Criticooo, + 50 de DANO\n");
                        Sleep(500);
                        printf("Vida do Dracula: %d\n", dracula.VIDA);
                        Sleep(500);
                    }else if (auxiliarCritico > 0){
                        dracula.VIDA = dracula.VIDA - Assassino.ATK;
                        printf("Vida do Dracula: %d\n", dracula.VIDA);
                        Sleep(500);
                    }
                }
            }

            if (Assassino.VIDA <= 0){
                printf("\nVoce morreuu.");
                printf("\n\nDigite qualquer coisa para tentar novamente... : ");
                scanf("%d", &EMORREU);
            }else if (dracula.VIDA <= 0){
                printf("\nVoce derrotou O Dracula.\n");
        
            }
    }
}

