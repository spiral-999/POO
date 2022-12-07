#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <conio.h>
#include "jogador.h"
using namespace std;

class equipe{

    private:
    string Nome;
    
    int Vitorias;
    int Derrotas;
    int Empates;
    jogadorAtaque atacantes[2];
    jogadorDefesa defensor[2];
    jogadorGoleiro goleiro;
    
    public:
    equipe(){
        Nome = "Floresta";
        Vitorias = 0;
        Derrotas = 0;
        Empates = 0;
    }

    equipe(string n){
        Nome = n;
        Vitorias = 0;
        Derrotas = 0;
        Empates = 0;
    }

    void setNome(string Nome) {
        this->Nome = Nome;
        } 
    string getNome() {
        return this->Nome;
        }
    void setVitorias(int Vitorias) {
        this->Vitorias = Vitorias;
        } 
    int getVitorias() {
        return this->Vitorias;
        }
    void setDerrotas(int Derrotas) {
        this->Derrotas = Derrotas;
        } 
    int getDerrotas() {
        return this->Derrotas;
        }
    void setEmpates(int Empates) {
        this->Empates = Empates;
        } 
    int getEmpates() {
        return this->Empates;
        }

    void somaVitorias(){
        Vitorias++;
    }

    void somaDerrotas(){
        Derrotas++;
    }

    void somaEmpates(){
        Empates++;
    }

    void printequipe(){
        cout << "Equipe : " << getNome() << endl << "================" << endl;
        cout << "Goleiro : " << goleiro.getNome() << goleiro.getCamisa() << endl << "================" << endl;
        cout << "Ala Esquerda : " << atacantes[0].getNome() << atacantes[0].getCamisa() << endl << "================" << endl;
        cout << "Ala Direita : " << atacantes[1].getNome() << atacantes[1].getCamisa() << endl << "================" << endl;
        cout << "Fixo : " << defensor[0].getNome() << defensor[0].getCamisa() << endl << "================" << endl;
        cout << "Pivo : " << defensor[1].getNome() << defensor[1].getCamisa()<< endl << "================" << endl;
    }

    void setGoleiro(jogadorGoleiro g){
        goleiro = g;
    }
    void setEsquerda(jogadorAtaque a){
        atacantes[0] = a;
    }
    void setDireita(jogadorAtaque b){
        atacantes[1] = b;
    }
    void setFixo(jogadorDefesa a){
        defensor[0] = a;
    }
    void setAla(jogadorDefesa b){
        defensor[1] = b;
    }
    
};
