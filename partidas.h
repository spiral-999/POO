#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "time.h"
using namespace std;

class partida{
    private:
    string data;
    int placarCasa;
    int placarVisitante;
    time timeCasa;
    time timeVisitante;

    public:


    partida(){
        data = "30/02";
        placarCasa = 0;
        placarVisitante = 0;
    }

    partida(string d){
        data = d;
        placarCasa = 0;
        placarVisitante = 0;
    }

    partida(string d, string c, string v){
        data = d;
        timeCasa.setNome(c);
        timeVisitante.setNome(v);

        placarCasa = 0;
        placarVisitante = 0;
    }


    void setData(string data) { 
        this->data = data; 
        } 
    string getData() { 
        return this->data; 
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
        cout << timeCasa.getNome() << ": "<< getPlacarCasa() << " / " << timeVisitante.getNome() << ": "<< getPlacarVisitante() << endl;
    }


    void setTimecasa(time a){
        timeCasa = a;
    }

    void setTimevisitante(time b){
        timeVisitante = b;
    }
    void printPartida(){
        cout << "Time de Casa: " << timeCasa.getNome() << endl << "Time Visitante: " << timeVisitante.getNome() << endl;
        getPlacar();
    }


};