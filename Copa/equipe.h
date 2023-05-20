#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "jogador.h"
using namespace std;

class equipe{

    private:
    string Nome;
    
    int Vitorias;
    int Derrotas;
    int Empates;
    
    
    public:
    jogadorAtaque atacantes[2];
    jogadorDefesa defensor[2];
    jogadorGoleiro goleiro;
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
        cout << "Equipe:       " << getNome()              << endl << "Vitorias: " << getVitorias() << "|Empates: " << getEmpates() << "|Derrotas: " << getDerrotas() << endl << "======================================================" << endl;
        cout << "Goleiro:      " << goleiro.getNome()      << endl << "Camisa: " << goleiro.getCamisa()      << "| Gols: " << goleiro.getGols()      << "| Habilidade: " << goleiro.somaHabilidade()      << endl << "======================================================" << endl;
        cout << "Ala Esquerda: " << atacantes[0].getNome() << endl << "Camisa: " << atacantes[0].getCamisa() << "| Gols: " << atacantes[0].getGols() << "| Habilidade: " << atacantes[0].somaHabilidade() << endl << "======================================================" << endl;
        cout << "Ala Direita:  " << atacantes[1].getNome() << endl << "Camisa: " << atacantes[1].getCamisa() << "| Gols: " << atacantes[1].getGols() << "| Habilidade: " << atacantes[1].somaHabilidade() << endl << "======================================================" << endl;
        cout << "Fixo:         " << defensor[0].getNome()  << endl << "Camisa: " << defensor[0].getCamisa()  << "| Gols: " << defensor[0].getGols()  << "| Habilidade: " << defensor[0].somaHabilidade()  << endl << "======================================================" << endl;
        cout << "Pivo:         " << defensor[1].getNome()  << endl << "Camisa: " << defensor[1].getCamisa()  << "| Gols: " << defensor[1].getGols()  << "| Habilidade: " << defensor[1].somaHabilidade()  << endl << "======================================================" << endl;
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
    void setPivo(jogadorDefesa b){
        defensor[1] = b;
    }
    
    void habilidades(float h, int gh, int gc, int gr, int dh, int dc, int dco, int dd, int ah, int ac, int av, int at){
        goleiro.setAltura(h);
        goleiro.setHabilidade(gh);
        goleiro.setCamisa(gc);
        goleiro.setReflexos(gr);

        defensor[0].setHabilidade(dh);
        defensor[0].setCamisa(dc);
        defensor[0].setCobertura(dco);
        defensor[0].setDesarme(dd);
        defensor[1].setHabilidade(dh+1);
        defensor[1].setCamisa(dc+3);
        defensor[1].setCobertura(dco+2);
        defensor[1].setDesarme(dd+1);

        atacantes[0].setHabilidade(ah+5);
        atacantes[0].setCamisa(ah);
        atacantes[0].setVelocidade(av);
        atacantes[0].setTecnica(at);
        atacantes[1].setHabilidade(ah+2);
        atacantes[1].setCamisa(ah+3);
        atacantes[1].setVelocidade(av-2);
        atacantes[1].setTecnica(at+3);
    }

    void setNomes(string a, string b, string c, string d, string e){
        goleiro.setNome(a);
        defensor[0].setNome(b);
        defensor[1].setNome(c);
        atacantes[0].setNome(d);
        atacantes[1].setNome(e);
    }


};