#include <stdio.h>
#include <stdlib.h>

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

for(int m=0; m<100;m++){
	printf("%i\n",tab[m]);
}

return 0;
}
