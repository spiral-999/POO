#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <conio.h>
#include "partidas.h"
using namespace std;

int escolha(string nome, equipe tal){
    if(tal.getNome() == nome){
        return 1;
    }else{
        return 0;
    }

}


int main(){
    cout << "main" << endl;

    char x;
    int a = 0, b = 0, y;
    string equipenome;
    //PARTIDAS PADRAO
    partida jogo1;
    partida jogo2;
    partida racha[10];
    //equipeS PADRAO
    equipe afo("Afogados");
    equipe flo("Floresta");
    equipe lag("Lagarto");
    equipe toc("Tocantinopolis");
    equipe usuario[10];
    //ATRIBUINDO EQUIPES AS PARTIDAS
    jogo1.setequipecasa(afo);
    jogo1.setequipevisitante(flo);
    //ATRIBUINDO VALORES A TIMES
    

   MENU:
   system("clear||cls");
   cout << "BEM VINDO AO BOMBA PATCH C++ EDITION :)" << endl;
   cout << "=======================================" << endl;
   cout << "             MENU PRINCIPAL           " << endl;
   cout << "Digite 1 para ver os equipes atuais" << endl;
   cout << "Digite 2 para criar um equipe" << endl;
   cout << "Digite 3 para criar uma partida" << endl;
   cout << "Digite 4 para ver os jogadores de um equipe" << endl;
   cout << "Digite 5 para criar ou editar jogadores" << endl;

   cout << "Digite 0 para parar o programa" << endl;

    x = getch();

   if(x == '0'){
    goto FIM;
   }else if(x == '1'){
    goto equipeNOME;
   }else if(x == '2'){
    goto equipeCRIAR;
   }else if(x == '3'){
    goto PARTIDACRIAR;
   }
   else if(x == '4'){
    goto VERJOGADORES;
   }/*else if(x == '5'){
    goto CRIARJOGADOR;
   }
   */

   x = 0;
   equipeNOME:
   if(x == '1'){
    system("clear||cls");

    cout << "--- " << afo.getNome() << endl << "--- " << flo.getNome() << endl << "--- " << lag.getNome() << endl << "--- " << toc.getNome() << endl;
    for(int i = 0;i<a;i++){
        cout << "--- " << usuario[i].getNome() << endl;
    }
    cout << endl << "Digite 1 para voltar ao menu" << endl;
    cout << "Digite 2 para ver os jogadores de um equipe" << endl;
    x = getch();
    if(x == '1'){
        system("clear||cls");
        goto MENU;
    }else if(x == '2'){
        goto VERJOGADORES;
    }
   }

    x = 0;
    equipeCRIAR:
    if(x == '2'){
        cout << endl;
        cout << "Digite o nome da sua equipe ou digite 1 para voltar ao menu : " << endl;
        cin >> equipenome;

        if(a<10){

            if(equipenome == "1"){

                goto MENU;

            }else{

                usuario[a].setNome(equipenome);
                a++;
                cout << equipenome << " criado!";
            }
        }else{
            cout << "Voce atingiu o limite de equipes!!" << endl;

        }
        _sleep(1000.0);
        goto MENU;
    }
    
    
    x = 0;
    PARTIDACRIAR:
    if(x == '3'){
        int dia, mes;
        cout << endl << "Digite o dia da sua partida: " << endl;
        cin >> dia;
        cout << "Digite o mes da sua partida: " << endl;
        cin >> mes;
        if(b<10){
            if(dia == 0 || mes == 0){
                goto MENU;
            }else if((dia > 30) || (mes > 12)){
                cout << "Por favor, insira uma data valida" << endl;
                goto PARTIDACRIAR;
            }
            else{  
                racha[b].setDia(dia);
                racha[b].setMes(mes);
                b++;
                cout << "Jogo dia " << dia << "/"  << mes << " hein!!!" << endl;
            }

        }
        _sleep(1000.0);
        goto MENU;
    }
    
    x = 0;
    VERJOGADORES:
    if(x == '2' || x == '4'){
        system("clear||cls");
        cout << "Escolha qual time deseja ver ou digite 1 para voltar ao menu : " << endl;
        cin >> equipenome;
        if(equipenome == "1"){
            goto MENU;
        }else{
            if(equipenome == "Floresta"){
                flo.printequipe();
                y=1;
            }else if(equipenome == "Afogados"){
                afo.printequipe();
                y=1;
            }else if(equipenome == "Tocantinopolis"){
                toc.printequipe();
                y=1;
            }else if(equipenome == "Lagarto"){
                lag.printequipe();
                y=1;
            }else{
                for(int i=0;i<a;i++){
                    y = escolha(equipenome, usuario[i]);
                    if(y == 1){
                        usuario[i].printequipe();
                        break;
                    }
                }
            }
            if(y==1){
                cout << "Aperte 1 para voltar ao menu" << endl;
                x = getch();
                if(x == '1'){
                    goto MENU;
                }
            }else{
                cout << "Nome errado!" << endl;
                _sleep(1000.0);
                goto VERJOGADORES;
            }
        }

    }


























    /*
    x = 0;
    CRIARJOGADDOR:
    if(x == '5'){

    }
    */

    /*teste.equipeCasa.atacantes[0].setNome("JoaoFoda");

    cout << teste.equipeCasa.getNome() << endl << teste.equipeCasa.atacantes->getNome() << endl;
    teste.getPlacar();

    /*equipe *teste = new equipe;

    teste->atacantes[0].setNome("JoaoFoda");

    cout << teste->atacantes[0].getNome() << " ";

    cout << teste->getNome() << endl;*/

    //jogo1.getPlacar(); == PLACAR DA PARTIDA
    //jogo1.addGolcasa(); == COLOCAR UM GOL PRO equipe DE CASA
    /*
    cout << "Teste: aperte F" << endl;  
    x = getch(); == PEGAR UM CARACTERE
    cout << "Operacao terminada";
    */

    FIM:
    if(x == '0'){
    cout  << endl << "PROGRAMA ENCERRADO" << endl;
    }
}
