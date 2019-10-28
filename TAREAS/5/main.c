#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
//primero hacer que sea un ciclo para que muestre los valores
for (int i=1; i<argc; i++){
//se declara e inicializa una variable pero como si fuera una matriz para que los pueda lea
	char x=argv[i][0]; 
//se utiliza switch en caso de que las condiciones se buscan igualdades
	switch (x){
		case '2':
		printf("2\n");
		break;
		case '3':
		printf("3\n");
		break;
		case '4':
		printf("4\n");
		break;
		case '5':
		printf("5\n");
		break;
		case '6':
		printf("6\n");
		break;
		case '7':
		printf("7\n");
		break;
		case '8':
		printf("8\n");
		break;
		case '9':
		printf("9\n");
		break;
		case 'J':
		printf("10\n");
		break;
		case 'Q':
		printf("10\n");
		break;
		case 'K':
		printf("10\n");
		break;
		case 'A':
		printf("11\n");
		break;
		default:
		printf("10\n"); }
}
//puse en el default el numero 10  ya que no me permite agregar como opcion en el case
return 0;

}