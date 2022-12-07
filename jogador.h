#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <cstdlib>
#include <ctime>
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

int random(int y){
    int x;
    srand(y);
    x = rand()%10+1;
    return x;
}

float altura(){
    float x;
    float y;
    srand(time(0));
    x = rand()%2+1;
    srand(time(0));
    y = rand()%9+7;
    y = y/10;
    if(x == 2){
        y = 0.1;
    }
    x = x+y;
    return x;
}

string batizo(int x){
    x = random(x);
    if(x == 1){
        return "Baptista";
    }else if(x == 2){
        return "Thiago";
    }else if(x == 3){
        return "Manuel Gomi";
    }else if(x == 4){
        return "Patrick Bateman";
    }else if(x == 5){
        return "Tyler Durdeen";
    }else if(x == 6){
        return "Vicente";
    }else if(x == 7){
        return "Colapso";
    }else if(x == 8){
        return "Alce Ione";
    }else if(x == 9){
        return "Foca Bilota";
    }else if(x == 10){
        return "Paulo Tapioca";
    }
}



class jogadorGoleiro:virtual public jogador{

    private:
    int Reflexos;
    float Altura;

    public:
    jogadorGoleiro(){
        int y;
        int x;

        srand(time(0));
        x = rand()%10000+1000;

        Nome = batizo(x);
        Idade = 30;
        Habilidade = random(x);
        Gols = 0;
        Camisa = random(x);
        Reflexos = random(x);
        Altura = altura();
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
        int x;

        srand(time(0));
        x = rand()%100+1;
        Nome = batizo(x);
        Idade = 20;
        x+=983;
        Habilidade = random(x);
        Gols = 0;
        x+=89;
        Camisa = random(x);
        x+=981;
        Cobertura = random(x);
        x+=891;
        Desarme = random(x);
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
        int x;

        srand(time(0));
        x = rand()%100000000+100000;
        Nome = batizo(x);
        Idade = 19;
        x+=8913;
        Habilidade = random(x);
        Gols = 0;
        x+=921;
        Camisa = random(x);
        x+=871;
        Velocidade = random(x);
        x+=1278;
        Tecnica = random(x);
    };
    jogadorAtaque(string n, int i, int h, int g, int c, int r, int a){
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
