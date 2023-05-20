#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "equipe.h"
using namespace std;

class partida{
    private:
    int dia, mes;
    int placarCasa;
    int placarVisitante;
    

    public:
    equipe equipeCasa;
    equipe equipeVisitante;


    partida(){
        dia = 30;
        mes = 02;
        placarCasa = 0;
        placarVisitante = 0;
    }

    partida(int d, int m){
        dia = d;
        mes = m;
        placarCasa = 0;
        placarVisitante = 0;
    }

    partida(int d, int m, string c, string v){
        dia = d;
        mes = m;
        equipeCasa.setNome(c);
        equipeVisitante.setNome(v);

        placarCasa = 0;
        placarVisitante = 0;
    }


    void setDia(int data) { 
        this->dia = data; 
        } 
    int getDia() { 
        return this->dia; 
        }
    void setMes(int mes){
        this->mes = mes;
    }
    int getMes(){
        return this->mes;
    }


    void setPlacarCasa(int placarCasa) {
        this->placarCasa = placarCasa;
        } 
    int getPlacarCasa() {
        return this->placarCasa;
        }
    void setPlacarVisitante(int placarVisitante) {
        this->placarVisitante = placarVisitante;
        } 

    void addGolcasa(){
        placarCasa++;
    }

    void addGolvisita(){
        placarVisitante++;
    }

    int getPlacarVisitante() {
        return this->placarVisitante;
        }

    void getPlacar(){
        cout << equipeCasa.getNome() << ": "<< getPlacarCasa() << " / " << equipeVisitante.getNome() << ": "<< getPlacarVisitante() << endl;
    }


    void setequipecasa(equipe a){
        equipeCasa = a;
    }

    void setequipevisitante(equipe b){
        equipeVisitante = b;
    }

    string getEquipecasa(){
        return equipeCasa.getNome();
    }

    string getEquipevisitante(){
        return equipeVisitante.getNome();
    }



    void printPartida(){
        cout << "Jogo na data: " << getDia() << "/" << getMes() << endl;
        cout << "equipe de Casa: " << equipeCasa.getNome() << endl << "equipe Visitante: " << equipeVisitante.getNome() << endl;
        getPlacar();
    }


};