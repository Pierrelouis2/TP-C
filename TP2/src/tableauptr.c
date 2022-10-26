#include <stdio.h>

int main(){

	int tab[10];
	int *ptrtab = &tab[0];
	float tabf[10];
	float *ptrtabf =&tabf[0];

for(int i=0; i<10; i++){

	*ptrtab = i;
	*ptrtabf = i +0.1;
	
	printf("%i tab \n",*ptrtab);

	if( i%2 == 0){
		*ptrtab = *ptrtab *3;
		*ptrtabf = *ptrtabf *3;
	printf("%i tab if \n",*ptrtab);

	}
	ptrtab =ptrtab +i;
	ptrtabf =ptrtabf +i;
	}


return 0;
}
