#include<iostream>

using namespace std;

class craps 
{
public:
    void main_game();
    int tirar_dados();
    void get_bet();
    int saldo;
    int ganadas = 0; // Veces que se ha ganado de manera seguida
    int perdidas = 0; // Veces que se ha perdido de manera seguida
private:
int suma_dados;
string tirar;
int apuesta;

};