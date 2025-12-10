#include <stdio.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 8181

int main()
{
  int s, c;
  socklen_t addrlen;
  struct sockaddr_in srv, cli;

  char buf[512];
  char *data;

  memset(&srv, 0, sizeof(srv));
  memset(&cli, 0, sizeof(cli));

  s = socket(AF_INET, SOCK_STREAM, 0);
  if (s < 0)
  {
    printf("socket() error\n");
    return -1;
  }

  srv.sin_family = AF_INET;
  srv.sin_addr.s_addr = INADDR_ANY; // better than 0
  srv.sin_port = htons(PORT);

  if (bind(s, (struct sockaddr *)&srv, sizeof(srv)) != 0)
  {
    printf("bind() failed\n");
    close(s);
    return -1;
  }

  if (listen(s, 5) != 0)
  {
    printf("listen() error\n");
    close(s);
    return -1;
  }

  printf("Listening on 0.0.0.0:%d\n", PORT);

  addrlen = sizeof(cli); // IMPORTANT

  c = accept(s, (struct sockaddr *)&cli, &addrlen);
  if (c < 0)
  {
    printf("accept() failed\n");
    close(s);
    return -1;
  }

  printf("Client connected from %s:%d\n", inet_ntoa(cli.sin_addr), ntohs(cli.sin_port));

  read(c, buf, 511);
  data = "httpd v1.0\n";
  write(c, data, strlen(data));

  close(c);
  close(s);

  return 0;
}
