#include <stdio.h>

int taille(char mot1[]){ //on va compter le nombre de caractere en regardant le caratere \0
	int i = 0;
	while(mot1[i] != '\0'){
		i++;
}
	return i;
}

char * copie(char * mot1){ //on copie le mot en copiant les lettres une par une
 
	char mot2[taille(mot1)];
	for(int i =0;i<=taille(mot1); i++){
		mot2[i] = mot1[i];
}

	printf("%s\n",mot2);

	return mot2;
}


void conca(char * mot1, char * mot2){ :// on concatene les 2 chaines en ecrivant les lettres une part une de chaque mot
	int i = 0;
	char mot3[taille(mot1) + taille(mot4)];
	for(int i =0;i<taille(mot1); i++){
		*(mot3 + i ) = *(mot1 + i);
		printf("<%s>\n",mot3);
	}
	
	for(int i =0;i<=taille(mot2); i++){
		*(mot3 + i + taille(mot1)) = *(mot2 + i);
		printf("<%s>\n",mot3);
	}
	printf("<%s>\n",mot3);
}

int main(){ //on appelle les differentes fonctions

	char mot1[] = "motun";
	int t = taille(mot1);
	printf("%i\n",t);
	char * mot2 = copie(mot1);
	char mot4[] = "motquatre";
	conca(mot1,mot4);

return 0;
}


