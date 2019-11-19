#include <stdio.h>
#include <stdlib.h>

int Persona(int N){
	if(N==0){
//El límite lo tome como 0 para que sume el cero
		return N;
	}
int z=N;
//Declare una variable z para que guarde que valor de N
z=Persona(N-1)+(z-1);
//Es sumar los saludos cuando llega una persona más los saludos anteriores a su llegada
return z;
}
int main(int argc, char*argv[]){
int x=atoi(argv[1]);
printf("%d", Persona(x));
//No declare un límite de decimales porque el resultado tiene que ser entero
return 0;
}
