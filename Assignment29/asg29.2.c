#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

int CountSmall(char FName[])
{
    int fd = 0;
    int iRet = 0, i = 0, iCount = 0;
    char Buffer[1024] = {'\0'};

    fd = open(FName, O_RDONLY);
    if(fd == -1)
    {   
        printf("Unable to open the file.\n");
        return -1;
    }

    while ((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
    {
       for( i = 0; i < iRet; i++)
       {
            if(Buffer[i] >= 'a' && Buffer[i] <= 'z')
            {
                iCount++;
            }
           
       }
    }
    close(fd);
    return iCount;
    
}
int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter the file name: ");
    scanf("%s",FileName);

    iRet = CountSmall(FileName);

    printf("Number of Small character are: %d ",iRet);

    return 0;

}