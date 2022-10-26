#include <stdio.h>

int suite(int un_2, int un_1){

int un = un_1 + un_2;

return un;
}


int main(){
//on initialise la suite 
int un_2 = 0;
int un_1 = 1;

int n = 10;
for(int i =0; i<n; i++){
 //  on appel la fonction autant de fois qu'il faut
	int un = suite(un_2,un_1);
	un_2 = un_1;
	un_1 = un;
	printf("%i\n",un);
}


return 0;
}
