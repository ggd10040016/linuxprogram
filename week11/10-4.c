#include"my.h"
int main()
{
 pid_t pid;
 int r,status;
 pid=fork();
 if(pid<0)
{
 perror("failed fork!\n");
 return -1;
}
 else if(pid==0)
{
 printf("child %d is running!\n",getpid());
 printf("chiod will exit!\n");
 while(1);
 exit(120);
}
 else
{
 printf("parent wating child %d to exit",pid);
 while((r=wait(&status))!=-1)
{
   if(WIFEXITED(status))
     printf("child %d is finished with exit code. exit code=%d!\n",r,WEXITSTATUS(status));
  else if(WIFSIGNALED(status))
      printf("child %d is finished with signal mode. signalcode =%d!\n",r,WTERMSIG(status));
   else
      printf("unknow mode!\n");
}
 
 printf("parent %d is running!\n",getpid());
 return 0;
}
}
