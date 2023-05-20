#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <ctime>
/*#include <conio.h>*/
#include "partidas.h"
using namespace std;

void somarcasaU(partida x[], int i, int y){
    if(y == 1){
        x[i].equipeCasa.goleiro.somaGols();
    }else if(y == 2){
        x[i].equipeCasa.defensor[0].somaGols();
    }else if(y == 3){
        x[i].equipeCasa.defensor[1].somaGols();
    }else if(y == 4){
        x[i].equipeCasa.atacantes[0].somaGols();
    }else if(y == 5){
        x[i].equipeCasa.atacantes[1].somaGols();
    }
}

void somarvisitaU(partida x[], int i, int y){
    if(y == 1){
        x[i].equipeVisitante.goleiro.somaGols();
    }else if(y == 2){
        x[i].equipeVisitante.defensor[0].somaGols();
    }else if(y == 3){
        x[i].equipeVisitante.defensor[1].somaGols();
    }else if(y == 4){
        x[i].equipeVisitante.atacantes[0].somaGols();
    }else if(y == 5){
        x[i].equipeVisitante.atacantes[1].somaGols();
    }
}

void somarcasa(partida x, char y){
    if(y == '1'){
        x.equipeCasa.goleiro.somaGols();
    }else if(y == '2'){
        x.equipeCasa.defensor[0].somaGols();
    }else if(y == '3'){
        x.equipeCasa.defensor[1].somaGols();
    }else if(y == '4'){
        x.equipeCasa.atacantes[0].somaGols();
    }else if(y == '5'){
        x.equipeCasa.atacantes[1].somaGols();
    }

}

void somarvisita(partida x, char y){
    if(y == '1'){
        x.equipeVisitante.goleiro.somaGols();
    }else if(y == '2'){
        x.equipeVisitante.defensor[0].somaGols();
    }else if(y == '3'){
        x.equipeVisitante.defensor[1].somaGols();
    }else if(y == '4'){
        x.equipeVisitante.atacantes[0].somaGols();
    }else if(y == '5'){
        x.equipeVisitante.atacantes[1].somaGols();
    }

}

void somarjogador(equipe x, char y){
    
    if(y == '1'){
        x.goleiro.somaGols();
    }else if(y == '2'){
        x.defensor[0].somaGols();
    }else if(y == '3'){
        x.defensor[1].somaGols();
    }else if(y == '4'){
        x.atacantes[0].somaGols();
    }else if(y == '5'){
        x.atacantes[1].somaGols();
    }
}


int escolha(string nome, equipe tal){
    if(tal.getNome() == nome){
        return 1;
    }else{
        return 0;
    }

}

int rand(int x){
    srand(time(0));
    x = rand()%11+1;
    return x;
}

int radom(int x){
    srand(x);
    x = rand()%11+1;
    return x;
}

/*float randh(){
    float x, z;
    srand(time(0));
    x = rand()%2+1;
    z = rand()%8+5;
    z = z/10;
    x+=z;

    return x;
}*/

string batizo(int x){
    int y;
    y = radom(rand(1) * x);
    if(y == 1){
        return "Manoel";
    }else if(y == 2){
        return "Lucas";
    }else if(y == 3){
        return "Gabriel";
    }else if(y == 4){
        return "Ytalo";
    }else if(y == 5){
        return "Thiago";
    }else if(y == 6){
        return "Mateus";
    }else if(y == 7){
        return "Igor";
    }else if(y == 8){
        return "Yudi";
    }else if(y == 9){
        return "Lucio";
    }else if(y == 10){
        return "Davi";
    }else if(y == 11){
        return "Douglas";
    }

}

int main(){
    

    char x, trow;
    //     A == AUXILIO DE CRIACAO DE EQUIPES   B == AUXILIO DE CRIACAO DE PARTIDAS C == DIA C2 == MES
    int a = 0, b = 0, c = 0, c2;
    //  AUXILIOS DE JOGADORES
    int g=0, d=0, at=0, total;
    //  AUXILIOS NO MENU
    char p, e, j;
    //CONFIRMACAO DE QUE ACHOU UMA CRIACAO
    int y;
    //SELECAO DE POSICAO
    int def, atc;
    //AJUDAR A DIFERENCIAR QUEM FEZ GOLS
    int g0, d0, d1, a0, a1;
    //SABER QUAL DATA DA PARTIDA
    int par;

    int player;

    char gols;

    float h;
    string equipenome;
    string jogadornome;
    //PARTIDAS PADRAO
    partida jogo1;
    partida jogos[10];
    //equipeS PADRAO
    equipe afo("Afogados");
    equipe flo("Floresta");
    equipe lag("Lagarto");
    equipe toc("Tocantinopolis");
    equipe usuario[10];
    //JOGADORES PADRAO
    jogadorGoleiro gol[5];
    jogadorDefesa zag[5];
    jogadorAtaque ata[5];
    //ATRIBUINDO equipeS AS PARTIDAS
    

    jogo1.setDia(12);
    jogo1.setMes(5);
    //SETANDO OS NOMES
{
    afo.setNomes(batizo(1), batizo(2), batizo(3), batizo(4), batizo(5));
    flo.setNomes(batizo(12), batizo(23), batizo(34), batizo(45), batizo(56));
    lag.setNomes(batizo(123), batizo(234), batizo(345), batizo(456), batizo(567));
    toc.setNomes(batizo(15), batizo(26), batizo(37), batizo(48), batizo(59));
    for(int i=0;i<10;i++){
        usuario[i].setNomes(batizo(2+i), batizo(2*i), batizo(3+i), batizo(4*2*i), batizo(5+i*3));
    }
}
    //SETANDO HABILIDADES E ETC
{
    afo.habilidades(1.80, radom(rand(1)+1), radom(rand(1)+26), radom(rand(1)+75), radom(rand(1)), radom(rand(1)+59), radom(rand(1)+96), radom(rand(1)+728), radom(rand(1)+997), radom(rand(1)+9), radom(rand(1)+10), radom(rand(1)+11));
    flo.habilidades(1.83, radom(rand(1)+175), radom(rand(1)+2156), radom(rand(1)+755), radom(rand(1)+865), radom(rand(1)+593), radom(rand(1)+9657), radom(rand(1)+2), radom(rand(1)+83), radom(rand(1)+79), radom(rand(1)+102), radom(rand(1)+141));
    lag.habilidades(1.76, radom(rand(1)+657), radom(rand(1)+375), radom(rand(1)+786), radom(rand(1)+5687), radom(rand(1)+53), radom(rand(1)+486), radom(rand(1)+286), radom(rand(1)+19), radom(rand(1)+45), radom(rand(1)+65), radom(rand(1)+78));
    toc.habilidades(1.92, radom(rand(1)+472), radom(rand(1)+420), radom(rand(1)+69), radom(rand(1)+335), radom(rand(1)+468), radom(rand(1)+164), radom(rand(1)+987), radom(rand(1)+231), radom(rand(1)+34), radom(rand(1)+378), radom(rand(1)+433));
    for(int x=0;x<10;x++){
        usuario[x].habilidades(1.92, radom(rand(1)+x*2), radom(rand(1)+x*3), radom(rand(1)+x*9), radom(rand(1)+x*22), radom(rand(1)+x*12), radom(rand(1)+x*31), radom(rand(1)+x*45), radom(rand(1)+x*62), radom(rand(1)+x*80), radom(rand(1)+x*20), radom(rand(1)+x*60));
    }
}

    jogo1.setequipecasa(afo);
    jogo1.setequipevisitante(flo);
    cout << "main" << endl;
   MENU:
   system("clear||cls");
   cout << "   BEM VINDO AO BOMBA PATCH C++ EDITION :)   " << endl;
   cout << "=============================================" << endl;
   cout << "|              MENU PRINCIPAL               |" << endl;
   cout << "|   Digite 1 para ver o menu de partidas    |" << endl;
   cout << "|   Digite 2 para ver o menu de equipes     |" << endl;
   cout << "|   Digite 3 para ver o menu de jogadores   |" << endl;
   cout << "|   Digite 4 para iniciar uma partida       |" << endl;
   cout << "=============================================" << endl;

   cout << "Digite 0 para parar o programa" << endl;

    cin >> x;

   if(x == '0'){
    goto FIM;
   }else if(x == '1'){
    goto MENUPARTIDAS;
   }else if(x == '2'){
    goto MENUEQUIPES;
   }else if(x == '3'){
    goto MENUJOGADORES;
   }else if(x == '4'){
    goto INICIARPARTIDA;
   }
    x=0;
    MENUPARTIDAS:
{
    if(x == '1'){
        
        system("clear||cls");

        cout << "     BEM VINDO AO MENU DE PARTIDAS        " << endl;
        cout << "==========================================" << endl;
        cout << "Digite 1 para ver as datas das partidas   " << endl;
        cout << "Digite 2 para criar uma partida           " << endl;
        cout << "Digite 3 para procurar partidas em uma data especifica(parte do trabalho)" << endl;
        cout << "Digite 4 para voltar ao menu principal    " << endl;

        cin >> p;

        if(p == '1'){
            jogo1.printPartida();
            for(int i=0;i<10;i++){
                if ((jogos[i].getDia() != 30)&&(jogos[i].getMes() != 2)){
                    cout << endl;
                    jogos[i].printPartida();
                }
                
            }
            cout << "Insira qualquer caractere para voltar ao menu de partidas" << endl;
            cin >> trow;
            p = '0';
            goto MENUPARTIDAS;



        }else if(p == '2'){
            for(int i=b;i<b+1;i++){
                cout << "Digite o dia da partida" << endl;
                cin >> c;
                jogos[b].setDia(c);
                cout << "Digite o mes da partida" << endl;
                cin >> c;
                jogos[b].setMes(c);
                cout << "Insira o nome do time de casa" << endl;
                cin >> equipenome;

                if(equipenome == "Floresta"){
                    jogos[b].setequipecasa(flo);
                }else if(equipenome == "Afogados"){
                    jogos[b].setequipecasa(afo);
                }else if(equipenome == "Lagarto"){
                    jogos[b].setequipecasa(lag);
                }else if(equipenome == "Tocantinopolis"){
                    jogos[b].setequipecasa(toc);
                }else{
                    for(int i=0;i<a;i++){
                        int y = 0;
                        y = escolha(equipenome, usuario[i]);
                        if(y == 1){
                            jogos[b].setequipecasa(usuario[i]);
                            break;
                        }
                    }
                }

                cout << "Insira o nome do time visitante" << endl;
                cin >> equipenome;
                if(equipenome == "Floresta"){
                    jogos[b].setequipevisitante(flo);
                }else if(equipenome == "Afogados"){
                    jogos[b].setequipevisitante(afo);
                }else if(equipenome == "Lagarto"){
                    jogos[b].setequipevisitante(lag);
                }else if(equipenome == "Tocantinopolis"){
                    jogos[b].setequipevisitante(toc);
                }else{
                    for(int i=0;i<a;i++){
                        int y = 0;
                        y = escolha(equipenome, usuario[i]);
                        if(y == 1){
                            jogos[b].setequipevisitante(usuario[i]);
                            break;
                        }
                    }
                }

            }
            b++;
            cout << "Insira qualquer caractere para voltar ao menu de partidas" << endl;
            cin >> trow;
            p = '0';
            goto MENUPARTIDAS;



        }else if(p == '3'){
            y = 0;
            cout << "Digite o dia da partida que voce procura ou digite 0 para voltar ao menu de partidas" << endl;
            cin >> c;

            if(c == 0){
                    goto MENUPARTIDAS;
            }

            cout << "Digite o mes da partida que voce procura" << endl;
            cin >> c2;

            if((c == jogo1.getDia())&&(c2 == jogo1.getMes())){
                y = 1;
                cout << endl;
                jogo1.printPartida();
            }

            for(int i = 0;i<10;i++){
                if ((c == jogos[i].getDia())&&(c2 == jogos[i].getMes())){
                    y = 1;
                    cout << endl;
                    jogos[i].printPartida();
                }
            }
                
            if(y == 1){
                cout << "Insira qualquer caractere para voltar ao menu de partidas" << endl;
                cin >> trow;
                p = '0';
                goto MENUPARTIDAS;
            }else{
                cout << "Nao ah nenhuma partida nessa data! Insira algum caractere para tentar novamente" << endl;
                cin >> trow;
                goto MENUPARTIDAS;
            }


        }else if(p == '4'){
            p = '0';
            goto MENU;

        }

    }
}


    x=0;
    MENUEQUIPES:
{    
    if(x == '2'){

        system("clear||cls");

        cout << "         BEM VINDO AO MENU DE TIMES           " << endl;
        cout << "==============================================" << endl;
        cout << "Digite 1 para ver todos os times              " << endl;
        cout << "Digite 2 para ver um time e seus jogadores    " << endl;
        cout << "Digite 3 para criar um time                   " << endl;
        cout << "Digite 4 para voltar ao menu principal        " << endl;

        cin >> e;

        if(e == '1'){
            system("clear||cls");

            cout << "--- " << afo.getNome() << endl << "--- " << flo.getNome() << endl << "--- " << lag.getNome() << endl << "--- " << toc.getNome() << endl;
            for(int i = 0;i<a;i++){
                cout << "--- " << usuario[i].getNome() << endl;
            }
            cout << "Insira qualquer caractere para voltar ao menu de times" << endl;
            cin >> trow;
            goto MENUEQUIPES;

        }else if(e == '2'){

            system("clear||cls");

            cout << "Escolha o equipe que voce quer ver ou digite 0 para voltar ao menu de times: " << endl;
            cin >> equipenome;
            if(equipenome == "0"){
                goto MENUEQUIPES;
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
                    cout << "Insira qualquer caractere para voltar ao menu de times" << endl;

                    cin >> trow;

                    goto MENUEQUIPES;
                }else{
                    cout << "Nome errado!" << endl;
                    goto MENUEQUIPES;
                }
            }


        }else if(e == '3'){
            cout << endl;
            cout << "Digite o nome do seu time ou digite 0 para voltar ao menu de times: " << endl;
            cin >> equipenome;

            if(a<10){

                if(equipenome == "0"){

                    goto MENUEQUIPES;

                }else{

                    usuario[a].setNome(equipenome);
                    a++;
                    cout << equipenome << " criado!";
                }
            }else{
                cout << "Voce atingiu o limite de times!!" << endl;

            }
            goto MENUEQUIPES;


        }else if(e == '4'){
            goto MENU;
        }

    }
}



    x=0;
    MENUJOGADORES:
{
    if(x == '3'){

        system("clear||cls");

        cout << "        BEM VINDO AO MENU DE JOGADORES            " << endl;
        cout << "==================================================" << endl;
        cout << "Digite 1 para criar um jogador                    " << endl;
        cout << "Digite 2 para ver os jogadores criados            " << endl;
        cout << "Digite 3 para colocar um jogador criado em um time" << endl;
        cout << "Digite 4 para voltar ao menu principal            " << endl;

        cin >> e;

        if(e == '1'){
            cout << endl << "Diga o primeiro nome do jogador: " << endl;
            cin >> jogadornome;
            cout << "Digite 1 para criar um goleiro;" << endl;
            cout << "Digite 2 para criar um fixo ou pivo(defensor);" << endl;
            cout << "Digite 3 para criar um ala esquerda ou ala direita(atacante);" << endl;

            cin >> total;

            if(total == 1){


                if(g<5){
                    gol[g].setNome(jogadornome);
                    cout << "Digite a camisa do jogador: " << endl;
                    cin >> player;
                    gol[g].setCamisa(player);
                    cout << "Digite a habilidade do jogador: " << endl;
                    cin >> player;
                    gol[g].setHabilidade(player);
                    cout << "Digite a altura do jogador(com . ao inves de ,): " << endl;
                    cin >> h;
                    gol[g].setAltura(h);
                    g++;
                }else{
                    cout << "Limite atingido! Insira qualquer caractere para voltar ao menu de jogadores:" << endl;
                    cin >> trow;
                    
                }
                goto MENUJOGADORES;

            }else if(total == 2){


                if(d<5){
                    zag[d].setNome(jogadornome);
                    cout << "Digite a camisa do jogador: " << endl;
                    cin >> player;
                    zag[d].setCamisa(player);
                    cout << "Digite a habilidade do jogador: " << endl;
                    cin >> player;
                    zag[d].setHabilidade(player);
                    d++;
                }else{
                    cout << "Limite atingido! Insira qualquer caractere para voltar ao menu de jogadores:" << endl;
                    cin >> trow;
                    
                }
                goto MENUJOGADORES;

            }if(total == 3){


                if(at<5){
                    ata[at].setNome(jogadornome);
                    cout << "Digite a camisa do jogador: " << endl;
                    cin >> player;
                    ata[at].setCamisa(player);
                    cout << "Digite a habilidade do jogador: " << endl;
                    cin >> player;
                    ata[at].setHabilidade(player);
                    at++;
                }else{
                    cout << "Limite atingido! Insira qualquer caractere para voltar ao menu de jogadores:" << endl;
                    cin >> trow;
                    
                }
                goto MENUJOGADORES;

            }


        }else if(e == '2'){
            for(int i = 0; i<g;i++){
                if(gol[i].getNome() != "Cassio"){
                    cout << "Goleiro " << gol[i].getNome() << endl;
                    cout << "Camisa " << gol[i].getCamisa() << endl << "==============";
                }
            }
            for(int i = 0; i<d;i++){
                if(gol[i].getNome() != "Super 11"){
                    cout << "Defensor " << zag[i].getNome() << endl;
                    cout << "Camisa " << zag[i].getCamisa() << endl << "==============";
                }
            }
            for(int i = 0; i<at;i++){
                if(gol[i].getNome() != "Tsubasa"){
                    cout << "Atacante " << ata[i].getNome() << endl;
                    cout << "Camisa " << ata[i].getCamisa() << endl << "==============";
                }
            }
            cout << "Insira qualquer caractere para voltar ao menu de jogadores: " << endl;
            cin >> trow;
            goto MENUJOGADORES;
            


        }else if(e == '3'){
            y=0;
            cout << "Digite o nome do jogador que voce vai contratar: " << endl;
            cin >> jogadornome;
            for(int i = 0; i<g;i++){
                if(gol[i].getNome() == jogadornome){
                    cout << "Digite o nome do time que voce vai colocar o jogador: " << endl;
                    cin >> equipenome;
                    if(equipenome == "Floresta"){
                        flo.setGoleiro(gol[i]);
                        y=1;
                    }else if(equipenome == "Afogados"){
                        afo.setGoleiro(gol[i]);
                        y=1;
                    }else if(equipenome == "Tocantinopolis"){
                        toc.setGoleiro(gol[i]);
                        y=1;
                    }else if(equipenome == "Lagarto"){
                        lag.setGoleiro(gol[i]);
                        y=1;
                    }else{
                        for(int i=0;i<a;i++){
                            int in = escolha(equipenome, usuario[i]);
                            if(in == 1){
                                usuario[i].setGoleiro(gol[i]);
                                y=1;
                            }
                        }
                    }
                }
                
            }
            for(int i = 0; i<d;i++){
                if(zag[i].getNome() == jogadornome){
                    cout << "Digite 1 para ele ser um Fixo ou 2 para ele ser um Pivo" << endl;
                    cin >> def;
                    cout << "Digite o nome do time que voce vai colocar o jogador: " << endl;
                    cin >> equipenome;
                    if(def == 1){
                        if(equipenome == "Floresta"){
                            flo.setFixo(zag[i]);
                        }else if(equipenome == "Afogados"){
                            afo.setFixo(zag[i]);
                        }else if(equipenome == "Tocantinopolis"){
                            toc.setFixo(zag[i]);
                        }else if(equipenome == "Lagarto"){
                            lag.setFixo(zag[i]);
                        }else{
                            for(int i=0;i<a;i++){
                                int in = escolha(equipenome, usuario[i]);
                                if(in == 1){
                                    usuario[i].setFixo(zag[i]);
                                    break;
                                }
                            }
                        }
                    }else if(def == 2){
                        if(equipenome == "Floresta"){
                            flo.setPivo(zag[i]);
                        }else if(equipenome == "Afogados"){
                            afo.setPivo(zag[i]);
                        }else if(equipenome == "Tocantinopolis"){
                            toc.setPivo(zag[i]);
                        }else if(equipenome == "Lagarto"){
                            lag.setPivo(zag[i]);
                        }else{
                            for(int i=0;i<a;i++){
                                int in = escolha(equipenome, usuario[i]);
                                if(in == 1){
                                    usuario[i].setPivo(zag[i]);
                                    break;
                                }
                            }
                        }
                    }
                }
            }
            for(int i = 0; i<at;i++){
                if(ata[i].getNome() == jogadornome){
                    cout << "Digite 1 para ele ser um Ala Direita ou 2 para ele ser um Ala Esquerda" << endl;
                    cin >> atc;
                    cout << "Digite o nome do time que voce vai colocar o jogador: " << endl;
                    cin >> equipenome;
                    if(atc == 1){
                        if(equipenome == "Floresta"){
                            flo.setDireita(ata[i]);
                        }else if(equipenome == "Afogados"){
                            afo.setDireita(ata[i]);
                        }else if(equipenome == "Tocantinopolis"){
                            toc.setDireita(ata[i]);
                        }else if(equipenome == "Lagarto"){
                            lag.setDireita(ata[i]);
                        }else{
                            for(int i=0;i<a;i++){
                                int in = escolha(equipenome, usuario[i]);
                                if(in == 1){
                                    usuario[i].setDireita(ata[i]);
                                    break;
                                }
                            }
                        }
                    }else if(atc == 2){
                        if(equipenome == "Floresta"){
                            flo.setEsquerda(ata[i]);
                        }else if(equipenome == "Afogados"){
                            afo.setEsquerda(ata[i]);
                        }else if(equipenome == "Tocantinopolis"){
                            toc.setEsquerda(ata[i]);
                        }else if(equipenome == "Lagarto"){
                            lag.setEsquerda(ata[i]);
                        }else{
                            for(int i=0;i<a;i++){
                                int in = escolha(equipenome, usuario[i]);
                                if(in == 1){
                                    usuario[i].setEsquerda(ata[i]);
                                    break;
                                }
                            }
                        }
                    }
                }
            }
            
            if(y == 0){
                    cout << "Nenhum time com esse nome! Insira qualquer caractere e tente novamente" << endl;
                    goto MENUJOGADORES;
                }
            
            cout << "A contratacao deu certo! Insira qualquer caractere para voltar ao menu de jogadores: " << endl;
            cin >> trow;
            goto MENUJOGADORES;
            
        }else if(e == '4'){
            e = 0;
            goto MENU;
        }





    }
}


    x=0;
    INICIARPARTIDA:
{
    if(x == '4'){

        system("clear||cls");
        y = 0;
        cout << "Partidas disponiveis: " << endl;
        jogo1.printPartida();
        for(int i=0;i<10;i++){
            if ((jogos[i].getDia() != 30)&&(jogos[i].getMes() != 2)){
                cout << endl;
                jogos[i].printPartida();
            }
            
        }

        cout << "Digite o dia da partida que voce quer iniciar ou digite 0 para voltar ao menu: " << endl;
        cin >> c;
        if(c == 0){
            goto MENU;
        }
        cout << "Digite o mes da partida que voce quer iniciar: " << endl;
        cin >> c2;

        if((c == jogo1.getDia())&&(c2 == jogo1.getMes())){
            y = 1;
            goto JOGO1P;
        }else{
            for(int i=0;i<10;i++){
                if ((jogos[i].getDia() == c)&&(jogos[i].getMes() == c2)){
                    y = 1;
                    par = i;
                    goto JOGOSP;
                }
            }
        }
        if(y == 0){
            cout << "Nao ah partida nesse dia e mes!! Insira qualquer caractere para tentar novamente" << endl;
            cin >> trow;
            goto INICIARPARTIDA;
        }
    }
}

    x = 0;
    JOGO1P:
    if(x == '4'){
        
        system("clear||cls");
        y = 0;
        cout << "A partida comecou! Digite 1 para um gol do time de casa, 2 para um gol do time visitante e 0 para acabar a partida!" << endl;
        cin >> trow;

        if(trow == '1'){
            jogo1.addGolcasa();
            cout << "Lindo gol! Digite a posicao do jogador que fez o gol: " << endl;
            cout << "1 para o goleiro" << endl
            << "2 para o fixo (zagueiro)" << endl
            << "3 para o pivo (zagueiro)" << endl
            << "4 para o ala esquerda (atacante)" << endl
            << "5 para o ala direita (atacante)" << endl;
            cin >> trow;
            //somarcasa(jogo1, trow);
            //somarjogador(afo, trow);
            if(trow == '1'){
                jogo1.equipeCasa.goleiro.somaGols();
            }else if(trow == '2'){
                jogo1.equipeCasa.defensor[0].somaGols();
            }else if(trow == '3'){
                jogo1.equipeCasa.defensor[1].somaGols();
            }else if(trow == '4'){
                jogo1.equipeCasa.atacantes[0].somaGols();
            }else if(trow == '5'){
                jogo1.equipeCasa.atacantes[1].somaGols();
            }



            
        }else if(trow == '2'){
            jogo1.addGolvisita();
            cout << "Lindo gol! Digite a posicao do jogador que fez o gol: " << endl;
            cout << "1 para o goleiro" << endl
            << "2 para o fixo (zagueiro)" << endl
            << "3 para o pivo (zagueiro)" << endl
            << "4 para o ala esquerda (atacante)" << endl
            << "5 para o ala direita (atacante)" << endl;
            cin >> trow;
            //somarvisita(jogo1, trow);
            //somarjogador(flo, trow);
            if(trow == '1'){
                jogo1.equipeVisitante.goleiro.somaGols();
            }else if(trow == '2'){
                jogo1.equipeVisitante.defensor[0].somaGols();
            }else if(trow == '3'){
                jogo1.equipeVisitante.defensor[1].somaGols();
            }else if(trow == '4'){
                jogo1.equipeVisitante.atacantes[0].somaGols();
            }else if(trow == '5'){
                jogo1.equipeVisitante.atacantes[1].somaGols();
            }




        }else{
            cout << "Partida encerrada! Insira qualquer caractere para voltar ao menu de partidas: " << endl;
            cin >> trow;
            if(jogo1.getPlacarCasa() < jogo1.getPlacarVisitante()){
                jogo1.equipeVisitante.somaVitorias();
                jogo1.equipeCasa.somaDerrotas();
            }else if(jogo1.getPlacarCasa() > jogo1.getPlacarVisitante()){
                jogo1.equipeCasa.somaVitorias();
                jogo1.equipeVisitante.somaDerrotas();
            }else{
                jogo1.equipeCasa.somaEmpates();
                jogo1.equipeVisitante.somaEmpates();
            }
            afo = jogo1.equipeCasa;
            flo = jogo1.equipeVisitante;
            goto INICIARPARTIDA;
        }
        goto JOGO1P;

    }

    x = 0;
    JOGOSP:
    if(x == '4'){

        system("clear||cls");
        y = 0;
        cout << "A partida comecou! Digite 1 para um gol do time de casa, 2 para um gol do time visitante e 0 para acabar a partida!" << endl;
        cin >> trow;

        if(trow == '1'){
            jogos[par].addGolcasa();
            cout << "Lindo gol! Digite a posicao do jogador que fez o gol: " << endl;
            cout << "1 para o goleiro" << endl
            << "2 para o fixo (zagueiro)" << endl
            << "3 para o pivo (zagueiro)" << endl
            << "4 para o ala esquerda (atacante)" << endl
            << "5 para o ala direita (atacante)" << endl;
            cin >> trow;
            //somarcasaU(jogos, par, trow);
            if(trow == '1'){
                jogos[par].equipeCasa.goleiro.somaGols();
            }else if(trow == '2'){
                jogos[par].equipeCasa.defensor[0].somaGols();
            }else if(trow == '3'){
                jogos[par].equipeCasa.defensor[1].somaGols();
            }else if(trow == '4'){
                jogos[par].equipeCasa.atacantes[0].somaGols();
            }else if(trow == '5'){
                jogos[par].equipeCasa.atacantes[1].somaGols();
            }



        }else if(trow == '2'){
            jogos[par].addGolvisita();
            cout << "Lindo gol! Digite a posicao do jogador que fez o gol: " << endl;
            cout << "1 para o goleiro" << endl
            << "2 para o fixo (zagueiro)" << endl
            << "3 para o pivo (zagueiro)" << endl
            << "4 para o ala esquerda (atacante)" << endl
            << "5 para o ala direita (atacante)" << endl;
            cin >> trow;
            //somarvisitaU(jogos, par, trow);
            if(trow == '1'){
                jogos[par].equipeVisitante.goleiro.somaGols();
            }else if(trow == '2'){
                jogos[par].equipeVisitante.defensor[0].somaGols();
            }else if(trow == '3'){
                jogos[par].equipeVisitante.defensor[1].somaGols();
            }else if(trow == '4'){
                jogos[par].equipeVisitante.atacantes[0].somaGols();
            }else if(trow == '5'){
                jogos[par].equipeVisitante.atacantes[1].somaGols();
            }



        }else{
            cout << "Partida encerrada! Insira qualquer caractere para voltar ao menu de partidas: " << endl;
            cin >> trow;
            if(jogos[par].getPlacarCasa() < jogos[par].getPlacarVisitante()){
                jogos[par].equipeVisitante.somaVitorias();
                jogos[par].equipeCasa.somaDerrotas();
            }else if(jogos[par].getPlacarCasa() > jogos[par].getPlacarVisitante()){
                jogos[par].equipeCasa.somaVitorias();
                jogos[par].equipeVisitante.somaDerrotas();
            }else{
                jogos[par].equipeCasa.somaEmpates();
                jogos[par].equipeVisitante.somaEmpates();
            }

            if(jogos[par].equipeCasa.getNome() == flo.getNome()){
                flo = jogos[par].equipeCasa;
            }else if(jogos[par].equipeCasa.getNome() == afo.getNome()){
                afo = jogos[par].equipeCasa;
            }else if(jogos[par].equipeCasa.getNome() == toc.getNome()){
                toc = jogos[par].equipeCasa;
            }else if(jogos[par].equipeCasa.getNome() == lag.getNome()){
                lag = jogos[par].equipeCasa;
            }else{
                for(int i = 0; i < 10; i++){
                    if(usuario[i].getNome() == jogos[par].equipeCasa.getNome()){
                        usuario[i] = jogos[par].equipeCasa;
                    }
                }
            }

            if(jogos[par].equipeVisitante.getNome() == flo.getNome()){
                flo = jogos[par].equipeVisitante;
            }else if(jogos[par].equipeVisitante.getNome() == afo.getNome()){
                afo = jogos[par].equipeVisitante;
            }else if(jogos[par].equipeVisitante.getNome() == toc.getNome()){
                toc = jogos[par].equipeVisitante;
            }else if(jogos[par].equipeVisitante.getNome() == lag.getNome()){
                lag = jogos[par].equipeVisitante;
            }else{
                for(int i = 0; i < 10; i++){
                    if(usuario[i].getNome() == jogos[par].equipeVisitante.getNome()){
                        usuario[i] = jogos[par].equipeVisitante;
                    }
                }
            }


            goto INICIARPARTIDA;
        }
        goto JOGOSP;
    }















/*
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

    cin >> x;

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
        cout << "Digite o nome do seu equipe ou digite 1 para voltar ao menu : " << endl;
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
        goto MENU;
    }
    
    x = 0;
    VERJOGADORES:
    if(x == '2' || x == '4'){
        system("clear||cls");
        cout << "Escolha o equipe que voce quer ver ou digite 1 para voltar ao menu: " << endl;
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

                cin >> x;

                if(x == '1'){
                    goto MENU;
                }
            }else{
                cout << "Nome errado!" << endl;
                goto VERJOGADORES;
            }
        }

    }
    */

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