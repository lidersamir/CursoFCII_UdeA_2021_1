class Sine{
	
	public:
	Sine( ); //El constructor de la clase
	int Factorial( int ); //Para calcular el factorial
	void Sin( double, int ); //Para calcular el seno
	void Resultado(); //Para mostrar el resultado
	
	private:
	int varX; // Variable X, a la cual se le calculará el seno
	int varN; //La precisión N, el número de términos de la serie
	}; 
