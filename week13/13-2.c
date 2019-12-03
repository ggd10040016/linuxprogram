#include"my.h"
void sigfun(int signo)
{
 switch(signo)
 {
   case 1:
     printf("Catch SIHUP\n");
     break;
   case 2:
     printf("Catch SIGINT\n");
     break;
   case 3:
     printf("Catch QUIT\n");
     break;
 }
}
int main()
{
 signal(1,sigfun);
 signal(1,sigfun);
 signal(1,sigfun);
 printf("testpid [%d]\n",getpid());
 //for(int i=0;i<1000;i++);
 //signal(1,SIG_DFL);
 return 0;
}
