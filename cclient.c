#include <stdio.h>
#include <string.h>
#include <netinet/in.h>
#include <sys/socket.h>

int main(){

  int Socketclient;
  char text[1024];
  struct sockaddr_in serverAddr;
  socklen_t addr_size;

  Socketclient = socket(PF_INET, SOCK_STREAM, 0);

  serverAddr.sin_family = AF_INET;
  serverAddr.sin_port = htons(5471);
  serverAddr.sin_addr.s_addr = inet_addr("192.168.1.47");
  memset(serverAddr.sin_zero, '\0', sizeof serverAddr.sin_zero);  

  addr_size = sizeof serverAddr;

  connect(Socketclient, (struct sockaddr *) &serverAddr, addr_size);

  printf("Client:%s", text);
  scanf("%s", text);
  send(Socketclient, text, 50, 0);
  recv(Socketclient, text, 50,0);

 printf("Server:%s", text);

  return 0 ; 

}
