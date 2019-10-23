#include"dylib.h"
#include<stdio.h>
#include<stdlib.h>
#include<dlfcn.h>
int main()
{
  void *hd;
  void (*f1)();
  void (*f2)(),(*f3)();
  char *error;
  int a[5]={12,0,-154,7668,334};
  hd=dlopen("../dynamiclib/libdylib.so",RTLD_LAZY);
  if(!hd){
  fprintf(stderr,"%s\n", dlerror());
  exit(1);
}
f1=dlsym(hd,"show");
  if((error=dlerror())!=NULL)
{
  fprintf(stderr,"%s\n",dlerror());
  exit(1);
}
  f2=dlsym(hd,"max");
  if((error=dlerror())!=NULL)
{
  fprintf(stderr,"%s\n",dlerror());
  exit(1);
}
  f3=dlsym(hd,"sum");
   if((error=dlerror())!=NULL)
{
  fprintf(stderr,"%s\n",dlerror());
  exit(1);
}

  f1(a,5);
  printf("   max = %4d\n", f2(a,5));
  printf("   sum = %4d\n", f3(a,5));
  if(dlcolose(hd)<0){
    fprintf(stderr,"%s\n",dlerror());
  exit(1);
}
  return 0;
  
}
