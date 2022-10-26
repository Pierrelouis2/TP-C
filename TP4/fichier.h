#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int lire_fichier(char * nom){

	char content[1000];
	int fd,count,size;
	
	fd = open(nom, O_RDONLY);
	size = read(fd,content,1000);
	for(count = 0; count < size; count ++){
		printf("%c",content[count]);
	}
	close(fd);
	return 0;
}



int ecrire_dans_fichier(char * nom, char * message){

	int fd,count,size;
	fd = open(nom, O_CREAT|O_WRONLY|O_APPEND, S_IRUSR|S_IWUSR);
	size = write(fd,message,strlen(message));
	close(fd);
	return 0;
}
