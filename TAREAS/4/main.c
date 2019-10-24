#include <stdio.h>
#include <stdlib.h>
int main(int argc,  char*argv[]){

//Quiero guardar el resultado de la suma en z 
	double z=0;
	for (int i=1;i<argc;i++){
//Se repetira hasta que sea menor que menor el valor de argc ya que cuenta en ./main		
		double x=atof(argv[i]);
//convertimos el caracter a entero para que realice la suma
		z=x+z;
	}
    double promedio = z/(argc-1);
//El argc-1 es para no considerar el ./main 
	printf("%.2lf", promedio);
	
	return 0;
}