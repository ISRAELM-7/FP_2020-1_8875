#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
//primero hacer que esto sea un ciclo para que lea cada caracter
for (int i=1; i<argc; i++){
//se declara e inicializa los caracteres como si fuera una matriz para que los lea 
	char x=argv[i][0]; 
//Primero son los caracteres porque son mas faciles
	if (x=='A'){
		printf("11\n");
	} else {
		if (x=='J' || x=='Q' || x=='K'){
			printf("10\n");
		} else {
			//Despues se convierte los caracteres en enteros para su facil manejo
			x=atoi(argv[i]);
	switch (x){
		case 2:
		printf("2\n");
		break;
		case 3:
		printf("3\n");
		break;
		case 4:
		printf("4\n");
		break;
		case 5:
		printf("5\n");
		break;
		case 6:
		printf("6\n");
		break;
		case 7:
		printf("7\n");
		break;
		case 8:
		printf("8\n");
		break;
		case 9:
		printf("9\n");
		break;
		case 10:
		printf("10\n");
		break;}
	} //ya no es necesario agregar un defaault para que no imprima nada 
}
} return 0;}