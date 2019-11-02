#include <stdio.h> 
#include <math.h> //utilice la libreria de matematicas paraq que lo pudiera resolver 
#include <stdlib.h>

int main(int argc, char*argv[])
{
	double x=atof(argv[1]); //se convierten el argv, y además noo es necesario un ciclo aya que entra dos variables
	double y= atof(argv[2]);

	double resultado =pow(x,y); //el pow es para las potencias 
	printf("%.2lf", resultado);

	return 0;
}
