#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<wait.h>
#include<fcntl.h>
#include<string.h>
#include<signal.h>
#include<sys/time.h>
#include<sys/param.h>
#include<pthread.h>
struct sendval{
 int n;
 int s;
}
#define NUM 4

