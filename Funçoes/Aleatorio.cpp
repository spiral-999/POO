#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int valor;
    srand(time(0));

    valor = rand()%100;

    cout << valor << endl;

}