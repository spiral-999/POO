// bibliotecas
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// classe
class Membros{
    private:
        // nivel de acesso privado
        string nome, ocupacao, email, senha;
        int idade;
        char sexo;
    public: // nivel de acesso publico
        // construtor
        Membros(string nome, string ocupacao, string email, string senha, int idade, char sx){
            this->nome = nome;
            this->ocupacao = ocupacao;
            this->email = email;
            this->senha = senha;
            this->idade = idade;
            sx = sexo;
        }

        // set e get
        void setnome(string nome){
            this -> nome = nome;
        }
        string getnome(){
            cout << nome;
            return nome;
        }
        void setocupacao(string ocupacao){
            this -> ocupacao = ocupacao;
        }
        string getocupacao(){
            cout << ocupacao;
            return ocupacao;
        }
        void setemail(string email){
            this -> email = email;
        }
        string getemail(){
            cout << email;
            return email;
        }
        void setsenha(string senha){
            this -> senha = senha;
        }
        string getsenha(){
            cout << senha;
            return senha;
        }
        void setidade(int idade){
            this -> idade = idade;
        }
        int getidade(){
            cout << idade;
            return idade;
        }
        void setsexo(char sx){
            sexo = sx;
        }
        char getsexo(){
            cout << sexo;
            return sexo;
        }
        void print(){
            cout << "Nome : " << nome << endl << "Ocupacao : " << ocupacao << endl << "Email : " << email << endl << "Senha : " << senha << endl << "Idade : " << idade << endl <<  "Sexo : " << sexo;
        }
};

int main(){
    
    cout << "Qual a sua ocupacao?" << endl;
    cout << "Digite 1, 2 ou 3" << endl;
    cout << "1 - Professor, 2 - Tecnico, 3 - Aluno" << endl;
    int ocupacao; cin >> ocupacao;
    cout << endl;
    if(ocupacao == 1){
        Membros Professor("Placeholder Nome Professor", "Professor", "professor@gmail.com", "Placeholder Senha Professor", 0 , '?');
        Professor.print();
    }
    else if(ocupacao == 2){
        Membros Tecnico("Placeholder Nome Tecnico", "Tecnico", "tecnico@gmail.com", "Placeholder Senha Tecnico", 0, '?');
        Tecnico.print();
    }
    else if(ocupacao == 3){
        Membros Aluno("Placeholder Nome Aluno", "Aluno", "aluno@gmail.com", "Placeholder Senha Aluno", 0, '?');
        Aluno.print();
    }

    return 0;
}