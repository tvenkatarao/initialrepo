#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
void *mythreadfun(void *vargp)
{
 sleep(1);
printf("printing geekswise from thread \n");
return NULL;
}
 
int main()
{
pthread_t t1;
printf("before thread \n");
pthread_create(&t1,NULL, mythreadfun,NULL);
//pthread_join(t1,NULL);
printf("after thread\n");
exit(0);
} 
