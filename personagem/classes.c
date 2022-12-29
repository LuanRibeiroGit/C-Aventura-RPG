#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <windows.h>

    struct Guerr{
        int VIDA;
        int ARMADURA;
        int ATK;
        int ATKSPEED;
        int CRITICO;
    };
    struct Guerr Guerreiro;

    struct Mag{
        int VIDA;
        int ARMADURA;
        int ATK;
        int ATKSPEED;
        int CRITICO;
    };
    struct Mag Mago;

    struct Assassin{
        int VIDA;
        int ARMADURA;
        int ATK;
        int ATKSPEED;
        int CRITICO;
    };
    struct Assassin Assassino;

int baseGuerreiro(){
    Guerreiro.VIDA = 50;
    Guerreiro.ARMADURA = 10;
    Guerreiro.ATK = 11;
    Guerreiro.ATKSPEED = 10;
    Guerreiro.CRITICO = 10;
}    
int baseMago(){
    Mago.VIDA = 42;
    Mago.ARMADURA = 8;
    Mago.ATK = 13;
    Mago.ATKSPEED = 15;
    Mago.CRITICO = 8;
}
int baseAssassino(){
    Assassino.VIDA = 30;
    Assassino.ARMADURA = 10;
    Assassino.ATK = 14;
    Assassino.ATKSPEED = 20;
    Assassino.CRITICO = 6;
}