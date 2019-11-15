#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//utilice la libreria math para las operaciones de potencia y la raiz
int main(int argc, char*argv[]){
	double a=atof(argv[1]);
	double b=atof(argv[2]);
	double c=atof(argv[3]);
//se convierten los parametros de entrada en double 
	double x, x1, x2, r1, r2, i1, i2;
//se asignan valores para cada respuesta
	if(pow(b, 2)-(4*a*c)==0){
		x=-b/(2*a);
		printf("%.2lf", x);
	} else {
		if((pow(b, 2)-(4*a*c))>0){
			x1=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
			x2=(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
//se procura separar las operaciones con parentesis para que no haga otras operaciones 
		printf("%.2lf   %.2lf", x1, x2);	
		} else {
			r1=(-b)/(2*a);
			i1=(sqrt(4*a*c-pow(b, 2)))/(2*a);
			r2=(-b)/(2*a);
			i2=(-sqrt(4*a*c-pow(b, 2)))/(2*a);
			printf("%.2lf+%.2lfi    %.2lf%.2lfi", r1, i1, r2, i2);
		}
//Se imprime los resultados agregando una i un signo de suma ya que el signo de resta ya lo lleva		
	}
return 0;
}