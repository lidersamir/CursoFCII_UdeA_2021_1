#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
#include"Tarea_3.h"

using namespace std;

Guess::Guess(){}
	
void Guess::Adivinanza(){

	while(val==1){
	
		srand(time(NULL));
		eleccion=1+rand()%(1000+1-1);
	
		cout<<"Bienvenido al juego de adivinanzas. La aplicación ha elegido un número del 1 al 1000 y usted debe intentar adivinarlo. Ingrese un número: "<<endl;
	
		for(int i=0;i<1000;i++){
		
			cin>>numeros[i];
			if (numeros[i]==eleccion){
				cout<<"Ha adivinado, ¡felicitaciones! El juego ha terminado."<<endl;
				cout<<"Si desea jugar de nuevo pulse el 1, de lo contrario ingrese cualquier otro valor."<<endl;
				cin>>val;
				break;}
			
			else if(numeros[i]!=eleccion){
			
				if(eleccion>numeros[i]){
					cout<<""<<numeros[i]<<" es menor que el número elegido por el programa. Digite un nuevo número:"<<endl;}
					
				else{
					cout<<""<<numeros[i]<<" es mayor que el número elegido por el programa. Digite un nuevo número:"<<endl;}	
			}
		}
	}
}
	
