#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Utilice la librería math para el valor absoluto

double Raiz(double n, double tolerancia, double candidato){
	double promedio;
	double div;
//La condición es la diferencia de la división y el candidato para que sea mayor la tolerancia	
while(fabs(div-candidato)>tolerancia){
	div=n/candidato;
	promedio=(div+candidato)/2;
	candidato=promedio;
}
long double resultado= candidato;
//El resultado se guarda en en largo double
return resultado;
}
int main(int arg, char*argv[]){
	double x= atof(argv[1]);
	double y= atof(argv[2]);
	double z= atof(argv[3]);
	printf("%lf\n",Raiz(x,y,z));
//No se utiliza .2 en el printf para que muestre todos los decimales
	return 0;
}
