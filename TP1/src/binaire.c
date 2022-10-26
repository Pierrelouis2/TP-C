#include <stdio.h>

int main(){

	int nb;
	int table[32]; //creation de notre tableau
	int k =0;

	for (int i = 0; i < 32; i++) {
		table[i] = 0; //on rempli le tableau de 0
	}

	printf("\nquel nombre : ");
	scanf("%i",&nb);
	if(nb == 0){printf("0");}

	while(nb >= 1){
		
		table[k] = nb%2; // on transforme le nombre en binaire avec le modulo et on l'ajoute dans le tableau

		nb = nb/2;
		k++;
	} 

	for(int li = k-1; li>=0; li--){
		printf("%i",table[li]); // on print le tableau a l'envers pour avoir le bon chiffre binaire
	}

printf("\n");
return 0;
}
