#include <stdio.h>
#include <stdlib.h>
//Primero declaramos una función para que realice la operación suma
int Suma(int numero){
	int Suma=0;
	int Modulo;
	for(int i=1; i>0; i++){
        Modulo=numero%10;
        Suma=Suma+Modulo;
//Para calcular los dígitos de un número primero es calcular el moduloy luego guardarlo Suma
        numero=numero/10;
//Luego cambiar quitar el dígito dividiendo entre 10 y tiene que regresar entero
	}
return Suma;
}

int main(int argc, char*argv[]){
	int x=atoi(argv[1]);
//Se transforma a un entero y luego se muestra el valor
	printf("%d\n", Suma(x));
return 0;
//Se tarda un poco en correr el programa 
}
