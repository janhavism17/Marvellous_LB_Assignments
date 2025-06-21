
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0;

    printf("Enter the file name : \n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDWR);
    if(fd == -1)
    {
        printf("file is unable to open\n");
    }
    else
    {
        printf("File opened succesfully :%d\n",fd);
        close(fd);
    }

    return 0;
}
