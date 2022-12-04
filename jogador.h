#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class jogador{
    private:
    string Nome;
    int Idade;
    int Habilidade;
    int Gols;
    int Camisa;  

    public:
    void setNome(string Nome) {
        this->Nome = Nome;
    } 
    string getNome() {
        return this->Nome;
    }
    void setIdade(int Idade) {
        this->Idade = Idade;
    } 
    int getIdade() {
        return this->Idade;
    }
    void setHabilidade(int Habilidade) {
        this->Habilidade = Habilidade;
    } 
    int getHabilidade() {
        return this->Habilidade;
    }
    void setGols(int Gols) {
        this->Gols = Gols;
    } 
    int getGols() {
        return this->Gols;
    }
    void setCamisa(int Camisa) {
        this->Camisa = Camisa;
    } 
    int getCamisa() {
        return this->Camisa;
    }
    void somaGols(){
        Gols++;
    }
    friend class jogadorGoleiro;
    friend class jogadorDefesa;
    friend class jogadorAtaque;
};

class jogadorGoleiro:virtual public jogador{

    private:
    int Reflexos;
    float Altura;

    public:
    jogadorGoleiro(){
        Nome = "Cassio";
        Idade = 30;
        Habilidade = 10;
        Gols = 0;
        Camisa = 5;
        Reflexos = 9;
        Altura = 1,80;
    };
    jogadorGoleiro(string n, int i, int h, int g, int c, int r, float a){
        Nome = n;
        Idade = i;
        Habilidade = h;
        Gols = g;
        Camisa = c;
        Reflexos = r;
        Altura = a;

    };
    void setReflexos(int Reflexos) {
        this->Reflexos = Reflexos;
        } 
    int getReflexos() {return this->Reflexos;
    }
    void setAltura(float Altura) {
        this->Altura = Altura;
        } 
    float getAltura() {
        return this->Altura;
        }

    int somaHabilidade(){
        int h;
        h = ((getHabilidade() * 5) + ((Altura * 100) * 2) + (Reflexos*3))/10;
    }
};

class jogadorDefesa:virtual public jogador{
    private:
    int Cobertura;
    int Desarme;

    public:
    jogadorDefesa(){
        Nome = "Super 11";
        Idade = 14;
        Habilidade = 10;
        Gols = 0;
        Camisa = 5;
        Cobertura = 10;
        Desarme = 5;
    };
    jogadorDefesa(string n, int i, int h, int g, int c, int r, int a){
        Nome = n;
        Idade = i;
        Habilidade = h;
        Gols = g;
        Camisa = c;
        Cobertura = r;
        Desarme = a;
    };
    void setCobertura(int Cobertura) {
        this->Cobertura = Cobertura;
        } 
    int getCobertura() {
        return this->Cobertura;
        }
    void setDesarme(int Desarme) {
        this->Desarme = Desarme;
        } 
    int getDesarme() {
        return this->Desarme;
        }

        int somaHabilidade(){
        int h;
        h = ((getHabilidade() * 5) + ((Cobertura * 3)) + (Desarme * 2))/10;
        }

};

class jogadorAtaque:virtual public jogador{
    private:
    int Velocidade;
    int Tecnica;

    public:
    jogadorAtaque(){
        Nome = "Tsubasa";
        Idade = 19;
        Habilidade = 10;
        Gols = 0;
        Camisa = 5;
        Velocidade = 10;
        Tecnica = 10;
    };
    jogadorAtaque(string n, int i, int h, int g, int c, int r, float a){
        Nome = n;
        Idade = i;
        Habilidade = h;
        Gols = g;
        Camisa = c;
        Velocidade = r;
        Tecnica = a;
    };
    void setVelocidade(int Velocidade) {
        this->Velocidade = Velocidade;
        } 
    int getVelocidade() {
        return this->Velocidade;
        }
    void setTecnica(int Tecnica) {
        this->Tecnica = Tecnica;
        } 
    int getTecnica() {
        return this->Tecnica;
        }

    int somaHabilidade(){
        int h;
        h = ((getHabilidade() * 5) + ((Velocidade * 2)) + (Tecnica * 3))/10;
        }

};