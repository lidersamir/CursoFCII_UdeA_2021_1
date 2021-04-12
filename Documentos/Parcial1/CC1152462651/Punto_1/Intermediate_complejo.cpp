#include<iostream>
#include<cmath>
#include"Complejo.h"

using namespace std;


Complejo::Complejo(){}//Se define el constructor de la clase

//AsignarDatos recibe los valores ingresados por el usuario y los guarda en los datos privados ParteReal y Parte Imaginaria.
void Complejo::AsignarDatos(double a,double b){
	ParteReal=a;
	ParteImaginaria=b;
}

//Imprime la parte real del número complejo
void Complejo::ObtenerParteReal(){
	cout<<"La parte real de "<<ParteReal<<" + ("<<ParteImaginaria<<")i, es: "<<ParteReal<<endl;
}
//Imprime la parte imaginaria del número complejo
void Complejo::ObtenerParteImaginaria(){
	cout<<"La parte imaginaria de "<<ParteReal<<" + ("<<ParteImaginaria<<")i, es: "<<ParteImaginaria<<endl;
}

void Complejo::MostrarComplejo(){
/*En caso de que algunas de las operaciones definidas(suma, resta o multiplicación) de como resultado un numero complejo cuya parte real o imaginaria sea cero, se hace una distinción según sea el caso.*/
	
	if(ParteImaginaria==0){
		cout<<"Se trata del número real "<<ParteReal<<endl;}
	else if (ParteReal==0){
		cout<<"Se trata de un imaginario puro. El imaginario puro es: "<<ParteImaginaria<<endl;}
	else{
	cout<<"El número complejo es: "<<ParteReal<<" + ("<<ParteImaginaria<<")i"<<endl;}
}
void Complejo::Suma(Complejo c1, Complejo c2){

	ParteReal=c1.ParteReal+c2.ParteReal;/*Se redefine el dato privado ParteReal como la suma de las partes reales de los objetos que recibe la función*/
	ParteImaginaria=c1.ParteImaginaria+c2.ParteImaginaria;//Análogamente para la parte imaginaria.
}

void Complejo::Resta(Complejo c1, Complejo c2){
	ParteReal=c1.ParteReal-c2.ParteReal;/*Se redefine el dato privado ParteReal como la resta de las partes reales de los objetos que recibe la función*/
	ParteImaginaria=c1.ParteImaginaria-c2.ParteImaginaria;//Análogamente para la parte imaginaria.
}

/* Es posible programar otra operación entre complejos que sea diferente de la suma y la resta entre los mismos. Esto último, siempre considerando que las operaciones usuales (multiplicación, suma, resta y división) están preestablecidas para realizarse entre números reales, por lo que, usando estas, debe separase siempre el cálculo para la parte real de aquel para la parte imaginaria del número complejo resultante. 

Para mostrar que es posible programar otra operación entre complejos diferente de la suma y la resta, lo hacemos para la multiplicación en este caso. Si suponemos los números complejos a+bi y c+di, su multiplicacaión será algebraicamente ac-bd+(ad+bc)i; que es, por supuesto, otro número complejo. Basta entonces definir la parte real del número resultante como ac-bd y la imaginaria como ad+bc. 

Debe tenerse en cuenta que en el párrafo precedente a y c son las partes reales de los números, y b y d, sus partes imaginarias, respectivamente.*/ 

void Complejo::Multiplicacion(Complejo c1, Complejo c2){
	ParteReal=c1.ParteReal*c2.ParteReal-c1.ParteImaginaria*c2.ParteImaginaria; 
	ParteImaginaria=c1.ParteReal*c2.ParteImaginaria+c2.ParteReal*c1.ParteImaginaria;
}

