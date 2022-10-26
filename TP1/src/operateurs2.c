#include <stdio.h>

int main(){

int num1,num2;
printf("vos 2 nombres : ");
scanf("%i %i", &num1, &num2);

char op;
printf("operateur : ");
getchar();
scanf("%c",&op);

switch(op){
	case '+' : printf("%i\n",num1 + num2);break;
	case '-' : printf("%i\n",num1 - num2);break;	
	case '*' : printf("%i\n",num1 * num2);break;
	case '/' : printf("%i\n",num1 / num2);break;
	case '%' : printf("%i\n",num1 % num2);break;
	case '&' : printf("%i\n",num1 & num2);break;

	}

return 0;
}
