#include <stdio.h>


int main(){

int a = 4296;
int *ptr = &a; //on initialise le pointeur


if( (*ptr & 524296) == 524296){ //524296 correspond a un 1 en 4e et 20e position on test alors le & logique
	printf("1\n");
}

else{printf("0\n");}
	
return 0;
}
