#include <stdio.h>
#include <stdlib.h>

int Persona(int N){
	if(N==0){
		return N;
	}
int z=N;
z=Persona(N-1)+(z-1);
return z;
}
int main(int argc, char*argv[]){
int x=atoi(argv[1]);
printf("%d\n", Persona(x));
return 0;
}