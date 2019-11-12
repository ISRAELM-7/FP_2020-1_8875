#include <stdio.h>
#include <stdlib.h>

int Suma(int numero){
	int Suma=0;
	int Modulo;
	for(int i=1; i>0; i++){
        Modulo=numero%10;
        Suma=Suma+Modulo;
        numero=numero/10;
	}
return Suma;
}

int main(int argc, char*argv[]){
	int x=atoi(argv[1]);
	printf("%d\n", Suma(x));
return 0;
}