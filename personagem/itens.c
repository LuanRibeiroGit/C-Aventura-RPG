#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <windows.h>



//itens MAPA 1
    struct espada_lunula{
        int VIDA;
        int ARMADURA;
        int ATK;
        int ATKSPEED;
        int CRITICO;
    };
    
    struct espada_lunula espadaSedenta;


    struct cajado_lunula{
        int VIDA;
        int ARMADURA;
        int ATK;
        int ATKSPEED;
        int CRITICO;
    };
    
    struct cajado_lunula cajadoDeBloody;

    struct adaga_lunula{
        int VIDA;
        int ARMADURA;
        int ATK;
        int ATKSPEED;
        int CRITICO;
    };
    
    struct adaga_lunula adagasDeDalia;

    struct coracao_lunula{
        int VIDA;
        int ARMADURA;
        int ATK;
        int ATKSPEED;
        int CRITICO;
    };
    
    struct coracao_lunula coracaoFlamejante;
    
    struct pocao_lunula{
        int VIDA;
        int ARMADURA;
        int ATK;
        int ATKSPEED;
        int CRITICO;
    };
    
    struct pocao_lunula pocaoMadame;


int espadaLunula(){
    espadaSedenta.VIDA = 2;
    espadaSedenta.ARMADURA = 0;
    espadaSedenta.ATK = 5;
    espadaSedenta.ATKSPEED = 10;
    espadaSedenta.CRITICO = 1;
}
int cajadoLunula(){
    cajadoDeBloody.VIDA = 4;
    cajadoDeBloody.ARMADURA = 2;
    cajadoDeBloody.ATK = 3;
    cajadoDeBloody.ATKSPEED = 15;
    cajadoDeBloody.CRITICO = 1;
}
int adagasLunula(){
    adagasDeDalia.VIDA = 4;
    adagasDeDalia.ARMADURA = 2;
    adagasDeDalia.ATK = 6;
    adagasDeDalia.ATKSPEED = 14;
    adagasDeDalia.CRITICO = 0;
}
int coracaoLunula(){
    coracaoFlamejante.VIDA = 8;
    coracaoFlamejante.ARMADURA = 2;
    coracaoFlamejante.ATK = 0;
    coracaoFlamejante.ATKSPEED = 12;
    coracaoFlamejante.CRITICO = 2;
}
int pocaoLunula(){
    pocaoMadame.VIDA = 4000;
    pocaoMadame.ARMADURA = 500;
    pocaoMadame.ATK = 200;
    pocaoMadame.ATKSPEED = 10;
    pocaoMadame.CRITICO = 1;
}