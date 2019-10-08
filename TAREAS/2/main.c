#include <stdio.h>

int main(int argc, char*argv[]){
	
	for (int i=1; i<argc; i++){
		
		int x;
		x=atoi(argv[i]);


		 if (x%2==0){
			 printf("Es par el %s\n", argv[i]);}
			 else { printf("Es non el %s\n", argv[i]);}
			}
			
			return 0;
}
