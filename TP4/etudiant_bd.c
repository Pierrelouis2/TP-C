#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdarg.h>


int main(){
	struct etudiant{
    char prenom[30];
    char nom[30];
    char rue[30];
    char ville[30];
    short notes[2];
    };

	struct etudiant petite_classe[10];

	char Tprenom[5][30] = {"Adrein ", "Pierre ", "Louis ", "Martin ", "Hugues "};
    char Tnom[5][30] = {"Dalb ", "Tlp ", "Telep ", "Cov ", "Fart "};
    char True[5][30] = {"Blv ", "rue ", "chm ", "imp ", "rocade "};
    char Tville[5][30] = {"lille ", "Lyon ", "marseille ", "paris ", "charbo "};
    short Tnotes[5][2] = {{12,10}, {12,10}, {12,10}, {12,10}, {12,10}};
		

    //utilisation de la structure
    for (int i=0; i<5; i++){
        strcpy(petite_classe[i].prenom, Tprenom[i]);
        strcpy(petite_classe[i].nom, Tnom[i]);
        strcpy(petite_classe[i].rue, True[i]);
        strcpy(petite_classe[i].ville, Tville[i]);
        petite_classe[i].notes[0] = Tnotes[i][0];
        petite_classe[i].notes[1] = Tnotes[i][1];
    }

	int fd,count,size;
	fd = open("etudiant.txt", O_CREAT|O_WRONLY|O_APPEND, S_IRUSR|S_IWUSR);

	for(int i=0; i<5; i++){
	char str_notes[2][3];
	sprintf(str_notes[0],"%hd",petite_classe[i].notes[0]);
	sprintf(str_notes[1],"%hd",petite_classe[i].notes[1]);
	

	size = write(fd,petite_classe[i].prenom,strlen(petite_classe[i].prenom));
	size = write(fd,petite_classe[i].nom,strlen(petite_classe[i].nom));
	size = write(fd,petite_classe[i].rue,strlen(petite_classe[i].rue));
	size = write(fd,petite_classe[i].ville,strlen(petite_classe[i].ville));

	size = write(fd,str_notes[0],strlen(str_notes[0]));
	write(fd," ",1);
	size = write(fd,str_notes[1],strlen(str_notes[1]));
	write(fd,"\n",1);
	}
	close(fd);
	



	return 0;




}
