#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <windows.h>

    int contador;
    contador = 1;



//MONSTROS MAPA 1
    struct zumbi{
        int VIDA;
        int ARMADURA;
        int ATK;
        int ATKSPEED;
        int CRITICO;
    };
    
    struct zumbi zombie;

    struct mag{
        int VIDA;
        int ARMADURA;
        int ATK;
        int ATKSPEED;
        int CRITICO;
    };
    
    struct mag Vampirico;

    struct Bruxo{
        int VIDA;
        int ARMADURA;
        int ATK;
        int ATKSPEED;
        int CRITICO;
    };
    
    struct Bruxo bruxaDeSangue;

    struct chupa{
        int VIDA;
        int ARMADURA;
        int ATK;
        int ATKSPEED;
        int CRITICO;
    };
    
    struct chupa chupaCabra;

    struct boss{
        int VIDA;
        int ARMADURA;
        int ATK;
        int ATKSPEED;
        int CRITICO;
    };
    
    struct boss dracula;
int mapa1_zombie(){
    zombie.VIDA = 25;
    zombie.ARMADURA = 5;
    zombie.ATK = 10;
    zombie.ATKSPEED = 10;
    zombie.CRITICO = 10;
}
int mapa1_Vampirico(){
    Vampirico.VIDA = 35;
    Vampirico.ARMADURA = 10;
    Vampirico.ATK = 12;
    Vampirico.ATKSPEED = 10;
    Vampirico.CRITICO = 8;
}
int mapa1_bruxaDeSangue(){
    bruxaDeSangue.VIDA = 60;
    bruxaDeSangue.ARMADURA = 10;
    bruxaDeSangue.ATK = 17;
    bruxaDeSangue.ATKSPEED = 30;
    bruxaDeSangue.CRITICO = 8;
}
int mapa1_chupaCabra(){
    chupaCabra.VIDA = 70;
    chupaCabra.ARMADURA = 20;
    chupaCabra.ATK = 20;
    chupaCabra.ATKSPEED = 10;
    chupaCabra.CRITICO = 6;
}
int mapa1_dracula(){
    dracula.VIDA = 5000;
    dracula.ARMADURA = 100;
    dracula.ATK = 100;
    dracula.ATKSPEED = 100;
    dracula.CRITICO = 5;
}