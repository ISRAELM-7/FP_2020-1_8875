#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char*argv[])
{
	double resultado=1;
//declare esta variable para utilizarlo en la multiplicacion
	double y= atof(argv[2]);
//la transsforme el argv[2] para su facil manejo y ademas solo estran dos parametros 
	for(int i=0; i<y; i++){ //la inicialice en 0 y terminara hasta que sea meyor i  
		double x=atof(argv[1]);
 //se convierten el argv,y luego se efectua la multipliacion sin cambiar el parametro 1 
        resultado=resultado*x;		
	}
	printf("%.2lf", resultado);

	return 0;
}

