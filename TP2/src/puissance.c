#include <stdio.h>


int main(){

int a = 3;
int b = 2;
int res = a;

for (int i=1; i<b; i++){
	res = a*res;
	}
	

printf("%i\n",res);

return 0;
}

