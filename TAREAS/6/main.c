#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
//Trato de que los valores se gaurden en z
	int z=1;
//primer ciclo para que los valores ingresados se multipliquen
	for(int i=1; i<argc; i++){
		int x=atoi(argv[i]);
	    z=x*z;  }  
//segundo ciclo paraq que divida los valores de acuerdo con el orden de la lista
	for(int i=1; i<argc; i++){
        int x=atoi(argv[i]);
		int resultado= z/x;	
		printf("%i\n", resultado);
   }

return 0;
}
