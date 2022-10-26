#include <stdio.h>

int main() {

	float rayon;
	printf("rayon du cercle : ");
	scanf("%f",&rayon); // on demande le rayon du cercle
	
	float aire =  3.14*rayon*rayon; //on calcul le perimetre et l'aire
	float perimetre = 2*3.14*rayon;

	printf("l'aire du cercle est : %f", aire); //on renvoie le perimetre et l'aire calcule
	printf("\n le perimetre du cercle est : %f", perimetre);
	return 0;
}
