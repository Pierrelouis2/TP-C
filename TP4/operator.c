#include <stdio.h>
#include "operator.h"

int main(){

int num1,num2;
printf("vos 2 nombres : ");
scanf("%i %i", &num1, &num2);

char op;
printf("operateur : ");
getchar();
scanf("%c",&op);

switch(op){
	case '+' : printf("%i\n",add(num1,num2));break;
	case '-' : printf("%i\n",min(num1,num2));break;	
	case '*' : printf("%i\n",mul(num1,num2));break;
	case '/' : printf("%i\n",div(num1,num2));break;
	case '%' : printf("%i\n",mod(num1,num2));break;
	case '&' : printf("%i\n",et(num1,num2));break;
	case '|' : printf("%i\n",ou(num1,num2));break;
	case '~' : printf("%i\n",non(num1));break;
	}

return 0;
}

bonjour