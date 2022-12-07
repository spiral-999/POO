#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "equipe.h"
using namespace std;

class partida{
    private:
    
    int dia;
    int mes;
    int placarCasa;
    int placarVisitante;
    equipe equipeCasa;
    equipe equipeVisitante;

    public:


    partida(){
        dia = 15;
        mes = 2;
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


    void setDia(int x) { 
        this->dia = x; 
        } 
    int getDia() { 
        return this->dia; 
        }
    void setMes(int data) { 
        this->mes = data; 
        } 
    int getMes() { 
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
    void printPartida(){
        cout << "equipe de Casa: " << equipeCasa.getNome() << endl << "equipe Visitante: " << equipeVisitante.getNome() << endl;
        getPlacar();
    }


};
