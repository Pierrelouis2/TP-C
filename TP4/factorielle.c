#include <stdio.h>

int facto(int num){

	if (num == 0) {
		return 1;
		}
	else {
		return(num * facto(num-1));
	}
}

int main(){

printf("votre nombre : ");
int nb;
scanf("%i",&nb);
int result = facto(nb);
printf("%i\n",result);
return 0;
}
