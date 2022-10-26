#include <stdio.h>
#include <stdlib.h>

int main(){

	int tab[99];

	for(int i= 0; i<100; i++){
		tab[i] = rand()%1000;

}

int max = 0;
int min =1000;
for(int i=0; i<100; i++){
	if(tab[i] > max){
		max = tab[i];
	}
	else if(tab[i] < min){
		min = tab[i];
	}
}

printf("%i\n",min);
printf("%i\n",max);	

return 0;
}





