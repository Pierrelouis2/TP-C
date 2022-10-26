#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

	int tab[99];

	for(int i= 0; i<100; i++){
		tab[i] = rand()%1000;

}

	for(int t = 0; t<99;t++){
		for(int i = 0; i<99;i++){

			if(tab[i]> tab[i+1]){
				int k = tab[i]-tab[i+1];
				tab[i] -= k;
				tab[i+1] += k;
			}
		}
	}

	int deb = 0;
	int fin = 99;
	bool trv = false;
	int mil;

	int nb;
	printf("votre nb : ");
	scanf("%i", &nb);


	while(trv != true && deb<=fin){
		
		mil = (deb+fin)/2;
		if (tab[mil] == nb){
			trv = true;
		}
		else{
			if(nb>tab[mil]){
				deb = mil+1;}
			else{fin = mil-1;}

		}
	}
if (trv == true){

printf("trouvé \n");
}


return 0;
}
