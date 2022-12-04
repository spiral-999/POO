#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <conio.h>
#include "partidas.h"
using namespace std;


int main(){
    cout << "main" << endl;

    char x, y;
    int a = 0, b;
    string timenome;
    //PARTIDAS PADRAO
    partida jogo1;
    partida jogo2;
    //TIMES PADRAO
    time afo("Afogados");
    time flo("Floresta");
    time lag("Lagarto");
    time toc("Tocantinopolis");
    time usuario[10];
    //ATRIBUINDO TIMES AS PARTIDAS
    jogo1.setTimecasa(afo);
    jogo1.setTimevisitante(flo);

    //jogo1.getPlacar(); == PLACAR DA PARTIDA
    //jogo1.addGolcasa(); == COLOCAR UM GOL PRO TIME DE CASA
    /*
    cout << "Teste: aperte F" << endl;  
    x = getch(); == PEGAR UM CARACTERE
    cout << "Operacao terminada";
    */
   MENU:
   system("clear||cls");
   cout << "BEM VINDO AO BOMBA PATCH C++ EDITION :)" << endl;
   cout << "=======================================" << endl;
   cout << "             MENU PRINCIPAL           " << endl;
   cout << "Digite 1 para ver os times atuais" << endl;
   cout << "Digite 2 para criar um time" << endl;
   cout << "Digite 3 para criar uma partida" << endl;
   cout << "Digite 4 para ver os jogadores de um time" << endl;
   cout << "Digite 5 para criar ou editar jogadores" << endl;

   cout << "Digite 0 para parar o programa" << endl;

    x = getch();

   if(x == '0'){
    goto FIM;
   }else if(x == '1'){
    goto TIMENOME;
   }else if(x == '2'){
    goto TIMECRIAR;
   }/*else if(x == '3'){
    goto PARTIDACRIAR;
   }
   */else if(x == '4'){
    goto VERJOGADORES;
   }/*else if(x == '5'){
    goto CRIARJOGADOR;
   }
   */

   x = 0;
   TIMENOME:
   if(x == '1'){
    system("clear||cls");

    cout << "--- " << afo.getNome() << endl << "--- " << flo.getNome() << endl << "--- " << lag.getNome() << endl << "--- " << toc.getNome() << endl;
    for(int i = 0;i<a;i++){
        cout << "--- " << usuario[i].getNome() << endl;
    }
    cout << endl << "Digite 1 para voltar ao menu" << endl;
    cout << "Digite 2 para ver os jogadores de um time" << endl;
    x = getch();
    if(x == '1'){
        system("clear||cls");
        goto MENU;
    }else if(x == '2'){
        goto VERJOGADORES;
    }
   }

    x = 0;
    TIMECRIAR:
    if(x == '2'){
        cout << endl;
        cout << "Digite o nome do seu time ou digite 1 para voltar ao menu : " << endl;
        cin >> timenome;

        if(a<10){

            if(timenome == "1"){

                goto MENU;

            }else{

                usuario[a].setNome(timenome);
                a++;
                cout << timenome << " criado!";
            }
        }else{
            cout << "Voce atingiu o limite de times!!" << endl;

        }
        _sleep(1000);
        goto MENU;
    }
    
    /*
    x = 0;
    PARTIDACRIAR:
    if(x == '3'){

    }
    */
    x = 0;
    VERJOGADORES:
    if(x == '2' || x == '4'){
        cout << endl;
        afo.printTime();
    }

    /*
    x = 0;
    CRIARJOGADDOR:
    if(x == '5'){

    }
    */


    /*teste.timeCasa.atacantes[0].setNome("JoaoFoda");

    cout << teste.timeCasa.getNome() << endl << teste.timeCasa.atacantes->getNome() << endl;
    teste.getPlacar();

    /*time *teste = new time;

    teste->atacantes[0].setNome("JoaoFoda");

    cout << teste->atacantes[0].getNome() << " ";

    cout << teste->getNome() << endl;*/

    FIM:
    if(x == '0'){
    cout  << endl << "PROGRAMA ENCERRADO" << endl;
    }
}