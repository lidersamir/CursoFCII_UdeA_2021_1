#include<iostream>
#include<iomanip>

using namespace std;


int main(){

	float profundidad_promedio[]={5.0,5.5,6.0,6.5};
	float largo[]={25,30};
	float ancho[]={10,12};
	float area_de_superficie_subterranea[8];
	float volumen[8];
	float a[2],b[2], perimetro[2];
	
	cout<<" Largo   Ancho	  Profundidad	 Perímetro   Volumen	Área de superficie subterránea\n";
	cout<<"------- -------- -------------  ----------  --------- ---------------------------------\n";
	
	for (int j=0; j<2; j++){
		
		a[j]=largo[j]+ancho[j];
		b[j]=largo[j]*ancho[j];
		perimetro[j]=2*a[j];
	
		for (int i=0; i<4;i++){
		
			if(j==0){
				volumen[i]=b[j]*profundidad_promedio[i];
				area_de_superficie_subterranea[i]=perimetro[j]*profundidad_promedio[i]+b[j];}
			else{
				volumen[i+4]=b[j]*profundidad_promedio[i];
				area_de_superficie_subterranea[i+4]=perimetro[j]*profundidad_promedio[i]+b[j];}	
		}
	}
	
	for (int k=0; k<2; k++){
		for(int n=0; n<4;n++){
		
			cout<<setw(5)<<fixed<<setprecision(2)<<largo[k]
			    <<setw(8)<<fixed<<setprecision(2)<<ancho[k];
			    
			    if (k==0){
				cout<<setw(12)<<fixed<<setprecision(2)<<profundidad_promedio[n]
				<<setw(13)<<fixed<<setprecision(2)<<perimetro[k]
				<<setw(14)<<fixed<<setprecision(2)<<volumen[n]
				<<setw(23)<<fixed<<setprecision(2)<<area_de_superficie_subterranea[n]<<endl;}
			    else if (k==1){
			    	cout<<setw(12)<<fixed<<setprecision(2)<<profundidad_promedio[n]
				<<setw(13)<<fixed<<setprecision(2)<<perimetro[k]
				<<setw(14)<<fixed<<setprecision(2)<<volumen[n+4]
				<<setw(23)<<fixed<<setprecision(2)<<area_de_superficie_subterranea[n+4]<<endl;}
			   	    
		}
	}
	
	
	return 0;
}

