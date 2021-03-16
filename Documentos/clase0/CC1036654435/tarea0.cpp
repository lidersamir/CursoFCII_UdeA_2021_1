// Clases: es una estructura que sirve para especificar las variables y funciones, es decir las caracteristicas que se aplicaran a los datos.
// POO: es una entidad que se construye a partir de las clases, accede a los datos y funciona como variables con las propiedades especificas de las clases.

#include<iostream>
using namespace std;

int main(){
    int a,b,suma = 0;
    cout << "Digite un numero: "; cin >> a;
	cout << "Digite otro numero: "; cin >> b;

    suma = a + b;

    cout << "\nLa suma es: " << suma << endl;
    return 0;
}