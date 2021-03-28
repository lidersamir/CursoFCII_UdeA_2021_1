#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;


int main()
{
    enum Estado {NO,SI};
    Estado state;
    srand(time(NULL));
    state=NO;
    cout<<"Adivine un numero del 1 al 1000."<< endl;
    int x;
    string d;
    int num= 1+rand() %1000;
    while (state==NO)
    {   
        cout<< "Ingrese numero: "<< endl;
        cin>>x;
        if (cin.fail())
        {
            cout<<"Por favor ingrese un entero"<< endl;
            cin.clear();
            cin.ignore();
        }
        else if (x == num)
        {
            cout<<"Gano! Desea jugar de nuevo? (s/n)"<< endl;
            cin>> d;
            if(d== "n")
            state=SI;
            else if(d=="s")
            num=1+ rand() %1000;

        }
        else if (x<num)
        cout<<"No adivino; el numero es mayor."<< endl;
        else 
        cout<<"No adivino; el numero es menor."<< endl;
        
    }
    cout<< "Gracias por jugar!"<<endl;
 return 0;   
}