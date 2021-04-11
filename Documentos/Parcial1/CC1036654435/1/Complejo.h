#ifndef COMPLEJO_H
#define COMPLEJO_H

class Complejo
{
	public:
		Complejo(double,double,double,double);
		void asignarDatos(double,double,double,double);
		double obtenerParteReal1();
		double obtenerParteImaginaria1();
		double obtenerParteReal2();
		double obtenerParteImaginaria2();
		double sumaDeNumeros();
		double restaDeNumeros();
		double productoDeNumeros();
		void imprimirResultado(int);
		
	private: 
		// Se uso variables privadas para las partes reales he imaginarias de los dos numeros.
		double parteReal1;
		double parteImaginaria1;
		double parteReal2;
		double parteImaginaria2;
};

#endif
