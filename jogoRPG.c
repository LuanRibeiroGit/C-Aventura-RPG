#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <windows.h>
#include "mapas.c"
#include "history/introducao.c"


int aux;


int main (){

    introducaoHistory();

    createPersonagem();
        system("cls");
        printf("\n\nUm pobre garoto chamado %s nascido em Lunula de Sangue,\n", nickName);
        Sleep(3000);
        system("cls");
        history_introPerso();
        lunulaDeSangue();
        decisao1();
}
