#include<iostream>
#include<cmath>

using namespace std;

double Trapezoidal(double, double , int); //Se define la función para la regla trapezoidal
double Simpson(double, double , int); //Se define la función para la regla de integración de Simpson
double f(double); //Se define la función que va a ser integrada. Debe ser una función positiva en el intervalo [a,b]

int main(){

	double a,b, ErrorTrapezoidal, ErrorSimpson, epsilon; /* 
	a:= Límite inferior del intervalo de integración
	b:= Límite inferior del intervalo de integración
	ErrorTrapezoidal:= Diferencia entre la integral analítica y el método de integración trapezoidal
	ErrorSimpson:= Diferencia entre integral analítica y la inetgral calculada por medio de la regla de Simpson
	epsilon:= Precisión con la que desea obtenerse la integral por cada uno de los métodos*/
	int n, ns,nt; //Número de subintervalos para la integración
	cout<<"Ingrese el limite inferior del intervalo en el que desea evaluar la integral: "<<endl;
	cin>>a;
	cout<<"Ingrese el límite superior del intervalo en el que desea evaluar la interal: "<<endl;
	cin>>b;
	cout<<"Ingrese la precisión que desea tener en la interación: "<<endl;
	cin>>epsilon;
	
	
	for(n=1; n<=100000; n++){
	
	ErrorTrapezoidal=(atan(b)-atan(a))-Trapezoidal(a, b, n);//Si se cambia f, entre paréntesis debe colocarse la antiderivada evaluada en los extremos del intervalo en lugar de atan.
	
	//Condición para la precisión deseada por el usuario, una vez alcanzada se imprimen las iteraciones requeridas para alzanzarla
	if(abs(ErrorTrapezoidal)<=epsilon){
		cout<<"Para una precisión de "<<epsilon<<" se requieren "<<n<<" iteraciones con el método trapezoidal."<<endl;
		nt=n;
		break;
	}
	}
	//Condición para la precisión deseada por el usuario, una vez alcanzada se imprimen las iteraciones requeridas para alzanzarla
	for(n=1; n<=100000; n++){
	
	ErrorSimpson=(atan(b)-atan(a))-Simpson(a, b, n); //Si se cambia f, entre paréntesis debe colocarse la antiderivada evaluada en los extremos del intervalo en lugar de atan.
	if(abs(ErrorSimpson)<=epsilon){
		cout<<"Para una precisión de "<<epsilon<<" se requieren "<<n<<" iteraciones con el método de Simpson."<<endl;
		ns=n;
		break;
	}
	}
	
	if(nt>ns){
		cout<<"La regla de Simpson converge más rápidamente que la regla trapezoidal."<<endl;}
	else if(ns<nt){
	cout<<"La regla trapezoidal converge más rápidamente que la regla de Simpson."<<endl;}

	return 0;
}

//Se construye la función que va a integrarse. Puede cambiarse por cualquier otra función que se desee
double f(double x){
	double y;
	y=1/(1+pow(x,2)); //Función a integrar
	return y; //Se establece el valor que devuelve la función
}

//La regla trapezoidal depende del limite inferior del intervalo de integración, del límite superior, y del número de divisiones que se hagan en el intervalo.
double Trapezoidal(double a, double b, int n){

	double integral=0; //Variable que guarda el valor de la integral por el método trapezoidal
	double s, h;
	
	h=(b-a)/n; //Ancho de cada intervalo trapecio
	s=(f(a)+f(b))/2; 
	integral=h*s;
	for(int i=1; i<n; i++){
		integral+=h*f(a+i*h);
	}
	return integral;
} 

//La regla de  Simpson depende del limite inferior del intervalo de integración, del límite superior, y del número de divisiones que se hagan en el intervalo de integración
double Simpson(double a, double b, int n){

	double integral=0; //Variable que guarda el valor de la integral por el método  de Simpson
	double h;
	
	if(n%2!=0){n=n+1;}
	h=(b-a)/n; //Ancho de cada subintervalo
	integral=(h/3)*(f(a)+f(b));
	
	//Suma para los intervalos pares
	for(int i=1;i<(n/2);i++){
	integral+=(2*h/3)*(f(a+2*i*h));
	}
	
	//Suma para los intervalos impares 
	for(int j=1;j<=(n/2);j++){
	integral+=(4*h/3)*(f(a+(2*j-1)*h));
	}
		
		
	return integral;
}


