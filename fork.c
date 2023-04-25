# include <stdio.h>
# include <sys/types.h>
#include<unistd.h>
int main(){
fork();
fork();
fork();
pid_t p,p1;
 p=getpid();
p1=getppid();
printf("usingfork() id is%d and parent is %d",p,p1);
return 0;
}