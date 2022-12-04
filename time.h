#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "jogador.h"
using namespace std;

class time{

    private:
    string Nome;
    
    int Vitorias;
    int Derrotas;
    int Empates;

    public:
    jogadorAtaque atacantes[2];
    jogadorDefesa defensor[2];
    jogadorGoleiro goleiro;
    time(){
        Nome = "floresta";
        Vitorias = 0;
        Derrotas = 0;
        Empates = 0;
    }

    time(string n){
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

    void printTime(){
        cout << "Time : " << getNome() << endl << "================" << endl;
        cout << "Goleiro : " << goleiro.getNome() << endl << "================" << endl;
        cout << "Ala Esquerda : " << atacantes[0].getNome() << endl << "================" << endl;
        cout << "Ala Direita : " << atacantes[1].getNome() << endl << "================" << endl;
        cout << "Fixo : " << defensor[0].getNome() << endl << "================" << endl;
        cout << "Pivo : " << defensor[1].getNome() << endl << "================" << endl;
    }
};