#include <stdio.h>

int main(){
//on initialise les variables
	char type_char = 120;
	char *ptrchar = &type_char;
	short type_short = 32767;
	short *ptrshort = &type_short;
//on affiche les variables grâce aux pointeurs
	printf("%x \n",*ptrchar);
	printf("%x \n",*ptrshort);


return 0;
}
