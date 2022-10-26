#include <stdio.h>

int main() {
	float a = 16;
	float b = 3;

	printf("somme : %f\n",a+b);
	printf("div : %f\n",a/b);
	printf("modulus : %i\n", ((int)a)%((int)b));
	
	printf("inf : %i\n",a<b);
	
	printf("neg : %i\n", !a);
	printf("et :%i\n", a&&b);

	printf("inc +1 :%f\n", a++);
	printf("a %f\n",a);
	printf("inc biz : %f\n",++b);
	return 0;
}

