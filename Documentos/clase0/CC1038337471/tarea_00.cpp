// Define Clase: En programacion se habla de clase para hacer referencia a una estructura de codigo bien definida con determinadas caracteristicas o funciones.

// Define POO (Programacion Orientada a Objetos): Es una tecnica de programacion que permite reutilizar codigo.


#include <iostream>
using namespace std;
int main()
{
    int x,y, suma;

    cout <<"ingrese el primer numero: ";
    cin >> x;
    cout <<"ingrese el segundo numero: ";
    cin >> y;

    suma = x + y;
    cout << "El valor de la suma es: ";
    cout << x <<"+"<< y << "=" << suma;
    return 0;

}
