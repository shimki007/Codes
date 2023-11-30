#include<stdio.h>
#include<fcntl.h>       // file control contain the funtionality for file manipulation
#include<unistd.h>

int main()
{
    int fd = 0;

    fd = creat("Marvellous.txt",0777);

    if(fd != -1)
    {
        printf("File is successfully created with FD : %d\n",fd);
    }
    
    return 0;
}