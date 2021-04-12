#include<iostream>
#include<cmath>
#include "Craps.h"

using namespace std;

int main()
{
    craps juego;
    juego.saldo = 1000000;
    int init_saldo = juego.saldo;
    enum Estado { NO, SI};
    Estado jugar;
    jugar = SI;
    cout<< "Bienvenido al juego de craps. " << endl; 
    cout<< "Su saldo inicial en banco es de: " << juego.saldo << endl;
    while (jugar == SI)
    {
        int saldo_ant = juego.saldo;
        juego.main_game();
        int change = saldo_ant - juego.saldo;
        if (change > saldo_ant/4)
        {
            cout << "Vaya perdida! La proxima sera."<< endl;
        }
        if (abs(change) > saldo_ant/4 and change < 0)
        {
            cout << "Felicitaciones! Que buena ganacia."<< endl;
        }
        if (juego.saldo < init_saldo/4)
        {
            cout << "Se esta quedando sin fondos, pienselo!" << endl;
        }
        if (juego.ganadas >= 2)
        {
            cout << "Que buena racha! siga asi"<< endl;
        }
        if (juego.perdidas >=2)
        {
            cout << "Hoy no es su dia de suerte! La proxima seguro gana."<< endl;
        }
        if (juego.saldo > 1.5*init_saldo)
        {
            cout << "Quisiera tener su suerte! buen saldo a favor."<<endl;
        }
        if (juego.saldo == 0)
        {
            cout << "Lo siento, se quedo sin fondos!";
            break;
        }
        cout<<"Desea jugar de nuevo? (s/n)"<< endl;
        string d;
        cin >> d;
        while (d != "s" or cin.fail())
        {   
            if(d == "n"){
                jugar = NO;
                cout << "Gracias por jugar, su saldo final es: " << juego.saldo << endl;
                break;}
            else
            {
                cout<<"Por favor ingrese una opcion valida: "<< endl;
                cin.clear();
                cin.ignore();
                cin >> d;
            }    
        }
    }
    

    return 0;
}