#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Name[30];

    printf("Please enter the file name that you want to create\n");
    scanf("%[^'\n']s",Name);

    fd = creat(Name,0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else 
    {
        printf("File succesfully created\n");
    }

    return 0;
}