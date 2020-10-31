#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <signal.h>

int main(void)
{
 void sigint_handler(int sig);
 char s[200];

 if(signal(SIGNIT,signit_handler)==SIG_ERR)
 {
  perror("signal");
  exit(1);
 }


 printf("ENter a string:\n");

 if(fgets(s,200,stdin)==NULL)
 {
  perror("gets");
 }

 else
 {
  printf("you enter ed:%s\n",s);
 }

  return 0;
}

void sigint_handler(int sig)
{
 printf("Jangan Kacau Saya!\n");
}
