#include <stdio.h>

int main(){

	int compteur = 15;

	for(int i=0; i<= compteur; i++){
		for(int k=0; k<i; k++){
			if(k==0 | k == i-1){
				printf("*"); //on print la premier ou la dernier etoiles
			}
			else{
				printf("#"); // sinon on mets des #
			}
		}
			
	printf("\n");
	}
	for(int h=0; h<=compteur; h++){
		printf("*"); //on print la dernier ligne avec que des **
	}
	printf("\n");
	return 0;
}
