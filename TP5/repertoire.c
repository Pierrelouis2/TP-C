#include "repertoire.h"
#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <string.h>


int main(int argc, char **argv){
	lire_dossier_recursif(argv[1]);
	return 0;
}

void lire_dossier(char * file_name)
{
	struct dirent * lecture;
	DIR *rep = opendir(file_name);
	if(rep == NULL ){printf("rep null");return;}
	
	while(lecture = readdir(rep)){
		printf("%s\n",lecture->d_name);
	}
	closedir(rep);
}

void lire_dossier_recursif(char * file_name)
{
	struct dirent * lecture;
	DIR *rep = opendir(file_name);
	if(rep == NULL ){printf("rep null");return;}

	while((lecture = readdir(rep)) !=NULL){
		
		if(!strcmp(".",lecture->d_name) || !strcmp("..",lecture->d_name)){continue;}
		printf("%s\n",lecture->d_name);				

		if(lecture->d_type == DT_DIR )
			{
			printf("dossier : %s\n",lecture->d_name);
			char * file_name2 = file_name;
			strncat(file_name2,"/",1);
			strncat(file_name2,lecture->d_name, sizeof(lecture->d_name));
			lire_dossier_recursif(file_name2);
			}
	}
	closedir(rep);
}
