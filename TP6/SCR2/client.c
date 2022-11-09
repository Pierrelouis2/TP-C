/*
 * SPDX-FileCopyrightText: 2021 John Samuel
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <dirent.h>
#include<math.h>
#include<stdbool.h>
#include <arpa/inet.h>
#include "client.h"


/*
 * Fonction d'envoi et de réception de messages
 * Il faut un argument : l'identifiant de la socket
 */

int envoie_message(int socketfd, char *data){
  int write_status = write(socketfd, data, strlen(data));
    if (write_status < 0){
      perror("erreur ecriture");
      exit(EXIT_FAILURE);
    }
  return(EXIT_SUCCESS);
}

int lire_fichier(char * nom ){
  int bool_code = 0;
  
  
	char content[1000];
	int fd,count,size;
	
	fd = open(nom, O_RDONLY);
	size = read(fd,content,1000);
	for(count = 0; count < size; count ++){
    if (content[count] == '{'){
      char cmd1 = content[count+1];
      char cmd2 = content[count+2];
      
      char *token1 = strtok(cmd1, ":");
      char *token2 = strtok(cmd2, ":");

      while(token1 != NULL){
        if(token1 == "mesage"){
          bool_code = 1;
        }
        elseif(token1 == "calcule"){
          bool_code = 2;
        }
      }

      while(token2 != NULL){
        if(bool_code == 1){
          char *msg = token2;
        }
        if(bool_code == 2){
          char *msg = token2;
        }
      }
		printf("%c",msg);
	  }
  }
	close(fd);
	return 0;
}


int envoie_recois_message(int socketfd){
  char data[1024];
  // la réinitialisation de l'ensemble de la donnée
  memset(data, 0, sizeof(data));

  // Demandez à l'utilisateur d'entrer un message
  char message[1024];
  printf("Votre message (max 1023 caracteres): \nCommencez par 'message:' ou 'calcule:' (ex : 'caclule: 2 3 +') ==> ");
  fgets(message, sizeof(message), stdin);
  strcat(data, message);

  char code[10];
  memset(code, 0, sizeof(code));
  sscanf(data, "%s", code);
  printf("'%s'\n", code);
  printf("%s\n", data);

  if (strcmp(code, "message:") == 0) envoie_message(socketfd, data);
  if (strcmp(code, "calcule:") == 0) envoie_message(socketfd, data);

  //TP6 --------------------------------------------






  //fin TP6 --------------------------------------------

  // la réinitialisation de l'ensemble des données
  memset(data, 0, sizeof(data));

  // lire les données de la socket
  int read_status = read(socketfd, data, sizeof(data));
  if(read_status < 0){
    perror("erreur lecture");
    return -1;
  }
  printf("Message recu: %s\n", data);

  return 0;
};

int main(){
  int socketfd;
  struct sockaddr_in server_addr;

  //Creation d'une socket
  socketfd = socket(AF_INET, SOCK_STREAM, 0);
  if (socketfd < 0){
    perror("error socket");
    exit(EXIT_FAILURE);
  }

  // détails du serveur (adresse et port)
  memset(&server_addr, 0, sizeof(server_addr));
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(PORT);
  //char * ip = "192.168.221.244"; 
  //server_addr.sin_addr.s_addr =inet_addr(ip);
  server_addr.sin_addr.s_addr =INADDR_ANY;

  // demande de connection au serveur
  int connect_status = connect(socketfd, (struct sockaddr *)&server_addr, sizeof(server_addr));
  if (connect_status < 0){
    perror("error connection serveur");
    exit(EXIT_FAILURE);
  }

  // appeler la fonction pour envoyer un message au serveur
  lire_fichier("cmd.json");
  envoie_recois_message(socketfd);

  close(socketfd);
}