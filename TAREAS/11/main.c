#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Raiz(double n, double tolerancia, double candidato){
	double promedio;
	double div;	
while(fabs(div-candidato)>tolerancia){
	div=n/candidato;
	promedio=(div+candidato)/2;
	candidato=promedio;
}
long double resultado= candidato;
return resultado;
}
int main(int arg, char*argv[]){
	double x= atof(argv[1]);
	double y= atof(argv[2]);
	double z= atof(argv[3]);
	printf("%lf\n",Raiz(x,y,z));
	return 0;
}