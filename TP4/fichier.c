#include <stdio.h>
#include "fichier.h"

int main(){

int lire = lire_fichier("operator.c");
int ecrire = ecrire_dans_fichier("operator.c","bonjour");
return 0;
}
