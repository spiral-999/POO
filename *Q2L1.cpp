#include <iostream>
#include <string>
using namespace std;

class Veiculo{
    private:
        int peso, velocidade, preco;
    public:
        Veiculo(){};
        Veiculo(int peso, int velocidade, int preco){
            this-> peso = peso;
            this-> velocidade = velocidade;
            this-> preco = preco;
        }
        void setpeso(int peso){
            this-> peso = peso;    
        }
        int getpeso(){
            return peso;
        }
        void setvelocidade(int velocidade){
            this-> velocidade = velocidade;    
        }
        int getpreco(){
            return preco;
        }
        void setpreco(int preco){
            this-> preco = preco;    
        }
        int getpreco(){
            return preco;
        }
};

class Motor{
    private:
        int cilindros, potencia;
    public:
        Motor(){};
        Motor(int cilindros, int potencia){
            this-> cilindros = cilindros;
            this-> potencia = potencia;
        }
        void setcilindros(int cilindros){
            this-> cilindros = cilindros;
        }
        int getcilindros(){
            return cilindros;
        }
        void setpotencia(int potencia){
            this-> potencia = potencia;
        }
        int getpotencia(){
            return potencia;
        }
};

class CarroPasseio: public Veiculo, public Motor{
    private:
        string modelo, cor;
    public:
        CarroPasseio(): Veiculo(), Motor(){};
        CarroPasseio(string modelo, string cor): Veiculo(), Motor(){
            modelo = "Fusca";
            cor = "Preto";
            this-> modelo = modelo;
            this-> cor = cor;
        }
        void setmodelo(string modelo){
            this-> modelo = modelo;
        }
        string getmodelo(){
            return modelo;
        }
        void setcor(string cor){
            this-> cor = cor;
        }
        string getcor(){
            return cor;
        }
        void print(){
            cout << "Modelo : " << modelo << endl << "Cor : " << cor << endl;
        }
};

int main(){
    CarroPasseio carro;
    carro.print();
}
