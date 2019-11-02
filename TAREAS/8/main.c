#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){

	double x= atof(argv[1]);//No utilice un ciclo ya que solo entra dos valores 
	double y= atof(argv[2]);

	if(x==0){
		//utilice un if porque estas comparado el segundo valor 
		double resultado = ((9*y)/5)+32;
		//Primero lo multiplique el y por 9 y luego entre 5 y sume 32 
		printf("%.2lf", resultado);
	} else {
		double resultado = ((y-32)*5)/9;
		//seria lo mismo que el anterior, es un poco de algebra para que la compu lo entienda
		printf("%.2lf", resultado);
	}
return 0;
} 