#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	pid_t p,p1,p2,p3,p4;
	p=getpid();
	p1=getppid();
	p2=getuid();
	p3=geteuid();
	p4=getgid();
	printf("%d \t , %d \t , %d \t , %d \t ",p,p1,p2,p3,p4);
	int fd,n;
	char buffer[90];
	char msg[]="hello world";
	n=sizeof(msg);
	fd=open("one1.txt",O_CREAT|O_RDWR,0777);
	if(fd!=1)
	{
		printf("file is created");
		write(fd,msg,n);
		lseek(fd,0,0);
		read(fd,buffer,n);
		printf("read data %s",buffer);
		close(fd);
	}
	return 0;
}


//output 

/*

ubuntu@ubuntu-HP-280-Pro-G5-Small-Form-Factor-PC:~$ gcc exp5.c -o t
ubuntu@ubuntu-HP-280-Pro-G5-Small-Form-Factor-PC:~$ ./t
file is createdread data hello worldubuntu@ubuntu-HP-280-Pro-G5-Small-Form-Factor-PC:~$ gedit

*/
