#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Name[30];
    char Arr[1024] = {'\0'};
    int iRet = 0;
    int fd = 0;

    printf("Please enter the file name that you want to open\n");
    scanf("%[^'\n']s",Name);

    fd = open(Name,O_RDONLY);

    printf("Data from file is : \n");
    
    while((iRet = read(fd,Arr,1024)) != 0)
    {
	    write(1,Arr,iRet);
    }

    printf("\n");

    close(fd);

    return 0;
}
