#include <stdio.h>

int main(){

int max = 1000;
int a;
scanf("%i",&a);
switch(a){ //on cree un switch pour nos differents cas
	case 1 :
	for(int i=0; i<=max; i++){ //on test tous les chiffre jusqu'à 1000
		if(i%2 == 0 && i%15==0){
			printf("%i\n",i); // on affiche le chiffre si il correspond a nos criteres
		}
	}
	break; // on sort du switch

	case 2 :
	for(int i=0; i<=max; i++){
		if(i%103 == 0 || i%107==0){
			printf("%i\n",i);
		}
	}
	break;
	case 3 :
	for(int i=0; i<=max; i++){
		if((i%5 == 0 || i%7==0) && (i%3!=0) ){
			printf("%i\n",i);
		}
	}
 }

	return 0;
}
