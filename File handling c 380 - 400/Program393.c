#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    char Fname[20];
    int fd = 0 , Length = 0;
    char Data[100];
    int Count = 0, i = 0;

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    
    while((Length = read(fd,Data,sizeof(Data))) != 0)
    {
        for(i = 0; i < Length; i++)
        {
            
        }

    }
    printf("Size of file is %d bytes\n",Count); 
    close(fd);
    
    return 0;
}
