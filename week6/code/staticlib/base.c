#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void showarray(int *a,int n)
{
  for(int i=0;i<n;i++)
    printf("%d : %d\n",i,a[i]);
}

void initarray(int *a,int n)
{
  srand((int)time(0));
  for(int i=0;i<n;i++)
 {
   a[i]= 1 + (int)(1000.0 * rand()/(RAND_MAX + 1.0));
  }
}
