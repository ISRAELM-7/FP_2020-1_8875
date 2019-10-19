#include <stdio.h>
#include <stdlib.h>
int main(int argc,  char*argv[]){

	double z=0;
	for (int i=1;i<argc;i++){
		
		double x=atof(argv[i]);
		
		z=x+z;
	}
    double promedio = z/(argc-1);
	printf("%.2lf", promedio);
	
	return 0;
}