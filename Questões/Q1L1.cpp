#include<iostream>
#include<string>
using namespace std;

class Mercado{
    //protected:
        //string nome, endereco, cidade, estado, CEP, telefone;
    public:
    string nome, endereco, cidade, estado, CEP, telefone;
        Mercado(string nome, string endereco, string cidade, string estaddo, string CEP, string telefone){
            this-> nome = nome;
            this-> endereco = endereco;
            this-> cidade = cidade;
            this-> estado = estado;
            this-> CEP = CEP;
            this-> telefone = telefone;
        }
        Mercado();
        void setnome(string nome){
            this-> nome = nome;
        }
        string getnome(){
            return nome;
        }
        void setendereco(string endereco){
            this-> endereco = endereco;
        }
        string getendereco(){
            return endereco;
        }
        void setcidade(string cidade){
            this-> cidade = cidade;
        }
        string getcidade(){
            return cidade;
        }
        void setestado(string estado){
            this-> estado = estado;
        }
        string getestado(){
            return estado;
        }
        void setCEP(string CEP){
            this-> CEP = CEP;
        }
        string getCEP(){
            return CEP;
        }
        void settelefone(string telefone){
            this-> telefone = telefone;
        }
        string gettelefone(){
            return telefone;
        }
        void print(){
            cout << "Nome : " << nome << endl << "Endereco : " << endereco << endl << "Cidade : " << cidade << endl << "Estado : " << estado << endl << "CEP : " << CEP << endl << "Telefone : " << telefone << endl;
        }
};

class Restaurante: public Mercado{
    private:
        string prato1, prato2, prato3;
        float preco1, preco2, preco3;
    public:
        Restaurante(string prato1, string prato2, string prato3, float preco1, float preco2, float preco3) : Mercado(){
            this-> nome = nome;
            this-> endereco = endereco;
            this-> cidade = cidade;
            this-> estado = estado;
            this-> CEP = CEP;
            this-> telefone = telefone;
            this-> prato1 = prato1;
            this-> prato2 = prato2;
            this-> prato3 = prato3;
            this-> preco1 = preco1;
            this-> preco2 = preco2;
            this-> preco3 = preco3;
        }
        void setprato1(string prato1){
            this-> prato1 = prato1;
        }
        string getprato1(){
            return prato1;
        }
        void setprato2(string prato2){
            this-> prato2 = prato2;
        }
        string getprato2(){
            return prato2;
        }
        void setprato3(string prato3){
            this-> prato3 = prato3;
        }
        string getprato3(){
            return prato3;
        }
        void setpreco1(float preco1){
            this-> preco1 = preco1;
        }
        float getpreco1(){
            return preco1;
        }
        void setpreco2(float preco2){
            this-> preco2 = preco2;
        }
        float getpreco2(){
            return preco2;
        }
        void setpreco3(float preco3){
            this-> preco3 = preco3;
        }
        float getpreco3(){
            return preco3;
        }
        void print2(){
            print();
            cout << "Primeiro Prato : " << prato1 << "--- " << preco1 << endl << "Segundo Prato : " << prato2 << "--- " << preco2 << "Terceiro Prato : " << prato3 << "--- " << preco3 << endl;
        }
};

int main(){
    //Restaurante churrascaria("Churrascaria", "Endereco", "Cidade","Estado", "CEP", "Telefone", "Prato1", "Prato2", "Prato3", 0.00, 0.00, 0.00);
    Mercado churrascaria("Churrascaria", "Endereco", "Cidade","Estado", "CEP", "Telefone");
    Restaurante churrasc("Prato1", "Prato2", "Prato3", 0.00, 0.00, 0.00);
    
    Restaurante A("Churrascaria", "Endereco", "Cidade","Estado", "CEP", "Telefone", "Prato1", "Prato2", "Prato3", 0.00, 0.00, 0.00);

    churrascaria.print();

    
}
