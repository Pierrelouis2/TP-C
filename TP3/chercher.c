#include <stdio.h>
#include <stdlib.h>


int main(){

	int tab[99];

	for(int i= 0; i<100; i++){
		tab[i] = rand()%1000;

	}
int nb;
printf("votre nb : ");
scanf("%i", &nb);


for(int i = 0; i<100;i++){

	if(tab[i]==nb){
		printf("entier present");
	}
}


return 0;
}
